/*
 * 2) if statement and array
 */


#include <stdio.h>
#include <string.h> /* functions about working with strings */

int main(void)
{
    /*
     * let's declare variable x of type int with initial value 2 (you can omit
     * assignment, but accessing variables before assignment results in an UB)
     */
    int x = 2;

    /* read int from terminal and store in the x */
    scanf("%d", &x);

    /* print whether x is more than, less than or equal to 5 */
    if (x > 5)
        /*
         * you can omit braces if you use 1 statement (doesn't work with
         * functions though)
         */
        printf("%d is more than 5!\n", x);
    /*
     * c doesn't have elif, but since you can omit braces you can write else if
     */
    else if (x < 5)
    {
        printf("%d is less than 5!\n", x);
    }
    else
    {
        printf("%d is equal to 5!\n", x);
    }


    /*
     * c doesn't support operator overloading, so it will compare numbers as is,
     * so for some types you need to call specific functions
     */

    /*
     * c supports arrays, to use them use square brackets at the right of the
     * bariable when declaring. You can either number in brackets or declaring
     * cells (not both)
     */
    char y[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    /*
     * i'll use fgets for string reading because of its secureness (specifying
     * array length in the second argument)
     */
    fgets(y, 10, stdin);

    /* print whether string y is equal to "abc" */
    printf("%d", y == "abc"); /* WRONG! C doesn't support that and will always
                                         return false */
    printf("%d", strcmp(y, "abc")); /* OK */
}
