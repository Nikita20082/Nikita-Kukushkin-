#include <iostream>
using namespace std;

int main() {
	long long A, B;
	char op;
	
	cout << "Введите выражение (например: 5 + 3): ";
	cin >> A >> op >> B;
	
	switch (op) {
	case '+':
		cout << A + B << endl;
		break;
	case '-':
		cout << A - B << endl;
		break;
	case '*':
		cout << A * B << endl;
		break;
	case '/':
		if (B != 0)
			cout << A / B << endl;
		else
			cout << "Деление на ноль!" << endl;
		break;
	default:
		cout << "Неизвестная операция!" << endl;
	}
	
	system("pause");
	return 0;
}
