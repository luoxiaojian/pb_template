cmake_minimum_required(VERSION 3.14)
project(ProtoExample)

find_package(Protobuf REQUIRED)

add_subdirectory(protos)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/protos)
include_directories(${Protobuf_INCLUDE_DIR})

add_executable(proto_example main.cc)
target_link_libraries(proto_example protos ${Protobuf_LIBRARIES})