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

