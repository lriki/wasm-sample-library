project(app-with-lib)

set(CMAKE_EXECUTABLE_SUFFIX ".html")

string(APPEND MY_LINKER_FLAGS
    " -s WASM=1"
    " --shell-file ${CMAKE_CURRENT_LIST_DIR}/shell.html"
    " -s EXTRA_EXPORTED_RUNTIME_METHODS=\"['ccall']\" "
#    " -s MODULARIZE=1"
#    " -s NO_FILESYSTEM=1"
#    " -s DISABLE_EXCEPTION_CATCHING=1"
    " -s NO_EXIT_RUNTIME=1"
#    " -s TOTAL_MEMORY=33554432"
#    " -s ALLOW_MEMORY_GROWTH=1"
#    " -s EXPORT_NAME=\"'effekseer_native'\""
#    " -s EXPORTED_FUNCTIONS=\"['_malloc', '_free']\" "
#    " -s EXTRA_EXPORTED_RUNTIME_METHODS=\"['cwrap', 'UTF8ToString']\" "
#    " --post-js ${PROJECT_SOURCE_DIR}/js/post.js"
)

add_executable(${PROJECT_NAME} mylib.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "${MY_LINKER_FLAGS}")
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "index")
