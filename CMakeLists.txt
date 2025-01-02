cmake_minimum_required(VERSION 3.30.6)

project("castle code")

set(CMAKE_C_STANDARD 11)

# add_library(scanner  SHARED src/scanner/lex.yy.c)

add_executable(output.exe src/main.c  src/scanner/lex.yy.c )

# link_libraries(output.exe scanner)

target_include_directories(output.exe PUBLIC scanner)
