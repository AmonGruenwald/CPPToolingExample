set(SRC_DIR src)

file(
    GLOB_RECURSE 
    SRC_FILES 
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} 
    CONFIGURE_DEPENDS
    "${SRC_DIR}/*.cpp"
    "${SRC_DIR}/*.h"
)

add_executable (Demo ${SRC_FILES})

target_link_libraries (Demo LINK_PUBLIC Library)

