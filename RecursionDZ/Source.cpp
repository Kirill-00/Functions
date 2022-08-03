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
	cout << "������� ����� ��� ���������� ����������: "; cin >> N;
	cout << "��������� " << N << " = " << factorial(N) << endl;

	cout << "������� ����� ��� ���������� � �������: "; cin >> N;
	cout << "������� �������: "; cin >> p;
	cout << power(N,p) << endl;

	cout << "������� ����� ��� ���������� �������� �� ���� ��������: "; cin >> N;
	cout << fib(N);
}