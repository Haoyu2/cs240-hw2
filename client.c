

/* 
* Author : 
* Description:
*
*
*/
#include "hw2.h"
#include <stdio.h>
#include <stdlib.h>

void getBinary(unsigned num)
{
    int j=1; int k=1;
    for(int i=sizeof(num)*8-1;i>=0;i--){
        
        if (num & j<<i) 
            putchar('1');
        else
            putchar('0');

        if ((k++ % 8)==0)  putchar(' ');
    }
    printf("\n");
}



int main(int argc, char const *argv[])
{

    /**
     * 
     * Your own testing code
     */


    printf("%d\n\n", numberof0s(1));

    printf("%d\n", any("", "c"));
    printf("%d\n", any("abc", "c"));
    printf("%d\n", any("abc", "d"));
    printf("%d\n", any("abc", ""));
    printf("%d\n", any("abc", "abc"));


    printf("%s\n", squeeze_hw2("", "c"));
    printf("%s\n", squeeze_hw2("abc", "c"));
    printf("%s\n", squeeze_hw2("abc", "d"));
    printf("%s\n", squeeze_hw2("abc", ""));
    printf("%s\n", squeeze_hw2("abc", "abc"));



    getBinary(3);
    printf("%u\n", bitrightrot(3, 1));
    getBinary(bitrightrot(3, 1));

    return 0;
}


