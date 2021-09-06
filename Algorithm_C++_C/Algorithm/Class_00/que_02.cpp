#include <iostream>
#define SIZE 1000

using namespace std;

int main() {

	int dp[SIZE + 1] = { 0, 1, 2, 0, };
	int n;
	cin >> n;

	// Make Dp
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}

	// Print Answer
	cout << dp[n];

	return 0;
}