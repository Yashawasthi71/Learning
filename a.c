
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

