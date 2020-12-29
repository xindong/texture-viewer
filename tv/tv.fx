//--------------------------------------------------------------------------------------
// File: tv.fx
//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
//--------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
Texture1D tx1D : register( t0 );
Texture1DArray tx1DArray : register( t0 );

Texture2D tx2D : register( t0 );
Texture2DArray tx2DArray : register( t0 );

Texture3D tx3D : register( t0 );

SamplerState samLinear : register( s0 );

cbuffer cbArrayControl  : register( b0 )
{
    float Index;
    int Channel;
    int ToneMapping;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
    float4 Tex : TEXCOORD0;
};

struct PS_INPUT
{
    float4 Pos : SV_POSITION;
    float4 Tex : TEXCOORD0;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
PS_INPUT VS( VS_INPUT input )
{
    PS_INPUT output = (PS_INPUT)0;
    output.Pos = input.Pos;
    output.Tex = input.Tex;
    return output;
}

// Narkowicz 2015, "ACES Filmic Tone Mapping Curve"
float3 aces(float3 x) {
    const float a = 2.51;
    const float b = 0.03;
    const float c = 2.43;
    const float d = 0.59;
    const float e = 0.14;
    return clamp((x * (a * x + b)) / (x * (c * x + d) + e), 0.0, 1.0);
}

float4 getColor(float4 clr)
{
    if (Channel == 1) return float4(clr.r, clr.r, clr.r, 1);
    if (Channel == 2) return float4(clr.g, clr.g, clr.g, 1);
    if (Channel == 3) return float4(clr.b, clr.b, clr.b, 1);
    if (Channel == 4) return float4(clr.a, clr.a, clr.a, 1);

    if (ToneMapping)
        return float4(aces(clr.rgb), 1.0);
    return float4(clr.rgb, 1.0);
}

//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
float4 PS_1D( PS_INPUT input) : SV_Target
{
    return getColor(tx1D.Sample( samLinear, input.Tex.x ));
}

float4 PS_1DArray( PS_INPUT input) : SV_Target
{
    return getColor(tx1DArray.Sample( samLinear, float2(input.Tex.x, Index) ));
}

float4 PS_2D( PS_INPUT input) : SV_Target
{
    return getColor(tx2D.Sample( samLinear, input.Tex.xy ));
}

float4 PS_2DArray( PS_INPUT input) : SV_Target
{
    return getColor(tx2DArray.Sample( samLinear, float3(input.Tex.xy, Index) ));
}

float4 PS_3D( PS_INPUT input) : SV_Target
{
    int Width, Height, Depth;
    tx3D.GetDimensions( Width, Height, Depth);

    return getColor(tx3D.Sample( samLinear, float3(input.Tex.xy, Index / Depth) ));
}

float4 PS_Cube( PS_INPUT input) : SV_Target
{
    return getColor(tx2DArray.Sample( samLinear, float3(input.Tex.xy, input.Tex.z + (6*Index)) ));
}
