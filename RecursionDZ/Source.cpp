#include<iostream>
using namespace std;

int factorial(int N)
{
	if (N == 1)
		return 1;

	return N * factorial(N - 1);
}
int power(int N, int p)
{
	if (p == 1)
		return N;

	return N * power(N, p - 1);
}
int fib(int N)
{
	if (N < 1)
		return 0;
	if (N == 1)
		return 1;	

	return fib(N - 1) + fib(N - 2);
}
void main()
{
	setlocale(LC_ALL, "");
	int N, p = 1;
	cout << "¬ведите число д€л вычислени€ факториала: "; cin >> N;
	cout << "‘акториал " << N << " = " << factorial(N) << endl;

	cout << "¬ведите число д€л возвидени€ в степень: "; cin >> N;
	cout << "¬ведите степень: "; cin >> p;
	cout << power(N,p) << endl;

	cout << "¬ведите число дл€ нахождени€ элемента из р€да ‘ибаначи: "; cin >> N;
	cout << fib(N);
}