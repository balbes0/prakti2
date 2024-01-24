#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Калькулятор!\nВыберите действие:\n1. Сложение\n2. ВЫчитание\n3. Деление\n4. Умножение\n5. Возведение в степень\n6. Нахождение квадратного корня\n7. Нахождение одного процента от числа\n8. Нахождение факториала числа\n0. Выход из программы \n";
	int breakolka = 0;
	double num1;
	double num2;
	int choice;
	
	while (breakolka == 0)
	{
		cout << "\nВыберите действие: ";
		cin >> choice;
		if (choice == 1) {
			cout << "Введите первое число: ";
			cin >> num1;
			cout << "Введите второе число: ";
			cin >> num2;
			cout << "Ответ: " << num1 + num2;
		}
		else if (choice == 2) {
			cout << "Введите первое число: ";
			cin >> num1;
			cout << "Введите второе число: ";
			cin >> num2;
			cout << "Ответ: " << num1 - num2;
		}
		else if (choice == 3) {
			cout << "Введите первое число: ";
			cin >> num1;
			cout << "Введите второе число: ";
			cin >> num2;
			cout << "Ответ: " << num1 / num2;
		}
		else if (choice == 4) {
			cout << "Введите первое число: ";
			cin >> num1;
			cout << "Введите второе число: ";
			cin >> num2;
			cout << "Ответ: " << num1 * num2;
		}
		else if (choice == 5) {
			cout << "Введите основание: ";
			cin >> num1;
			cout << "Введите показатель степени: ";
			cin >> num2;
			cout << "Ответ: " << pow(num1, num2);
		}
		else if (choice == 6) {
			cout << "Введите число для извлечения квадратного корня: ";
			cin >> num1;
			cout << "Ответ: " << sqrt(num1);
		}
		else if (choice == 7) {
			cout << "Введите число для вычисления его 1%: ";
			cin >> num1;
			cout << "Ответ: " << (num1 * 1.0) / 100;
		}
		else if (choice == 8) {
			cout << "Введите число для вычисления его фаткориала !: ";
			cin >> num1;
			int factorial = 1;
			for (int i = 1; i <= num1; ++i) {
				factorial *= i;
			}
			cout << "Ответ: " << factorial;
		}
		else if (choice == 0) {
			breakolka = 1;
			cout << "пока";
		}
		else {
			cout << "Выберите правильное действие!\n";
		}
	}
}