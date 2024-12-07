cmake_minimum_required(VERSION 3.20)
project(game
	VERSION 0.0.1
    DESCRIPTION "Tabby engine example"
	HOMEPAGE_URL "https://github.com/tabdroid-1/tabby-example"
    LANGUAGES CXX
)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

###################################################################
# Local variables
###################################################################
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(PROJECT_SRC_DIR "src")
set(PROJECT_VENDOR_DIR "vendor")
set(PROJECT_ASSETS_DIR "${CMAKE_CURRENT_LIST_DIR}/assets")

###################################################################
# Target sources and create executable
###################################################################
file(GLOB_RECURSE PROJECT_SOURCES
        "${PROJECT_SRC_DIR}/*.h"
        "${PROJECT_SRC_DIR}/*.cpp"
        )

list(APPEND PROJECT_SOURCES
        vendor/stb/stb_image.cpp
        )

if (ANDROID)
    add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})
else()
    add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
endif()

set(TB_HEADLESS OFF CACHE BOOL "Enable headless mode" FORCE)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SRC_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_ASSETS_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC vendor/tabby-framework/include)
target_include_directories(${PROJECT_NAME} PUBLIC vendor/glm)
target_include_directories(${PROJECT_NAME} PUBLIC vendor/stb)


if (NOT TARGET tabby)
add_subdirectory(vendor/tabby-framework)
endif()
if (NOT TARGET glm)
add_subdirectory(vendor/glm)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE
        glm
        tabby
        tabby_flags
        )


if (DEFINED EMSCRIPTEN)

    # target_link_options(${PROJECT_NAME} PUBLIC "--preload-file ${PROJECT_ASSETS_DIR}")
    # target_link_options(${PROJECT_NAME} PRIVATE "-sMIN_WEBGL_VERSION=1")
    # target_link_options(${PROJECT_NAME} PRIVATE "-sMAX_WEBGL_VERSION=1")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -sMIN_WEBGL_VERSION=1 -sMAX_WEBGL_VERSION=1 --preload-file assets")


    set(CMAKE_EXECUTABLE_SUFFIX ".html")
    # This line is used to set your executable to build with the emscripten html
    # template so that you can directly open it.
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
    target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH="/assets/")
    # set(CMAKE_EXECUTABLE_SUFFIX ".wasm")
    # Set the asset path macro in release mode to a relative path that assumes the
    # assets folder is in the same directory as the game executable

endif (DEFINED EMSCRIPTEN)

add_custom_target(copy_assets_client
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${PROJECT_ASSETS_DIR} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/assets
        )

add_dependencies(${PROJECT_NAME} copy_assets_client)

