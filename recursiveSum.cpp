#include <iostream>

using namespace std;

int sumRecur(int x)
{
    if (x == 0)
    {
        return 0;
    }
    return sumRecur(x - 1) + x;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "the sum is " <<  sumRecur(n);
}
