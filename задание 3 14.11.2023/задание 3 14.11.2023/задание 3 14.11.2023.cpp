// задание 3 14.11.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int num1;

    cout << "Введите число: ";
    cin >> num1;

 
    for (int i = 1; i <= num1; ++i) {
        if (num1 % i == 0) {
            cout << i << " ";
        }
    }


    return 0;
}