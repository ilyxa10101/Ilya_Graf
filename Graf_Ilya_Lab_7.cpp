#include <iostream>
#include <cmath>
using namespace std;

double value();
double value_2();

class equation {
public:
	double a;
	double b;
	double c; //c = 0
};
int main() {
	cout << "//  This program solves an equation of the form: a*sin(x) + b*cos(x) = c" << endl;
	equation one;
	one.a = value();
	one.b = value_2();
	one.c = 0;
	double res_div = one.b / one.a;
	cout << "Number c = 0" << endl;
	cout << "//  Your equation: " << one.a << "*sin(x) + " << one.b << "*cos(x) = " << one.c << endl;
	cout << "//  We divide this equation by: cos x, we get " << one.a << "*tg(x) + " << one.b << " = 0" << endl;
	cout << "//  We divide both sides of the equation by: " << one.a << ", we get: tg(x) = " << -res_div << endl;
	if (one.c == 0)
		cout << "//  x = arctg " << -res_div << " + Pi * n; n ý Z" << endl;
}
double value() {
	double number;
	while (true) {
		cout << "Enter number a: ";
		cin >> number;
		if (cin.fail() || number <= 0) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}
double value_2() {
	double number;
	while (true) {
		cout << "Enter number b: ";
		cin >> number;
		if (cin.fail() || number <= 0) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}