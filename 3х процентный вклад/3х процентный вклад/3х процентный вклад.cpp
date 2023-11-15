// 3х процентный вклад.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    float a, b, summa;
    summa = 12;

    cout << "калькулятор процентов вклада я не знаю че это, введите количество ваших денег, и на сколько лет вы хотите вложить эти деньги" << endl;

    cout << "деньги : " << endl;
        cin >> a;
        cout << "колво лет " << endl;
        cin >> b;

        for (int i = 0; i < b+1; i++) {

            a = a + a / 100 * 3;
            cout << a << endl;
        }
        cout << a;
}
