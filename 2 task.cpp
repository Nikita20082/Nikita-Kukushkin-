/*2 задание*/
#include <iostream>
using namespace std;

int main()
{
int v, t;
cin >> v >> t;
int pos = v*t;
int b = pos%109;	
if (b < 0)
	pos = pos + 109;
cout << b << endl;
return 0;	
}



















