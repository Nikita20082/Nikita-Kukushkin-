#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int a1 = n / 1000;     
	int a2 = (n / 100) % 10;
	int a3 = (n / 10) % 10;
	int a4 = n % 10;
	
	int res = (a1 == a4) * (a2 == a3);
	
	cout << res;
	
	return 0;
}
