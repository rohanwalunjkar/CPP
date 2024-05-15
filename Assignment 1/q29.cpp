#include <iostream>
using namespace std;

int circleArea()
{
    int radius = 0;
    cout << "Enter the radius of the circle: \n";
    cin >> radius;
    return 3.14 * radius * radius;
}

int rectangleArea()
{
    int l = 0, b = 0;
    cout << "Enter the length of the rectangle: \n";
    cin >> l;
    cout << "Enter the breadth of the rectangle: \n";
    cin >> b;
    return l * b;
}

int squareArea()
{
    int l = 0;
    cout << "Enter the length of the square: \n";
    cin >> l;
    return l * l;
}

int main()
{
    int ans = 0;
    ans = circleArea();
    cout << "Area of circle is: " << ans << endl;

    ans = rectangleArea();
    cout << "Area of rectangle is: " << ans << endl;

    ans = squareArea();
    cout << "Area of square is: " << ans << endl;
    return 0;
}