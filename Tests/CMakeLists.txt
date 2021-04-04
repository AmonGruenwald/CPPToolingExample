set(SRC_DIR src)

file(
    GLOB_RECURSE 
    SRC_FILES 
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} 
    CONFIGURE_DEPENDS
    "${SRC_DIR}/*.cpp"
    "${SRC_DIR}/*.h"
)
add_executable(Tests  ${SRC_FILES})

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.1)

FetchContent_MakeAvailable(Catch2)

target_link_libraries(Tests PRIVATE Catch2::Catch2)
target_link_libraries (Tests LINK_PUBLIC Library)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)

include(Catch)
catch_discover_tests(Tests)