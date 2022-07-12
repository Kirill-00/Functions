#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Factorial(int a);
int Stepen(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ! " << " = " << Factorial(a) << endl;
	cout << a << " ^ " << b << " = " << Stepen(a, b) << endl;
}
int Add(int a, int b)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
int Factorial(int a)
{
	int c = 1;
	int d = a + 1;
	do
	{
		a *= (--d);
	} while (d > 1);
	return a;
}
int Stepen(int a, int b)
{
	int c = 1;
	for (int i = 0; i < b; i++)
	{
		c *= a;
	}
	return c;
}