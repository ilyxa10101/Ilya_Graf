#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int number()
{
	while (true)
	{
		cout << "Enter amount of elements = ";
		int n;
		cin >> n;

		if (cin.fail() || n <= 0)
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Error is not correct input";
		}
		else
		{
			return n;
		}
	}
}
int main()
{
	srand(time(NULL));

	int value = number();
	double a = 0;
	int x;

	for (int i = 0; i < value; i++)
	{
		x = rand() % 10;
		cout << x << endl;
		a += pow(x, 2);
	}
	double meaning = sqrt(a / value);
	cout << "Root mean square = " << meaning << endl;
}