cmake_minimum_required(VERSION 3.26)
project(ConfigDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(ConfigDemo main.cpp
        config_app.h
        Parser.h)
