#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		// Let r <= g <= b (if it is not the case, do some swaps). 
		// If b > r + g + 1, then at least two blue lamps will be 
		// adjacent, so there is no solution.
		sort(a, a + 3);
		cout << (a[2] <= a[0] + a[1] + 1 ? "Yes" : "No") << '\n';
	}
	return 0;
}
