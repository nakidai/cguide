/*
 * 5) pointer
 */


#include <stdio.h>

int main(void)
{
    /*
     * pointer is a variable that stores address of the other variable
     * to declare pointer you should use *
     */

    /* let's declare x and the variable that points to x */
    int x = 10, *px; /* note that * is near the variable, not the type */

    /* to get the adress of the variable, you should use & */
    px = &x;

    /*
     * to access variable behind the pointer, you should dereference it
     * through *
     */
    printf("x = %d; *px = %d", x, *px);

    /* also, to access fields of structs by the pointer, you can use -> */

    struct {int x;} s, *sp = &s;
    sp->x = 10; /* s.x is now 10 */
}
