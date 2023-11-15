// задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	num1 = 0;
		num2 = 1;

	for (int i = 0;i < 10; i++) {
		
		if (i <= 1) {

			num3 = i;
		}

		else {

			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
		}

		cout << num3 << endl;
	}
}

