#include "main.h"
#include <stdio.h>
#include <unistd.h>

void display_complex_number(complex c)
{
    if(c.im < 0){
        printf("%.2f - i\n", c.re);
    } else if(c.im != 0 && c.im != 1){
        printf("%.2f + %.1fi\n",c.re,c.im);
    } else if(c.im == 1){
        printf("%.2f + i\n", c.re);
    } else{
        printf("%.2f\n",c.re);
    }
}