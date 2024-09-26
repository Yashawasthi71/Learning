// NUMBER OF DIGITS(EVEN,ODD), SUM OF EVEN ODD, REVERSE A NUMBER
#include <stdio.h>
int main()
{
    int num, count = 0, evencount = 0, oddcount = 0, evensum = 0, oddsum = 0, arm ;
    int rev = 0;
    printf("Enter a Number = ");
    scanf("%d", &num);
    while (num > 0)
    {
        int rem = num % 10;
        if (rem % 2 == 0)
        {
            evencount++;
            evensum += rem;
        }
        else
        {
            oddcount++;
            oddsum += rem;
        }
        rev = rev * 10 + rem;
        num = num / 10;
        count++;

    }
    printf("Number of digits in number = %d\n", count);
    printf("Even digits are = %d\nSum of even digits = %d\n", evencount, evensum);
    printf("Odd ditits are = %d\nSum of odd digits = %d\n", oddcount, oddsum);
    printf("Reverse od number = %d\n", rev);
    if (num == rev)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}



