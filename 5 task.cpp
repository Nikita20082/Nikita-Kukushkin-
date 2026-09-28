/*5*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	int n;
	cin >> n;	
	int h = (n / 3600) % 24;
	int m = (n / 60) % 60;
	int s = n % 60;
	cout << h << ":" 
	<< setfill('0') << setw(2) << m << ":" 
	<< setfill('0') << setw(2) << s << endl;
}

