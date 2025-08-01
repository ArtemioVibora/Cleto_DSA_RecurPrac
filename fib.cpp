#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    
    int n = 7;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            cout << fib(i);
        else
            cout << fib(i) << ", ";
    }
}
