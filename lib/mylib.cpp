
#include <stdio.h>
#include <emscripten/emscripten.h>

extern "C" {

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char** argv) {
  printf("MyFunction Called.\n");
}

}

