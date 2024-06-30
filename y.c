
/* #include <stdio.h>

int main() {
int number , rev = 0 , digit , hhh;
printf("enter a number = %d \n",number);
scanf("%d",&number );
hhh = number ;
START: digit = number%10;
rev = rev*10+digit;
number /= 10;
if(number>0)
goto START;
printf("inp num = %d",hhh);
printf("out num = %d", rev);

  return 0;
}*/

/* 1 calculator

#include <stdio.h>

int main()
{

  int c = 1;
  while (c == 1)
  {

    int option;
    printf(" 1  - add two numbers\n");
    printf(" 2 - subtract two numbers \n");
    printf(" 3  - multiply\n");
    printf(" 4  - divide \n");

    scanf("%d", &option);
    if (option == 1)
    {
      int n;
      int m;
      int addd;
      printf(" enter two numbers : ");
      scanf("%d %d", &n, &m);
      addd = n + m;
      printf("\n answer = %d ", addd);
    }

    else if (option == 2)
    {
      int a;
      int b;
      int subt;
      printf("enter two numbers :");
      scanf("%d %d ", &a, &b);
      subt = a - b;
      printf("\n answer = %d ", subt);
    }

    else if (option == 3)
    {
      int c;
      int d;
      int multi;
      printf("enter two numbers : ");
      scanf(" %d %d", &c, &d);
      multi = c * d;
      printf("\n answer = %d  ", multi);
    }

    else if (option == 4)
    {
      int e;
      int f;
      int divide;
      printf(" enter two numbers : ");
      scanf("%d %d", &e, &f);
      divide = e / f;
      printf("\n answer = %d ", divide);
    }
    else
    {
      printf("Wrong Option Selected\n");
    }
  }
  printf("enter 1 continue, 0 to exit\n");
  scanf("%d", &c);

  return 0;
}*/

/* 2 swap two numbers

 #include<stdio.h>

void swap(int *a , int *b){
int temp;
temp = *a;
*a = *b ;
*b = temp ;
}

int main(){

int a = 4  ;
int b = 2 ;
swap(&a,&b);
printf("%d \n",a);
printf("%d\n",b);

return 0;
}*/

/* 3 even or odd

#include <stdio.h>

void even_odd(int num)
{

  if (num % 2 == 0)
  {
    printf("even\n");
  }
  else
  {
    printf("odd\n");
  }
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  even_odd(n);
  return 0;
}*/

/* 4 calculate average

#include <stdio.h>

int calculate_average(int num, int num2, int num3)
{

  int average;
  average = (num + num2 + num3) / 3;
  return average;
}

int main()
{

  int a, b, c;
  int avg;
  printf(" enter numbers :");
  scanf("%d%d%d", &a, &b, &c);
  avg = calculate_average(a, b, c);
  printf("average is : %d\n", avg);

  return 0;
}*/


