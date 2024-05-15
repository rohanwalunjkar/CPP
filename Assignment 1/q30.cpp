#include <iostream>
using namespace std;

void factorial(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial *= i;
        cout<<factorial<<" ";
    }
}

int main()
{
    int a;
    cout << "Enter a number: \n";
    cin >> a;
    factorial(a);
    return 0;
}