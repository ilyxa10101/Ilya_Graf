#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	cout << "       ____________________________________________________________________________________________________________" << endl;
	cout << "      |         __       __   ___   __    __     ____________    _______    ________      |      ____    ____      |" << endl;
	cout << "      |     ___|  |___  |  | /  /  |  |  |  |   |____    ____|  |  ___  |  |   __   |     |     /    \\  /    \\     |" << endl;
	cout << "      |    | _ |  | _ | |  |/  /   |  |__|  |        |  |       | |   | |  |  |  |  |     |    /      \\/      \\    |" << endl;
	cout << "      |    ||_||  ||_|| |     |    |   __   |        |  |       | |   | |  |  |  |  |     |    \\              /    |" << endl;
	cout << "      |    |___|  |___| |  |\\  \\   |  |  |  |        |  |       | |___| |  |  |  |  |     |     \\            /     |" << endl;
	cout << "      |        |__|     |__| \\__\\  |__|  |__|        |__|       |_______|  |__|  |__|     |      \\          /      |" << endl;
	cout << "      |___________________________________________________________________________________|       \\        /       |" << endl;
	cout << "      |                                                                                   |        \\      /        |" << endl;
	cout << "      |                           ��� ������ ���� ���������)                              |         \\____/         |" << endl;
	cout << "      |___________________________________________________________________________________|________________________|" << endl;
	cout << endl;
	cout << "        ��� ��������� ���������� ������� ������ � ������     " << endl;
	int x;
	cout << "       ������� ���������� ������ (�� 0 �� 5):";
	cin >> x;
	cout << endl;
	switch (x)
	{
	case 0:
		x += 5;
		cout << "       ���������� ������" << x << endl;
		break;
	case 1:
		x += 4;
		cout << "       ���������� ������: " << x << endl;
		break;
	case 2:
		x += 3;
		cout << "       ���������� ������: " << x << endl;
		break;
	case 3:
		x += 2;
		cout << "       ���������� ������: " << x << endl;
		break;
	case 4:
		x++;
		cout << "       ���������� ������: " << x << endl;
		break;
	case 5:
		cout << "       ���������� ������: " << x << endl;
		break;
	default:
		cout << "       � ���������� ��� ����� �� �� 0 �� 5" << endl;
		break;
	};
	cout << "          ������� �� ��������!    _________________________ " << endl;
	cout << "                                 |      ____    ____      |" << endl;
	cout << "                                 |     /    \\  /    \\     |" << endl;
	cout << "                                 |    /      \\/      \\    |" << endl;
	cout << "                                 |    \\              /    |" << endl;
	cout << "                                 |     \\            /     |" << endl;
	cout << "                                 |      \\          /      |" << endl;
	cout << "                                 |       \\        /       |" << endl;
	cout << "                                 |        \\      /        |" << endl;
	cout << "                                 |         \\____/         |" << endl;
	cout << "                                 |________________________|" << endl;
}