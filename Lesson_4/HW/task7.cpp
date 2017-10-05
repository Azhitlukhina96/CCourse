// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


using namespace std;
int factorial(int N)
{
	int F = 1;

	for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}
	return F;
}

int main()
{
	int N;
	cout << "N = ";
	cin >> N;

	if (N >= 0)
	{
		cout << factorial(N);
	}
	else
	{
		cout << "Error: N < 0.";
	}

	return 0;
}
