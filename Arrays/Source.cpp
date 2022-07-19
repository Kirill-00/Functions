#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

//void shiftLeft(int arr[], const int n);

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
	//cout << "массив со сдвигом влево: "; cout << endl; shiftLeft(arr, n); cout << endl;

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
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)
		{
			arr_min = arr[i];
		}
	}
	return arr_min;
}
double minValueIn(double arr[], const int n)
{
	double arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)
		{
			arr_min = arr[i];
		}
	}
	return arr_min;
}
int maxValueIn(int arr[], const int n)
{
	int arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)
		{
			arr_max = arr[i];
		}
	}
	return arr_max;
}
double maxValueIn(double arr[], const int n)
{
	double arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)
		{
			arr_max = arr[i];
		}
	}
	return arr_max;
}
//void shiftLeft(int arr[], const int n)
//{
//	int shift = 5;
//	for (int i = 0; i < shift; i++)
//	{
//		int buffer = arr[0];
//		for (int i = 0; i < n; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[n - 1] = buffer;
//	}
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << tab; cout << endl;
//}