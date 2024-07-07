/*
 * 1) main function 
 */


/* stdio is a header with functions about working with i/o, streams */
#include <stdio.h>

int /* main can return any type, but it will try to cast that type to int, and
       if type is not compatible with int then function will return 0 */
main(int argc, char **argv) /* It is allowed to not receive arguments in main */
{
    /* printf is one of the ways to print text on the screen */
    printf("Hello, world!\n");

    return 0; /* that return can be omitted */
}
