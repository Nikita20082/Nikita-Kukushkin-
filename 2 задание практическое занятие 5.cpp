#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	
	vector<string> ops;
	
	// идём от A к B
	while (A > B) {
		if (A % 2 == 0 && A / 2 >= B) {
			ops.push_back(":2");
			A /= 2;
		} else {
			ops.push_back("-1");
			A -= 1;
		}
	}
	
	for (auto &op : ops)
		cout << op << "n";
	
	return 0;
}
