
#include <stdio.h>
#include <emscripten/emscripten.h>

extern "C" {

void main_loop()
{
    printf("main_loop\n");
}

int main(int argc, char** argv)
{
    emscripten_set_main_loop(main_loop, 60, true);
    return 0;
}

}

