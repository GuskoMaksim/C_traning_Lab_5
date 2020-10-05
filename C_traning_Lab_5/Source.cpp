#include <iostream>
#include <Windows.h>
#include <ctime>
#include "Array.h"
using namespace std;

void Z1(Array& obj)
{
	int ind = 0;
	for (int i = 0; i < obj.column; i++)
		for (int k = 0; k < obj.line; k++)
		{
			if (obj.arr[i][k] > 0)
			{
				ind = i + 1;
				i = obj.column;
				break;
			}
		};
	if (ind)
		cout << "Положительное значение в строке " << ind << endl;
	else
		cout << "Положительное значения нет" << endl;
}

int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Array f(10, 9);
	f.get_arr();
	Z1(f);
	cout << endl;
}