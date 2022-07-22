#include"Statistics.h"
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
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
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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