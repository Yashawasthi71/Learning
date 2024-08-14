/* 1 #include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d%d\n", &a, &b);
    if (a == b)
    {
        printf("They are equal\n");
    }
    else
    {
        printf("They are not equal\n");
    }
    return 0;
}*/

/* 2 #include <stdio.h>

int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}*/

/* 3 #include <stdio.h>

int main()
{
    int c;
    printf("Enter Number:");
    scanf("%d", &c);
    if (c > 0)
    {
        printf("positive\n");
    }
    else if (c < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero");
    }
    return 0;
}*/

/* 4 #include <stdio.h>

int main()
{
    int d;
    printf("Enter Number:");
    scanf("%d", &d);
    if (d % 400 == 0)
    {
        printf("leap year\n");
    }
    else if (d % 100 == 0)
    {
        printf("Not leap year\n");
    }
    else if (d % 4 == 0)
    {
        printf("leap year\n");
    }
    else
    {
        printf("Not leap year\n");
    }
    return 0;
}*/

/* 5 #include <stdio.h>


int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d", &age);
    if (age >= 21)
    {
        printf("caste to vote\n");
    }
    else
    {
        printf("Not Eligible to vote\n");
    }
    return 0;
}*/

/* 6 #include <stdio.h>

int main(){
    int m;
    printf("Enter interger:");
    scanf("%d", &m);
    if (m > 0)
    {
        printf("m = %d\n", m);
    }
    else if (m < 0)
    {
        printf("m = %d\n", m);
    }
    else
    {
        printf("m = %d\n", m);
    }
    return 0;
}*/

/* 7 #include <stdio.h>

int main()
{
    int age;
    printf("Enter Height in cm:");
    scanf("%d", &age);
    if (age < 150)
    {
        printf("Dwarf Person\n");
    }
    else if (age > 150 && age < 170)
    {
        printf("averge Person\n");
    }
    else
    {
        printf("Tall Person\n");
    }
    return 0;
}*/

/* 8 #include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three Numbers:");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b >= max)
    {
        max = b;
    }
    if (c >= max)
    {
        max = c;
    }
    printf("maximum is = %d\n", max);
    return 0;
}*/

/* 9 #include <stdio.h>

int main()
{

    int x, y;
    printf("Enter x and y coordinate:");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    }
    if (x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the second quadrant.\n", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the third quadrant.\n", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the fourth quadrant.\n", x, y);
    }
    return 0;
}*/

/* 10 #include <stdio.h>

int main()
{

    int i;

    printf("0 to 10");
    i = 0;
    while (i <= 10)
    {

        printf("%d\n", i);
        i++;
    }
    printf("10 to 0");
    i = 10 ;
    while(i>=0){
        printf("%d\n",i);
        i--;
    }
    return 0;
}*/

/* 11 #include <stdio.h>

int main()
{

    int i = 1;
    int sum = 1;

    while (i <= 5)
    {
        sum *= i;
        i++;
    }
    printf("sum = %d\n", sum);
    return 0;
}*/

