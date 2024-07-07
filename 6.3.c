/*
 * 6.3) static
 */


#include <stdio.h>

/*
 * for global variable static means that you can use it only from this file
 * (or compile unit)
 */
static char *hw_text = "Hello, world!";

/*
 * function that returns void means that it doesn't return any value and you
 * can omit return
 */
void hello_world(void)
{
    /*
     * for local variable static means that its value will be kept between the
     * calls
     */
    static int counter = 0;

    printf("%s %d\n", hw_text, counter++);
}
