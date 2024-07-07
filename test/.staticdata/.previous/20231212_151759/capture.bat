@echo off
chcp 65001
cd "D:\DIRECTORY\test"
"msbuild" "test.sln" "/t:rebuild"
chcp 949 >nul
