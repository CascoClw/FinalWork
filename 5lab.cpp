#include <iostream>
#include <stdio.h>
const int N = 10;
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int A[N] = { 12, 6, 8, 15, -2, 4, 9, -3, 14, 7 };						// Ввод массива
int i;
int nMin;
int index;

{																	// поиск минимального значения
	nMin = A[0];
	for (i = 0; i < N; i++)
	{
		if (A[i] < nMin)
		{
			nMin = A[i];
			index = i;
		}
	}
}
cout << "Минимальный элемент: " << index << endl;

int neg123;                      // первое отрицательное! Я
int neg234;														// поиск двух отрицательных значений	
int idx123;
int idx234;
for (int i = 0; i < N; i++)											// поиск первого отриц. значения
{
	if (A[i] < 0)
	{
		neg1 = A[i];
		idx1 = i;
		break;
	}
}
for (int i = idx1 + 1; i < N; i++)									// поиск второго отриц. значения
	{
		if (A[i] < 0)
		{
			neg2 = A[i];
			idx2 = i;
			break;
		}
	}
cout << "Первое отрицательное значение: " << neg1 << endl;
cout << "Второе отрицательное значение: " << neg2 << endl;

int sum = 0;														// поиск суммы между 1 и 2 отрицательными значениями
for (int i = idx1 + 1; i < idx2; ++i)
{
	sum += A[i];
}
cout << "Сумма элементов между первым и вторым отрицательным значением: " << sum << endl;

cout << "Преобразованный массив: ";
for (i = 0; i < N; i++)												// Вывод элементов массива не превышающих 10
	if (A[i] <= 10)
	{		
		cout << A[i] << ' ';
	}
for (i = 0; i < N; i++)												// Вывод элементов массива превышающих 10
	if (A[i] > 10)
	{
		cout << A[i] << ' ';
	}

}