
//Даны десять вещественных чисел. Найти произведение всех чётных чисел.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0, num;
	for (int i = 0; i < 10; i++)
	{
		cout << "Введите число n" << i + 1 << ": ";
		cin >> num;
		if (num % 2 == 0) {
			sum += num;
		}
	}
	cout << "Сумма чётных чисел: " << sum;
	return 0;
}

