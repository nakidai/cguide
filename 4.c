/*
 * 4) struct, typedef
 */

/*
 * c doesn't have classes, but still has structs. You can define them that way
 */

struct vector
{
    int x, y;
};
/*
 * you need to access struct type always with the struct keyword, so for
 * convenience you can create typedef (note that definition is on the left)
 */
typedef struct vector vector;


int main(void)
{
    /* now you can create variable which will hold your cool struct */
    vector v;

    /*
     * now you can use 2 ways to edit your struct, either editing specific
     * elements:
     */
    v.x = 10;

    /*
     * or replacing with the new struct. When you assigning to a struct type,
     * you need to cast explicitly
     */
    v = (vector){.x=10, .y=20}; /* note the dot before element names */
}
