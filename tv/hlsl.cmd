mkdir shaders
%~dp0\..\fxc.exe tv.fx /nologo /EVS /Tvs_4_1 /Fhshaders\vs.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_1D /Tps_4_1 /Fhshaders\ps1D.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_1DArray /Tps_4_1 /Fhshaders\ps1Darray.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_2D /Tps_4_1 /Fhshaders\ps2D.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_2DArray /Tps_4_1 /Fhshaders\ps2Darray.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_3D /Tps_4_1 /Fhshaders\ps3D.h
%~dp0\..\fxc.exe tv.fx /nologo /EPS_Cube /Tps_4_1 /Fhshaders\psCube.h