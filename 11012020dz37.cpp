/*
* Пользователь 	вводит расстояние в милях.Перевести 	его в километры и морские мили.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите расстояние в милях : \n";
	int a;
	cin >> a;
	cout << "км. = " << a * 1.609344 << ", морских миль = " << a * 0.868976242 << endl;
	return 0;
}
