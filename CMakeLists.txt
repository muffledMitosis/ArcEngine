file(GLOB_RECURSE engine_srcs CMAKE_CONFIGURE_DEPENDS "./src/*.cpp")


add_library(ArcEngine STATIC ${engine_srcs})



# SPDLOG
target_include_directories(ArcEngine PUBLIC "${CMAKE_SOURCE_DIR}/libs/ArcEngine/libs/spdlog/include/")

# SDL
set(SDL_STATIC ON)
set(SDL_SHARED OFF)
add_subdirectory(./libs/SDL/)

# GLAD
set(GLAD_SRC_DIR "./libs/glad")
set(GLAD_INCLUDE_DIRS "${GLAD_SRC_DIR}/include")
file(GLOB_RECURSE GLAD_SRC CMAKE_CONFIGUR_DEPENDS "${GLAD_SRC_DIR}/src/**")
add_library(glad STATIC "${GLAD_SRC}")
target_include_directories(glad PUBLIC "${GLAD_INCLUDE_DIRS}")
target_compile_definitions(glad PRIVATE GLAD_GLAPI_EXPORT)

# GLM
add_subdirectory(./libs/glm)

target_link_libraries(ArcEngine SDL2main SDL2-static glad glm)

