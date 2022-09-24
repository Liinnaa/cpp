cmake_minimum_required(VERSION 3.0)

#set the project name
project(IsPrime)

add_executable(main main.cpp sources.cpp)

#add the lib
#add_library(mysource SHARED sources.cpp)

#add the add_executable
#add_executable(main main.cpp)

#do not forget to link
#target_link_library(main mysource)
