cmake_minimum_required(VERSION 3.16)
project(IniFile)

set(CMAKE_CXX_STANDARD 14)

add_executable(IniFile main.cpp IniReader.cpp IniReader.h IniWriter.cpp IniWriter.h)