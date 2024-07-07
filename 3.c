/*
 * 3) loop
 */


#include <stdio.h>

int main(void)
{
    /* c has three types of loops: do while, while and for */

    /*
     * do while and while loops are quite simillar, while executes expression
     * before doing cycle, do while does it after
     */ 

    int i = 0;
    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    /* for loop makes it easy to write loops as above: */
    for (int i = 0; i < 5; i++)
        printf("%d\n", i);
}
