#include <iostream>
using namespace std;

int sumOfDigits(int a)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += a % 10;
        a = a / 10;
    }
    return sum;
}

int main()
{
    int a;
    cout << "Enter a 4-digit number: \n";
    cin >> a;
    if (a > 9999 || a < 999)
    {
        cout << "Enter valid input \n";
        return 0;
    }
    int ans = sumOfDigits(a);
    cout << "Sum of digits of the number is: " << ans << endl;
    return 0;
}