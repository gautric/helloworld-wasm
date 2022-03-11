#include <config.h>
#include <stdio.h>

#include "helloworld.h"

int main(int argc, char* argv[]) {
    int ret = 0;

    if(argc == 2 ) {
        ret = helloworld(argv[1]);
    } else {
        ret = helloworld("Thomas");    
    }
    
    printf("ret = %d (" PACKAGE_STRING ",<" PACKAGE_BUGREPORT ">)\n", ret);
    return(0);
}