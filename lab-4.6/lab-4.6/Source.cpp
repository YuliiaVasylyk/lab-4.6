// Lab_04_6.cpp
// <Василик Юлія>
// Лабораторна робота №4.6
// Вкладені цикли (while, repeat, for...to, for...downto)
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int i, k;
	P = 1;
	i = 1;
	while (i <= 15)

	{
		S = 0;
		k = 1;
		while (k <= i)

		{
			S += 1.0 / k;
			k++;

		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / ((1. * i) * (1. * i));
		i++;

	}
	cout << P << endl;

	P = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += 1.0 / k;
			k++;

		} while (k <= i);
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / ((1. * i) * (1. * i));
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)

	{
		S = 0;
		for (k = 1; k <= i; k++)

		{
			S += 1.0 / k;

		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / ((1. * i) * (1. * i));

	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--
		)

	{
		S = 0;
		for (k = i; k >= 1; k--
			)

		{
			S += 1.0 / k;
		}
		P *= (sin(1. * i) * sin(1. * i) + cos(1. * S) * cos(1. * S)) / ((1. * i) * (1. * i));
	}
	cout << P << endl;
	return 0;
}
