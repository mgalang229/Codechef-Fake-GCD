#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// simply print numbers from 1 to 'n' since adding a number to itself is similar
		// to multiplying a 2, for example:
		// let a = 1,
		// a + a = 2a
		// 1 + 1 = 2(1) = 2
		// therefore, every number is multiplied by 2 and their GCD will be 2
		for (int i = 0; i < n; i++) {
			cout << i + 1 << " ";
		}
		cout << '\n';
	}
	return 0;
}
