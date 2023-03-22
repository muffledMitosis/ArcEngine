file(GLOB_RECURSE engine_srcs CMAKE_CONFIGURE_DEPENDS "./src/*.cpp")

# set(SDL_INCLUDES "./libs/SDL/include/")
# set(SDL_SRC "./libs/SDL/src/")

set(SDL_STATIC ON)
set(SDL_SHARED OFF)

add_subdirectory(./libs/SDL/)

add_library(ArcEngine STATIC ${engine_srcs})

target_link_libraries(ArcEngine SDL2main SDL2-static)
