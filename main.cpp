#include <iostream>

using namespace std;
int main() {
	cout << "\n Boolen24. \n";
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите A,B,C " << endl;
	cin >> a >> b >> c;
	if (a == 0)
		cout << "а равно 0";
	else {
		int d = b * b - 4 * a * c;
		if (d > 0)
			cout << "Уравнение имеет один корень";
		else
			cout << "Уравнение не имеет корней";
    }

	int main(); {
		cout << "\n Inteder26. \n";
		int K;
		int number_day;
		cout << "Введите число К от 1 до 365:";
		cin >> K;
		number_day = (K & 7) + 1;
		cout << "Номер дня недели = " << number_day << endl;
		return 0;
    }
		

}





