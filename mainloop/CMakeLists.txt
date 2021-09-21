project(mainloop)

set(CMAKE_EXECUTABLE_SUFFIX ".html")
set(MY_LINKER_FLAGS " -s WASM=1")

add_executable(${PROJECT_NAME} main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS ${MY_LINKER_FLAGS})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "index")
