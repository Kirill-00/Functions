#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"//Если функция шаблонная, то её реализацию
//обязательно нужно подключить на место вызова!!!
#include"Sort.h"
#include"Sort.cpp"
#include"Statistics.h"
#include"Statistics.cpp"

void main()	
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное число: " << minValueIn(arr, n) << endl;
	cout << "Максимальное число: " << maxValueIn(arr, n) << endl;
	cout << "Массив со сдвигом на 1 в лево: " << endl; shiftLeft(arr, n); Print(arr, n);
	cout << "Массив со сдвигом на 2 в право: " << endl; shiftRight(arr, n); Print(arr, n);
	cout << del << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное число: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное число: " << maxValueIn(brr, SIZE) << endl;
	cout << "Массив со сдвигом на 1 в лево: " << endl; shiftLeft(brr, SIZE); Print(brr, SIZE);
	cout << "Массив со сдвигом на 2 в право: " << endl; shiftRight(brr, SIZE); Print(brr, SIZE);
	cout << del << endl;

	char chrr[n];
	FillRand(chrr, n);
	Print(chrr, n);
	cout << "Сумма элементов массива: " << Sum(chrr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(chrr, n) << endl;
	cout << "Минимальное число: " << minValueIn(chrr, n) << endl;
	cout << "Максимальное число: " << maxValueIn(chrr, n) << endl;
	cout << "Массив со сдвигом на 1 в лево: " << endl; shiftLeft(chrr, n); Print(chrr, n);
	cout << "Массив со сдвигом на 2 в право: " << endl; shiftRight(chrr, n); Print(chrr, n);
	cout << del << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
	cout << del << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(d_arr_2, ROWS, COLS); Print(d_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(d_arr_2, ROWS, COLS); Print(d_arr_2, ROWS, COLS);
	cout << del << endl;

	char ch_arr_2[ROWS][COLS];
	FillRand(ch_arr_2, ROWS, COLS);
	Print(ch_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(ch_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(ch_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(ch_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(ch_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(ch_arr_2, ROWS, COLS); Print(ch_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(ch_arr_2, ROWS, COLS); Print(ch_arr_2, ROWS, COLS);
	cout << del << endl;

}