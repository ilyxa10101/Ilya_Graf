#include <iostream>
using namespace std;
class Vector {
	double coords[3];
public:
	//Перегрузка оператора [] для индексации объектов:
	double& operator[](int i) {
		int k = i % 3;
		return coords[k];
	}
	//Перегрузка оператора () для присваивания координатам значений:
	Vector operator()(double x, double y, double z) {
		coords[0] = x;
		coords[1] = y;
		coords[2] = z;
		return *this;
	}
	//Перегрузка оператора () для вычисления векторного произведения:
	Vector operator()(Vector a, Vector b) {
		for (int i = 0; i < 3; i++)
			coords[i] = a[i + 1] * b[i + 2] - a[i + 2] * b[i + 1];
		return *this;
	}
	//Перегрузка оператора * для вычисления скалярного произведения:
	double operator*(Vector obj) {
		double res = 0;
		for (int i = 0; i < 3; i++)
			res += coords[i] * obj[i];
		return res;
	}
	//Конструктор с тремя аргументами:
	Vector(double x, double y, double z) {
		coords[0] = x;
		coords[1] = y;
		coords[2] = z;
	}
	//Отображения координат вектора:
	void show() {
		cout << "(" << coords[0] << ", " << coords[1] << ", " << coords[2] << ")\n";
	}
	//Конструктор без аргументов:
	Vector() {
		for (int i = 0; i < 3; i++)
			coords[i] = 0;
	}
};
int main() {
	Vector a(-1, 3, 5), b(5, 5, 5), c;
	cout << " Vector a has coordinates";
	a.show();
	cout << " Vector b has coordinates ";
	b.show();
	cout << "Scalar product a*b=" << a * b << endl;
	c(a, b);
	cout << "Vector product [ab]=";
	c.show();
}