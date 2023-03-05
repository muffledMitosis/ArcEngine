file(GLOB_RECURSE engine_srcs CMAKE_CONFIGURE_DEPENDS "./src/*.cpp")
add_library(ArcEngine SHARED ${engine_srcs})