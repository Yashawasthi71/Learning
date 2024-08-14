/* #include <stdio.h>
int main()
{
    int x = 2;
    int y = 5;

    printf(" content in x : %d\n", x);
    printf("address  of x is : %lu\n",(unsigned long) &x);
    printf("address  of y is : %lu\n",(unsigned long) &y); // 4 bytes difference in memeory
    printf(" content in x : %d\n", *(&x));

    return 0;
}*/

/* Example of Pointers

#include <stdio.h>
int main()
{

    short int si;
    short int sj;

    short *iptr;
    short *jptr;

    iptr = &si;
    jptr = &sj;

    printf("Enter two numbers:\n");
    scanf("%hi%hi", iptr, jptr);

    printf("address of si =%p sj=%p\n", (void *)&si, (void *)&sj);

    printf(" address of si =%p sj=%p\n", (void *)iptr, (void *)jptr);

    printf("content in si = %hi sj = %hi\n", si, sj);

    printf("alternate approach to content of si=%hi sj=%hi\n", *iptr, *jptr);

    return 0;
}*/
