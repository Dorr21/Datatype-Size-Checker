cmake_minimum_required(VERSION 3.5)

project(
	datatype_size_checker
	VERSION 1.0
	DESCRIPTION "A simple tool that prints out the sizes of all primitive datatypes in C"
	LANGUAGES C
)

add_executable(checker
	src/main.c
)