/* #include<stdio.h>

int main(){
int roll_num ;
int marks[8] = { 10 , 20 , 26 , 77, 44 , 78 , 65 , 45 };
printf("enter the roll num = ");
scanf("%d",&roll_num);

printf("marks of the roll number %d is = %d \n",roll_num, marks[roll_num - 1]);
return 0;
}*/

/* #include <stdio.h>
#define MAX 10
int main()
{
  int i;
  int marks[MAX];
  printf("Enter marks for ten students \n");
  for (i = 0; i < MAX; i++)
    {scanf("%d", &marks[MAX]);}

  printf("marks for ten students \n");
  for (i = 0; i < MAX; i++)
    printf(" marks of student %d is = %d \n", i + 1, marks[i]);
           return 0;
}*/

/* #include <stdio.h>   

void Floyd(int rows)
{
  int i = 1, k = 1;
  for (i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++, k++)
    {
      printf("%d", k);
    }
    printf("\n");
  }
}

int main()
{
  int row;
  printf(" Enter the number of rows:");
  scanf("%d", &row);
  Floyd(row);
  return 0;
}*/

/* #include <stdio.h>

int countFibonachi(int num)
{
    int count = 0;
    int a = 1, b = 1;
    while (a + b < num)
    {
        count++;
        int temp;
        temp = a + b;
        a = b;
        b = temp;
    }
    return count;
}

int main()
{

    int n;
    scanf("%d", &n);
    printf("%d", countFibonachi(n));
}*/

/* #include<stdio.h>

int sum(int a , int b );

int main(){
    int a = 4 , b = 8 ;
    int total ;
    total = sum(4 , 8);
    printf("%d\n", total);
    return 0;
}


int sum( int a , int b ){
    int sum ;
    sum = a + b ;
    return sum;
}*/

/* suare root

#include <stdio.h>
#include <math.h>

int square_(int n)
{
    int square ;
    square  = n * n;
    return square ;
}

int main()
{
    int num;
    int squre ;
    scanf("%d",&num);
    squre  = square_(num);
    printf("%d\n",squre);
    return 0;
}*/

/* #include<stdio.h> 

int main(){
int a = 0 , b = 0 ;
if(a==0)
if(b==0)
printf("hello Mr");
else{
printf("hrllo Mrs");}

return 0;

}*/

/*

   1 2 3 4 3 2 1
     1 2 3 2 1
       1 2 1
         1


#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <  i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < n - i + 1; j++)
        {
            printf("%d", j);
        }
        for (int j = n - i + 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = n-i; j >=1; j--){
            printf(" ");
        }
        for( int j = i ; j>= 1; j-- ){
            printf("%d", j);
        }
            printf("\n");
    }
    return 0;
}

/*

4 3 2 1
  3 2 1
    2 1
      1

*/

/* printing table using functions 

#include <stdio.h>



short get_num();
void print_table(short num);

int main(){

short num ;

num = get_num();
print_table(num);

return 0;
}
 
 short get_num()
 {
  short value ;

  printf( " Enter a number for tables \n");
  scanf("%hi",&value);
  return value ;
 }

 void print_table( short num)
 {

  int i;
for (i = 1; i <= 10; i++)
{
printf("%hi * %d = %d \n", num , i , num*i);
}


 }*/

