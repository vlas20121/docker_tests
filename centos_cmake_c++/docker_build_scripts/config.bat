@echo off
pushd %~dp0
set ScriptsDir=%cd%\
set ProjDir=%cd%\..\project\
set ContainerName=centos_cmake_cpp
echo ScriptsDir=%ScriptsDir%
echo ProjDir=%ProjDir%
echo ContainerName=%ContainerName%
popd
