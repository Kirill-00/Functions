#include<iostream>
using namespace std;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);

template<typename T>T Sum(T arr[], const int n);
int Sum(char arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T shiftLeft(T arr[], const int n);
template<typename T>T shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T shiftRight(T arr[], const int n);
template<typename T>T shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS);

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
	cout << "_____________________________________________" << endl;

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
	cout << "_____________________________________________" << endl;

	char chrr[n];
	FillRand(chrr, n);
	Print(chrr, n);
	cout << "Сумма элементов массива: " << Sum(chrr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(chrr, n) << endl;
	cout << "Минимальное число: " << minValueIn(chrr, n) << endl;
	cout << "Максимальное число: " << maxValueIn(chrr, n) << endl;
	cout << "Массив со сдвигом на 1 в лево: " << endl; shiftLeft(chrr, n); Print(chrr, n);
	cout << "Массив со сдвигом на 2 в право: " << endl; shiftRight(chrr, n); Print(chrr, n);
	cout << "_____________________________________________" << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(i_arr_2, ROWS, COLS); Print(i_arr_2, ROWS, COLS);
	cout << "_____________________________________________" << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(d_arr_2, ROWS, COLS); Print(d_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(d_arr_2, ROWS, COLS); Print(d_arr_2, ROWS, COLS);
	cout << "_____________________________________________" << endl;


	char ch_arr_2[ROWS][COLS];
	FillRand(ch_arr_2, ROWS, COLS);
	Print(ch_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(ch_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(ch_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(ch_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(ch_arr_2, ROWS, COLS) << endl;
	cout << "Массив со сдвигом на 2 в лево: " << endl; shiftLeft(ch_arr_2, ROWS, COLS); Print(ch_arr_2, ROWS, COLS);
	cout << "Массив со сдвигом на 3 в право: " << endl; shiftRight(ch_arr_2, ROWS, COLS); Print(ch_arr_2, ROWS, COLS);
	cout << "_____________________________________________" << endl;

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 99;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}
template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	sum += (int)arr[i];
	return sum;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "Для типа данных char невозможно вычислить среднее-арифметическое.";
}
template<typename T>T minValueIn(T arr[], const int n)
{
	T arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)
		{
			arr_min = arr[i];
		}
	}
	return arr_min;
}
template<typename T>T maxValueIn(T arr[], const int n)
{
	T arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)
		{
			arr_max = arr[i];
		}
	}
	return arr_max;
}
char minValueIn(char arr[], const int n)
{
	char arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)
		{
			arr_min = arr[i];
		}
	}
	return arr_min;
}
char maxValueIn(char arr[], const int n)
{
	char arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)
		{
			arr_max = arr[i];
		}
	}
	return arr_max;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T arr_max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < arr_max)arr_max = arr[i][j];
		}
	}
	return arr_max;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T arr_max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > arr_max)arr_max = arr[i][j];
		}
	}
	return arr_max;
}
template<typename T>T shiftLeft(T arr[], const int n)
{
	for (int i = 0; i < 1; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	return arr[n - 1];
}
template<typename T>T shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int l = 0; l < 2; l++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
				arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	return arr[ROWS - 1][COLS - 1];
}
template<typename T>T shiftRight(T arr[], const int n)
{
	for (int i = 0; i < 2; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i != 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	return arr[0];
}
template<typename T>T shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int l = 0; l < 3; l++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
				arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	return arr[ROWS - 1][COLS - 1];
}