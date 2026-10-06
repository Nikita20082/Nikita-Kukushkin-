#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cout << "Введите n, m, k: ";
	cin >> n >> m >> k;
	
	if (k < n * m && (k % n == 0 || k % m == 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	system("pause");
	return 0;
}
