set(SRC_DIR src)

file(
    GLOB_RECURSE 
    SRC_FILES 
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} 
    CONFIGURE_DEPENDS
    "${SRC_DIR}/*.cpp"
    "${SRC_DIR}/*.h"
)
add_library (Library ${SRC_FILES})

target_include_directories (Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

