#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, a, b;
    float c;
    cout << "Введите действие 1 - сложение, 2 - умножение, 3 - вычитание, 4 - целочисленное деление, 5 - остаток от деления";
    cin >> i;
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    if (i==1)
    {
        c = a + b;
        cout << "a + b = " << c << endl;
    }
    if (i==2)
    {
        c = a * b;
        cout << "a * b = " << c << endl;
    }
    if (i==3)
    {
        c = a - b;
        cout << "a - b = " << c << endl;
    }
    if (i==4)
    {
        c = a / b;
        cout << "a / b = " << c << endl;
    }
    if (i==5)
    {
        c = a % b;
        cout << "a % b = " << c << endl;
    }
}
