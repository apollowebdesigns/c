#include <stdio.h>

int main() {
    int  var = 20;
    int  *ip;

    ip = &var;

    printf("Address of var variable: %x\n", &var  );

    printf("Address stored in ip variable: %x\n", ip );

    printf("Value of *ip variable: %d\n", *ip );
    printf("Hello, World! \n");
    for (int i = 0; i < 10; i++) {
        printf("Hello, World! \n");
        printf("Hello, World! \n");
    }
    return 0;
}