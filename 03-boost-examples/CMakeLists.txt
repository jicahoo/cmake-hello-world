cmake_minimum_required(VERSION 3.15)
project(cmake_hello_world)
find_package(Boost 1.65.1 REQUIRED COMPONENTS
        date_time
        )
message("zhangj52: ${Boost_FOUND}")
message("boost include dirs: ${Boost_INCLUDE_DIRS}")
message("boost lib dirs: ${Boost_LIBRARY_DIRS}")
message("boost libs: ${Boost_LIBRARIES}")

set(CMAKE_CXX_STANDARD 98)

add_executable(hello_world main.cpp)
target_link_libraries(hello_world Boost::date_time)

#find_package(Boost 1.56 REQUIRED COMPONENTS
#        date_time filesystem iostreams)
#add_executable(foo foo.cc)
#target_link_libraries(foo Boost::date_time Boost::filesystem
#        Boost::iostreams)
