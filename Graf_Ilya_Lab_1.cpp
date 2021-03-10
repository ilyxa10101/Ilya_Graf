#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int weight()
{
	int m;
	while (true)
	{
		cout << "Enter body weight, m= ";
		cin >> m;

		if ((cin.fail()) || (m <= 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << " weight is wrong, enter again" << endl;
		}
		else
		{
			return m;
		}
	}
}
double angle()
{
	while (true)
	{
		double a;
		cout << "Enter the angle from 0 to 90, a=";
		cin >> a;

		if ((cin.fail()) || a <= 0 || a >= 90)
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << " angle is wrong, enter again" << endl;
		}
		else
		{
			return a;
		}
	}
}
double force()
{
	while (true)
	{

		double f;
		cout << "Enter the applied force F = ";
		cin >> f;

		if ((cin.fail()) || (f < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "applied force is wrong, enter again" << endl;
		}
		else
		{
			return f;
		}
	}
}
double friction()
{
	while (true)
	{

		double u;
		cout << "Enter the coefficient of friction U = ";
		cin >> u;

		if ((cin.fail()) || (u < 0))
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "coefficient is wrong, enter again" << endl;
		}
		else
		{
			return u;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Ru");
	const int g = 10;
	double acceleration;
	int check_weight = weight();
	double check_angle = angle();
	double check_force = force();
	double check_friction = friction();

	double friction_force = check_friction * check_weight * g * sin(check_angle);
	double force_main = check_force * cos(check_angle) - friction_force;

	check_force == 0 ? acceleration = 0 : acceleration = force_main / check_weight;

	cout << "Acceleration = " << acceleration;
	return 0;
}
