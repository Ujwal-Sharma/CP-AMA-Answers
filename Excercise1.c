#include <stdio.h>

int main(void) {
    printf("hello, world\n");
    return 0;
}

/*  I did and saw a warning "control reaches end of non-void function" produced due to 
        the option [-std=c89] combined with the option [-Wreturn-type] which is included
        in [-Wall], I avoided the warning by adding "return 0;" on the line after printf 
*/