/*9*/
#include <iostream>
using namespace std;
int main() 
{
	int n, m;
	cin >> n >> m;
	int res = (n % m == 0) || (m % n == 0);	
	cout << res << endl;
	return 0;
}
