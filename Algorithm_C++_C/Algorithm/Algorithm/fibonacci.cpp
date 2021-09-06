#include <iostream>

using ULL = unsigned long long int;

using namespace std;

int main() {

	ULL* dp, n;
	cin >> n;

	dp = new ULL[n + 1];

	// Init Dp
	for (ULL i = 0; i <= 1 && i < n; i++) {
		dp[i] = 1;
	}

	// Make Dp
	for (ULL i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	// Print All
	for (ULL i = 0; i <= n; i++) {
		cout << dp[i] << endl;
	}

	// Print Answer
	cout << "ans : " << dp[n];
}