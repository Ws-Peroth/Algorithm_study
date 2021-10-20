#include <iostream>
using namespace std;

int main() {
	long long int n, dp[100] = { 0, 1, 1, 0, };

	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n];
}