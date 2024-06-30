/* 1 #include<stdio.h>

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

// suare root

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
}
