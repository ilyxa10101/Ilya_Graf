#include <iostream>
#include <ctime>

using namespace std;

int quantity();
short question();
int* arr(int n);
int arr_max(int n, int* ar);
int arr_min(int n, int* ar);

int main()
{
	int n = quantity();
	int* a = arr(n);
	short answer = question();

	switch (answer)
	{
	case 1:
		cout << "max = " << arr_max(n, a) << endl;
		break;
	case 2:
		cout << "min = " << arr_min(n, a) << endl;
		break;
	case 3:
		cout << "max = " << arr_max(n, a) << endl;
		cout << "min = " << arr_min(n, a) << endl;
		break;
	default:
		cout << "You not entered 1 or 2 or 3, error";
		break;
	}
}
int quantity()
{
	while (true)
	{
		int n;
		cout << "Enter the upper bound of the array ";
		cin >> n;

		if (cin.fail() || n < 0)
		{
			cin.clear();
			cin.ignore(3656, '\n');
			cout << "Error is not correct input" << endl;
		}
		else
			return n;
	}
}
short question()
{
	while (true)
	{
		short answer;
		cout << "Enter 1 if max array value or 2 if min array value or 3 if you prefer to choose both: ";
		cin >> answer;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(400, '\n');
			cout << "Pls enter 1 or 2 or 3 nothing more" << endl;
		}
		else
			return answer;
	}
}
int* arr(int n)
{
	int* arr = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << "a[" << i << "] = " << arr[i] << endl;
	}
	return arr;
	delete[] arr;
}
int arr_max(int n, int* ar)
{
	short max = -10;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] > max)
			max = ar[i];
	}
	return max;
}
int arr_min(int n, int* ar)
{
	short min = 1000;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] < min)
			min = ar[i];
	}
	return min;
}