/* 1 star printing pattern in functio

#include <stdio.h>

void star_pattern(int a)
{
    for (int i = 0, limit = 0; i <= a; i++, limit++)
    {
        if (limit == 4)
        {
            printf("\n");
            limit = 0;
        }
        printf("*");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    star_pattern(n);
    // printf("%d", n);
}*/

/* 2 #include <stdio.h>

float sum_of_series(int n)
{
    int i = 1, sign = 1;
    float sum = 0;
    do
    {

        sum = sum + (1 / (float)i * sign);
        sign = sign * -1;
        i = i + 2;
    } while (i <= n);
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    sum_of_series(n);
    printf("%f\n", sum_of_series(n));
    return 0;
}*/

/* 3 hash print pattern

#include <stdio.h>

void hash_pattern();

int main()
{
    // int rows ;
    // printf("enter number of rows = ");
    // scanf("%d",&rows);
    hash_pattern();
    return 0;
}

void hash_pattern()
{
    int spaces, rows = 8;
    int temp = spaces = rows;
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        while (spaces-- > 1)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
        temp--;
        spaces = temp;
    }
}*/

/* 4 #include <stdio.h>

void func(int a, int b)
{
    a += b;
    printf("In func, a = %d b = %d\n", a, b);
}
int main(void)
{
    int x = 5, y = 7;


    func(x, y);
    printf("In main, x = %d y = %d\n", x, y);
    return 0;
}*/

/* 5 temperatue question

 #include <stdio.h>

int main()
{

    int n = 1;
    while (n == 1)
    {

        int option;
        printf("1 - change celsius to farenheit\n");    
        printf("2 - change farenheit to celsius\n");
        printf("3 - change farenheit to kelvin\n");
        printf("4 - change kelvin to farenheit\n");
        printf("5 - change celsius to kelvin\n");
        printf("6 - change kelvin to celsius\n");
        printf("Enter option : ");
        scanf("%d", &option);

        if (option == 1)
        {
            float celsius, farenheit;
            printf("Enter celsius : ");
            scanf("%f", &celsius);
            farenheit = ((9 / 5) * celsius) + 32;
            printf(" farenheit = %0.2f \n", farenheit);
        }
        else if (option == 2)
        {
            float celsius, farenheit;
            printf(" Enter Farenheit : ");
            scanf("%f", &farenheit);
            celsius = (farenheit - 32) * 5 / 9;
            printf(" celsius = %0.2f \n ", celsius);
        }
        else if (option == 3)
        {
            float farenheit, kelvin;
            printf(" Enter farenheit :  ");
            scanf("%f", &farenheit);
            kelvin = (farenheit - 32) * 5 / 9 + 273.15;
            printf("kelvin = %0.2f \n ", kelvin);
        }
        else if (option == 4)
        {
            float farenheit, kelvin;
            printf(" Enter kelvin : ");
            scanf("%f", &kelvin);
            farenheit = (kelvin - 273.15) * 9 / 5 + 32;
            printf("farenheit = %0.2f \n ", farenheit);
        }
        else if (option == 5)
        {
            float celsius, kelvin;
            printf(" Enter celsius : ");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("kelvin = %0.2f\n", kelvin);
        }
        else if (option == 6)
        {
            float kelvin, celsius;
            printf(" Enter kelvin :  ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("celsius = %0.2f \n ", celsius);
        }
        else
        {
            printf("wrong option \n");
        }
        printf("Enter 1 to continue or 0 to exit : ");
        scanf("%d", &n);
    }

    return 0;
} */




