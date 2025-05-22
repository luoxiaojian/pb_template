include(FindProtobuf)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIR})
file(GLOB PROTO_FILES *.proto)
protobuf_generate_cpp(PROTO_SRCS PROTO_HEADERS ${PROTO_FILES})
add_library(protos ${PROTO_SRCS} ${PROTO_HEADERS})