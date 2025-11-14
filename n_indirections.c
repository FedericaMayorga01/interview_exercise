/**
* Solve the n-indirections problem. Implement the function:
*
*   int n_indirections(void* initial, unsigned int indirections);
*
* assuming that "void*" is actually an "int****..." (as many asterisks as there are indirections).
* If "indirections" is "1" then it's a single dereferencing of the pointer.
* You must assume that at the end of the indirections is the value to return.
* Precondition: "indirections" is a value greater than or equal to zero
*/
#include <stdio.h>

int n_indirections(void* initial, unsigned int indirections)
{
    int* ptr;
    ptr = initial;

    for(int i = 0; i < indirections - 1; i++){
        ptr = *(int**) ptr;
    }

    return *ptr;
}

int main (void)
{
    int value = 456;

    int *p1 = &value;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;

    printf("Value: %i\n", n_indirections((void *)p1, 1));
    printf("Value: %i\n", n_indirections((void *)p2, 2));
    printf("Value: %i\n", n_indirections((void *)p3, 3));
    printf("Value: %i\n", n_indirections((void *)p4, 4));

    return 0;
}
