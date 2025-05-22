include(FindProtobuf)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIR})
protobuf_generate_cpp(PROTO_SRC PROTO_HEADER example.proto)
add_library(protos ${PROTO_SRC} ${PROTO_HEADER})