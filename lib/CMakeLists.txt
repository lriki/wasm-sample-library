project(mylib)

set(CMAKE_EXECUTABLE_SUFFIX ".js")

set(MY_LINKER_FLAGS
    " -s WASM=1"
#    " -s MODULARIZE=1"
#    " -s NO_FILESYSTEM=1"
#    " -s DISABLE_EXCEPTION_CATCHING=1"
#    " -s NO_EXIT_RUNTIME=1"
#    " -s TOTAL_MEMORY=33554432"
#    " -s ALLOW_MEMORY_GROWTH=1"
#    " -s EXPORT_NAME=\"'effekseer_native'\""
#    " -s EXPORTED_FUNCTIONS=\"['_malloc', '_free']\" "
#    " -s EXTRA_EXPORTED_RUNTIME_METHODS=\"['cwrap', 'UTF8ToString']\" "
#    " --post-js ${PROJECT_SOURCE_DIR}/js/post.js"
)

add_executable(${PROJECT_NAME} mylib.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "${MY_LINKER_FLAGS}")

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE_DIR:mylib>/mylib.js ${CMAKE_CURRENT_LIST_DIR}/../app
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE_DIR:mylib>/mylib.wasm ${CMAKE_CURRENT_LIST_DIR}/../app
)

