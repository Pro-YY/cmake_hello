#include<stdio.h>

#include "hello.h"

int say_hello(const char *str) {
    printf("Hola, %s!\n", str);
    return 0;
}
