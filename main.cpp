#include <iostream>

using namespace std;
int main() {
	cout << "\n Boolen24. \n";
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� A,B,C " << endl;
	cin >> a >> b >> c;
	if (a == 0)
		cout << "� ����� 0";
	else {
		int d = b * b - 4 * a * c;
		if (d > 0)
			cout << "��������� ����� ���� ������";
		else
			cout << "��������� �� ����� ������";
    }

	int main(); {
		cout << "\n Inteder26. \n";
		int K;
		int number_day;
		cout << "������� ����� � �� 1 �� 365:";
		cin >> K;
		number_day = (K & 7) + 1;
		cout << "����� ��� ������ = " << number_day << endl;
		return 0;
    }
		

}





