/*10*/
#include <iostream>
using namespace std;
int main() 
{
	int a, b;
	cin >> a >> b;
	int k = (a - b + 1000) / 1000;
	int m_v = a * k + b * (1 - k);	
	cout << m_v << endl;
	return 0;
}
