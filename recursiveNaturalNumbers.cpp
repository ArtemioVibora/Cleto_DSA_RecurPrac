#include <iostream>

using namespace std;

void displayNaturalNumbers(int x)
{
    if (x > 0)
    {
        displayNaturalNumbers(--x);
        cout << x + 1 << " ";
    }
}

int main()
{
    int x;
    cout << "Enter the value of n: ";
    cin >> x;
    displayNaturalNumbers(x);
}
