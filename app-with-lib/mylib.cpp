
#include <stdio.h>
#include <emscripten/emscripten.h>

extern "C" {

int EMSCRIPTEN_KEEPALIVE myFunction(int argc, char** argv) {
    printf("MyFunction Called.\n");
    return 42;
}


}
