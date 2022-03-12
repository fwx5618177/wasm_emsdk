// ./src/hello.c

#include <stdio.h>
#include <emscripten/emscripten.h>

int main(void) {

    printf("Hello World!\n");

    return 0;
}

#ifdef __cplusplus

extern "C" {

#endif

EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char** argv) {
    printf("call this callback\n");
}

#ifdef __cplusplus
}
#endif
