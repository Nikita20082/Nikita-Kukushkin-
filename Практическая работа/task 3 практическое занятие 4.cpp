#include <iostream>
#include <string>
using namespace std;

int main() {
	int X;
	cout << "Введите число: ";
	cin >> X;
	
	int values[]  = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string romans[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	
	string result = "";
	for (int i = 0; i < 13; i++) {
		while (X >= values[i]) {
			result += romans[i];
			X -= values[i];
		}
	}
	
	cout << result << endl;
	system("pause");
	return 0;
}
