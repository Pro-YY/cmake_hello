#include <stdio.h>
#include <stdlib.h>

#include "hello.h"
#include "greeting/greeting.h"

int main(int argc, char *argv[]) {
    say_hello("CMake");
    greetings("CMake");
    return EXIT_SUCCESS;
}
