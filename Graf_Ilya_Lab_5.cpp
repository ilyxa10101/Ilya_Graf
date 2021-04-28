#include <iostream>
using namespace std;

int** create_array(int rows, int columns);
void fill_array(int rows, int columns, int** arr);
int printf_matrix(int rows, int columns, int** arr);
int printf_matrix_2(int rows, int columns, int** arr);
int first_number();
int second_number();

int main() {
    setlocale(LC_ALL, "Russian");

    int n = first_number();
    int m = second_number();
    int** arr;
    arr = create_array(n, m);

    fill_array(n, m, arr);
    printf_matrix(n, m, arr);
    cout << "Transpose Matrix" << endl;
    printf_matrix_2(n, m, arr);
}
int** create_array(int rows, int columns) {
    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }
    return arr;
}
void fill_array(int rows, int columns, int** arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
        {
            do
            {
                cout << "Enter element a[" << i << "][" << j << "]=";
                cin >> arr[i][j];
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(35767, '\n');
                    cout << "Please enter an error again" << endl;
                }
                else break;
            } while (true);
        }
        cout << endl;
    }
}
int first_number() {
    int n;
    while (true)
    {
        cout << "Enter the number of lines: ";
        cin >> n;

        if (cin.fail() || n < 0)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Please enter an error again" << endl;
        }
        else return n;
    }
}
int second_number() {
    int m;
    while (true)
    {
        cout << "Enter the number of columns: ";
        cin >> m;

        if (cin.fail() || m < 0)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Please enter an error again" << endl;
        }
        else return m;
    }
}
int printf_matrix(int rows, int columns, int** arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return **arr;
}
int printf_matrix_2(int rows, int columns, int** arr) {
    int** b = create_array(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
        {
            b[i][j] = arr[j][i];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return **b;
}