/* #include <stdio.h>
#define size 5
int main()
{

    int i;
    int stud_marks[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the marks of %d subjet = ", i + 1);
        scanf("%d", &stud_marks[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("value in index[%d] is %d\n", i, stud_marks[i]);
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int a[5] = {21, 43, 14, 53, 23};
    printf("%d\n", a[4]);
    return 0;
}*/

/* #include <stdio.h>

int main()
{

    int array[5];
    printf("Enter Number of elements of Array\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("value of index[%d] is %d\n", i, array[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("value of index[%d] is %d\n", i, array[i]);
    }
    return 0;
}*/

/* read marks of 5 students . calculate sum & average using arays
#include <stdio.h>
int main()
{

    int marks[5], sum = 0, average;
    printf("Enter Marks:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 5;

    printf("sum is = %d\n", sum);
    printf("average is = %d\n", average);
    return 0;
}*/

/* read array of 10 integers and count total no. of even and odd

#include <stdio.h>

int main()
{

    int array[10];
    int counteven = 0, countodd = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d\n", &array[i]);
        if (array[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }}
        printf("even = %d\n", counteven);
        printf("odd = %d\n", countodd);
    return 0;
}*/

/* read two array & store sum in third array

#include <stdio.h>

int main()
{
    int array1[5];
    int array2[5];
    int sumarray[5];
    printf("Enter  first array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter second array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("sum of index[%d] of array1 and array2 is:", i);
        printf("%d\n", array1[i] + array2[i]);
    }
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    int a[2][3] = {{2, 5, 3}, {3, 7, 9}};
    printf("%d\n", a[0][0]);
    return 0;
}*/

/* #include <stdio.h>

int main()
{

    int a[2][5];
    int sum = 0;
    printf("enter integers:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("%d\n", sum);
    return 0;
}*/

/* program to print transpose

#include <stdio.h>

int main()
{
    int d[3][4];
    printf("Enter Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    printf("Before Transpose\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++ ){
            printf("%d",d[i][j]);
        }
        printf("\n");

    }
    printf("After Transpose\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", d[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/

/* read and print array by function

#include <stdio.h>

void read_arr(int *x, int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }
}

void print_arr(int *x, int N)
{
    for (int i = 0; i < N; i++)
        
    {
        printf("%d ", x[i]);
    }
}
int main()
{
    int N;
    printf("sizeofarray:");
    scanf("%d", &N);
    int array[N];
    printf("Enter Number of Elements:\n");
    read_arr(array, N);
    print_arr(array, N);
    return 0;
}*/




