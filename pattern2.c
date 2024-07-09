/* #include <stdio.h>
int main()
{
    int num = 5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    int num = 5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++) // 1
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>

int main()
{
    int num = 5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    int num;
    printf("Enter number of Rows:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; i + j <= num; j++) // it is done by if and else statment
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}*/

/* #include <stdio.h>

int main()
{
    int k = 1, num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++, k++)
        {
            printf("%d", k);// k is printed
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
