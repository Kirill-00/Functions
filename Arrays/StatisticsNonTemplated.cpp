#include"Statistics.h"
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "Для типа данных char невозможно вычислить среднее-арифметическое.";
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	sum += (int)arr[i];
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