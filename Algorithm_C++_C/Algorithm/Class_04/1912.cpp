#include <iostream>
using namespace std;



int main() {
	int n;
	int a[100001] = { 0, };
	int dp[100001] = { 0, };

	cin >> n;
	cin >> a[1];
	dp[1] = a[1];
	int res = a[1];

	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		dp[i] = max(a[i], dp[i - 1] + a[i]);
		res = max(res, dp[i]);
	}

	cout << res;
}