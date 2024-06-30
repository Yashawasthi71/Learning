#include <stdio.h>

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
}
