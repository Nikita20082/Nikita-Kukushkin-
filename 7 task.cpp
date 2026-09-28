/*7*/
#include <iostream>
using namespace std;
int main() 
{
	int h, a, b;
	cin >> h >> a >> b;
	
	int days = (h - a + (a - b) - 1) / (a - b) + 1;
	
	cout << days << endl;
	return 0;
}
