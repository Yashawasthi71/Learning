/* #include <iostream>
using namespace std;
int main()
{
   cout << " Hello World " << endl ;
   cout << " I am learning C++" << '\n';
   return 0;
}*/
// single line comment
/* #include <iostream>
using namespace std;
int main()
{
    cout << " upper source code is multi line comment " << endl;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{

    int age = 17;
    cout << age  << '\n';
    return 0;
}*/

/* #include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 6 , z = 55 ;
    cout << x + y - z  << endl;
    return 0;
} */

/* #include <iostream>

using namespace std;
int main()
{
    const int x = 33; // constant value

    cout << x << '\n';
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << " number is " << x ;
    return 0;
}*/

/* #include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x;
    cin >> y;
    int z = x + y;
    cout << "sum is :" << z << endl;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    string x = "33";
    string y = "44";
    string s = x + y;
    cout << s << '\n';
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
int x = 111;
cout << x << endl;

char aa = 'a';
cout << aa << endl;

bool a = true;
cout << a << endl;

string ss = "yash";
cout << ss << endl;

float c = 1.11;
cout << c << endl;

double d = 1.1111111;
cout << d << endl;

int size = sizeof(x);
cout << size << endl;

int f = 'a';
cout << f << endl;

return 0;
}
*/

/* #include <iostream>
using namespace std;

int main()
{

    int a = 5, b = 8;
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << " positive integer" << endl;
    }
    else
    {
        cout << " negative integer" << endl;
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int z;
    cout << "Enter the number : ";
    cin >> z;

    if (z > 0)
    {
        cout << "Positive Integer" << endl;
    }
    else if (z < 0)
    {
        cout << "Negative Integer" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
    return 0;
} */

/* #include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "numeric" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << n - j + 1;
        }
        cout << '\n';
    }
    return 0;
}8*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}8*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 1;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++, a++)
        {
            cout << a;
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = ('A' + i - 1);
            cout << ch;
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, ch++)
        {
            cout << ch;
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = ('A' + i + j - 2);
            cout << ch;
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int b = 6;
    cout << "a&b =" << (a & b) << endl; // AND
    cout << "a|b =" << (a | b) << endl; // OR
    cout << "~a =" << (~a) << endl;     // NOT
    cout << "a^b =" << (a ^ b) << endl; // XOR
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1-Inside If";
    }
    else
    {
        cout << "stage2 - Inside else";
    }
    cout << a << " " << b << endl;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int number = 3;
    cout << (25 * (++number));
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl;
    cout << c;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++) // agr i-- kardia to 0 ka infinite loop ban jaega
    {
        cout << i << " " << endl;
        i++;
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k <= 5; k++)
        {
            if (i + k == 10)
            {
                break;
            }
        }
        cout << i << " " << 1 <<endl;

    }
    return 0;
}*/

// prime number or not
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number =" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << " not a prime number" <<endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "is  a prime number" << endl;
    }
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0, rem, product = 1;
    while (num != 0)
        {
            rem = num % 10;
            sum += rem;
            product *= rem;
            num = num / 10;
        }
    cout << "product of digits =" << product << endl;
    cout << "Sum  of digits =" << sum << endl;
    cout << "Result =" << product - sum << endl;
    return 0;
} */

// checking last bit(set bit) leetcode
/* class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            // checking last bit
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};*/

// decimal to binary conversion
/* #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int ans = 0, i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << "Answer is =" << ans << endl;
    return 0;
}*/

// binary to decimal conversion
/* #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int bin;
    cin >> bin;
    int ans = 0, i = 0;
    while (bin != 0)
    {
        // int bit = bin&1;
        int digit = bin % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        bin = bin / 10;
        i++;
    }
    cout << "Answer is =" << ans << endl;
    return 0;
} */

// reverse a integer
/* #include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int rev = 0;
    while(num != 0){
        int digit = num % 10 ;
        rev = rev * 10 + digit;
        num = num/10;
    }
    cout << "Reverse is =" << rev << endl ;
    return 0;
}*/

// complement of a base 10 
/* #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // first convert decimal to binary
    int num;
    cin >> num;
    int ans = 0, i = 0, anss = 0, j = 0;
    while (num != 0)
    {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }
    // second convert 1 to 0 and 0n to 1
    if (((ans & 1) == 0) && ((ans & 0) == 1))
    {
        cout << ans << endl;
    }
    // third convert binary to decimal
    while (ans != 0)
    {
        int digit = ans % 10;
        if (digit == 1)
        {
            int anss = anss * pow(2, j);
        }
        ans = ans / 10;
        j++;
    }
    cout << "Answer is = " << anss << endl;
    return 0;
}*/
// complement of base 10 is incomplete question 



