#include <config.h>
#include <stdio.h>

#include "helloworld.h"

int main() {
   // int ret = helloworld("Thomas");
   // printf("ret = %d (from helloworld)\n", ret);
    helloworld("Thomas");
    printf("helloworld\n");
    printf ("(" PACKAGE_STRING ")\n");
    return(0);
}