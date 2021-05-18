#include <iostream>
#include <cmath>
using namespace std;
int scan();
class overload
{
public:
    int n;
    double* a, * b;
    double result = 0, x, derivation;
    void array_pick_out() {
        cout << "Enter n: ";
        n = scan();
        a = new double[n + 1];
        b = new double[n + 1];
        cout << "" << endl;
        for (int i = 0; i <= n; i++) {
            a[i] = rand() % 100;
            b[i] = rand() % 100;
        }
    }
    void array_print_a() {
        for (int i = 0; i <= n; i++)
            cout << "a[" << i << "] = " << a[i] << endl;
    }
    void array_print_b() {
        for (int i = 0; i <= n; i++)
            cout << "b[" << i << "] = " << b[i] << endl;
    }
    bool certain;
    void sum(double ptr_x) {
        for (int i = 0; i <= n; i++)
            result += (a[i] * sin(i * x)) + (b[i] * cos(i * x));
        cout << "\nq(x) = " << result << endl;
        cout << endl;
        certain = true;
        x = ptr_x;
    }
    overload operator^ (int order) {
        if (certain == true)
        {
            double* c = new double[n + 1];
            for (int i = 0; i <= n; i++)
                c[i] = a[i] * cos(i * x) * i;
            for (int j = 1; j <= order; j++) {
                derivation = 0;
                for (int i = 0; i <= n; i++) {
                    derivation += c[i] + (b[i] * sin(i * x) * i);
                    c[i] *= -i;
                }
                cout << "Derivative order " << j << " = " << derivation << endl;
            }
            delete[] c;
        }
        return *this;
    }
    void array_free() {
        delete[] a;
        delete[] b;
    }
};
int main()
{
    srand(time(0));
    overload object;
    object.array_pick_out();
    object.array_print_a();
    cout << endl;
    object.array_print_b();
    cout << endl;
    cout << "Enter x: ";
    double x;
    cin >> x;
    object.sum(x);
    cout << "Enter the order of the derivative: ";
    int order = scan();
    object^ order;
    object.array_free();
}
int scan() {
    while (true) {
        int data;
        cin >> data;
        if (cin.fail() || data < 1) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "error is not correct input " << endl;
        }
        else  return data;
    }
}
