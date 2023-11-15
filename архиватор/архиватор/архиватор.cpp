// архиватор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num[10];
    cout << "введите 10 чисел от 1 до 150" << endl;
    int summa = 0;

    for (int i = 0; i < 10; i++) {


        cin >> num[i];

        if (num[i] % 5 == 0 && num[i] < 150 && num[i] >= 1) {



            cout << num[i] << "кратно пяти" << endl;
            summa += num[i];
        }
        else if (num[i] % 7 == 0 && num[i] < 150 && num[i] >= 1) {
            cout << "кратно семи" << endl;
            summa += num[i];
        }
        else if (num[i] <= 0 || num[i] > 150)
            cout << "вы ввели число, которое не подходит под требования" << endl;

        else
            cout << "ваше число не кратно 7 и 5";
    }
    cout << "summa" << summa;
}
