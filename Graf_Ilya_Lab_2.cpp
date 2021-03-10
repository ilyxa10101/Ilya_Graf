#include<iostream>
#include<cmath>

using namespace std;

int time()
{
	while (true)
	{
		cout << "Enter time pls = ";
		int t;
		cin >> t;

		if (cin.fail() || t < 0)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error repeat pls" << endl;
		}
		else
		{
			return t;
		}
	}
}
int speed()
{
	while (true)
	{
		cout << "Enter speed pls = ";
		int V;
		cin >> V;

		if (cin.fail() || V < 0)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error repeat pls" << endl;
		}
		else
		{
			return V;
		}
	}
}
int angle()
{
	while (true)
	{
		cout << "Enter angle pls = ";
		int a;
		cin >> a;

		if (cin.fail() || a <= 0 || a >= 90)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error repeat pls" << endl;
		}
		else
		{
			return a;
		}
	}
}
int weight()
{
	while (true)
	{
		cout << "Enter weight pls = ";
		int m;
		cin >> m;

		if (cin.fail() || m <= 0)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error repeat pls" << endl;
		}
		else
		{
			return m;
		}
	}
}
double coefficient()
{
	while (true)
	{
		cout << "Enter aspect ratio pls = ";
		int u;
		cin >> u;

		if (cin.fail() || u <= 0)
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error repeat pls" << endl;
		}
		else
		{
			return u;
		}
	}
}
int main()
{
	int check_time = time();
	int check_speed = speed();
	int check_angle = angle();
	int chek_weight = weight();
	double check_coeff = coefficient();

	const int g = 10;
	double x, y;
	double k = check_coeff / chek_weight;

	for (int i = 0; i < check_time; i++)
	{
		x = (((check_speed * cos(check_angle)) / k) * (1 - exp(-k * i)));
		y = ((((g / k) + check_speed * sin(check_angle)) / k) * (1 - exp(-k * i))) - (g * i / k);
		cout << "x(" << i + 1 << ") = " << x << " ";
		cout << "y(" << i + 1 << ") = " << y << " ";
		cout << endl;
	}
}