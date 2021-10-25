#include <iostream>
using namespace std;

int main() {
	int n, res = 0;
	int a[1001] = { 0, };
	int dp[1001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int len = dp[i];
		cin >> a[i];
		int cur = 0;

		for (int j = 1; j < i; j++) {
			if (a[i] > a[j]) {
				cur = max(cur, dp[j]);
			}
		}
		dp[i] = cur + 1;
		res = max(res, dp[i]);
	}

	cout << res;
}