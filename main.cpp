#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "Введите первое целое число" << endl;
    cin >> a;
    cout << "Введите второе целое число" << endl;
    cin >> b;
    cout << "Сумма чисел = " << a+b;
    return 0;
}
