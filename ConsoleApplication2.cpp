// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>// Подключение библиотеки для std

int main()
{
	using namespace std;

	double x, y, res; //
	char z;//Объявляем переменный.
start:
	cin >> x;//
	cin >> z;//Присваеваем значение переменным.
	cin >> y;//
	if (z == '+')
		res = x + y;
	else if (z == '-')
		res = x - y;
	else if (z == '*')
		res = x*y;
	cout << "result: " << res << endl;//Выводим на экран результат, std::endl-переход на следующею строку.

	goto start;//Возврат в начало программы
	return(0);
}