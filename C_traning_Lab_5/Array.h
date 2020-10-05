#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Array
{
protected:
	int column, line;
	int** arr;
public:
	Array()
	{
		cout << "Введите количество колонок: ";
		cin >> column;
		cout << "Введите количество строк: ";
		cin >> line;
		*arr = new int[column];
		for (int i = 0; i < column; i++)
		{
			arr[i] = new int[line];
		}
		set_arr();
	}
	Array(int new_x, int new_y):
		column(new_x),
		line(new_y)
	{
		arr = new int* [column];
		for (int i = 0; i < column; i++)
		{
			arr[i] = new int[line];
		}
		set_arr();
	}
	void set_arr()
	{

		for (int i = 0; i < column; i++)
		{
			for (int k = 0; k < line; k++)
			{
				arr[i][k] = -100 + rand() % 110;
			}
		}
	}
	friend void Z1(Array &arr);
	void get_arr()
	{
		for (int i = 0; i < line; i++)
			cout << "----------";
		cout << endl;
		for (int i = 0; i < column; i++)
		{
			for (int k = 0; k < line; k++)
			{
				cout << "|";
				cout.width(8);
				cout << arr[i][k] << " ";
			}
			cout << "|" << endl;
		}
		for (int i = 0; i < line; i++)
			cout << "----------";
		cout << endl;
	}
	~Array()
	{
		for (int i = 0; i < column; i++)
		{
			delete[] arr[column];
		}
		delete[] arr;
	}
};