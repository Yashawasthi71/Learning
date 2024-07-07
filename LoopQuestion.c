/* number guessing game
#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        printf("\nEnter a Number Between 1 to 50:");
        scanf("%d", &num);
        if (num > 0 && num < 15)
        {
            printf("you are close to number");
        }
        if ((num >= 15 && num <= 20) && (num >= 20 && num <= 25))
        {
            printf("you are very very close to number");
        }
        if (num > 25 && num < 50)
        {
            printf("you are not near the number ");
        }
        if (num == 19)
            break;
    }
    printf("You Win the Game!!!");
    return 0;
}*/

/* #include <stdio.h>
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("\n%d", i);
        for (int j = 0; j < i; j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}*/

/* 1 to N natural Number printing and  sum
#include <stdio.h>
int main()
{
    int N, sum = 0;
    printf("Enter Last Term:");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        printf(" %d ", i);
        sum += i;
    }
    printf("\n sum from 1 to N: %d\n", sum);
    return 0;
}*/

/* Rocket Launching Countdown

#include<stdio.h>
int main()
{
int N = 0 ;
printf("Start of Rocket Lauch countdown!!\n");
for(int i = 10 ; i >= N ; i--)
{ printf("%d\n",i);}
printf("Rocket is Launching\n");
return 0;
}*/

/* sum of odd num output by user

#include <stdio.h>
int main()
{

    int sum = 0, N, count = 0;
    printf("Enter how much times:");
    scanf("%d", &N);
    for (int i = 1; count < N; count++, i += 2)
    {
        sum += i;
    }
    printf("sum is:%d\n", sum);
    return 0;
}*/

/* #include<stdio.h>
int main(){
    int million = 10000000/;
    int count = 0 ;
    for(int i = 1 ;i < million ; i *= 2,count++ ){}
    printf("%d\n",count);
    return 0;
}*/

/* print pattern 11 22 33 44 55 66 77 NN

#include <stdio.h>
int main()
{
    int N;
    printf("Enter interger:");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    printf("%d%d ", i, i);
    printf("\n");
    return 0;
}*/

/* print pattern
1
22
333
4444
55555
nnnnnn

#include <stdio.h>
int main()
{

    int N;
    printf("Enter nth term:");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
            if (i == j)
            {
                printf("\n");
            }
        }
    }
    return 0;
}*/

