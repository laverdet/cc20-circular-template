cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)
project(example LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)

add_executable(example)
target_sources(example
	PUBLIC
		main.cc
)
