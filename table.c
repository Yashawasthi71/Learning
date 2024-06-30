/*  1 simple electric bill calculation

#include<stdio.h>
int main()
{
  int cpu = 7 , unit  ;
  int  bill ;

   printf("how many units = ");
  scanf("%d",&unit);

   bill = unit * cpu ;

  printf("bill = %d \n",bill);
  return 0;


} */

/* 2 area of a circle

#include<stdio.h>
 #define PI 3.142

 int main(){

int area , radius ;

printf("Radius = ");
scanf("%d",&radius);

area = PI * radius * radius ;

printf("area  of a circle = %d\n",area);
return 0;
} */

/* 3  area of triangle  simple herons formula

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float s, area;

    scanf("%f%f%f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        s = (a + b + c) / 2; // parenthesis error
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area of triangle = %f", area);
    }
    else
    {
        printf(" sides are not equal ");
    }

    return 0;
} */

/* 4 average of three int num

#include<stdio.h>

int main(){
 int a ,  b ,  c ;
 float avg ;
printf(" three numbers = ");
scanf("%d%d%d",&a , &b ,&c);

 avg = (a + b + c) / 3.0 ;
printf("average =  %.2f\n", avg);

return 0;

}*/

/* 5 fence of circlar field

#include<stdio.h>
#include<math.h>
#define PI 3.142

int main(){
float  area , radius , circumfrance ;

printf("area = ");
scanf("%f",&area );

radius = sqrt(area/PI);

circumfrance = 2 * PI * radius ;
circumfrance = circumfrance * 6;

printf("wire quantity required = %f\n", circumfrance);

return 0;
}*/

/* 6 guess lucky number


#include<stdio.h>

int main(){

    short num ;

printf("guess the lucky  number between 1 to 100 = ");
scanf("%hi",&num);

if(num == 100)
{
    printf("congratulations !! you gussed it right ...\n");

}
else
{ printf("try again !!\n");}

return 0;
}*/

/* 7 number is even or odd

#include<stdio.h>
#include<math.h>
int main(){
int n ;
printf(" write the num = ");
scanf("%d",&n);

if( n % 2 == 0 )
{ printf("number is even\n"); }

else { printf("number id odd \n"); }
return 0;

} */

/* 8 small num in 3  numbers

#include <stdio.h>

int main()
{

    int a, b, c;
    int small;

    printf("enter three numbers =  ");
    scanf("%d%d%d", &a, &b, &c);

    small = a;

    if (small > b)
    {
        small = b;
    }

    else if (small > c)
    {
        small = c;
    }

    printf(" small = %d \n", small);

    return 0;
} */

