// น้มุ 11052
#define MAX 1001

#include <iostream>

using namespace std;
int dp[MAX] = { 0, };

int main() {
	int n, p[MAX];
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> p[i];

	for (int i = 1; i <= n; i++) {
		dp[i] = p[i];
		for (int j = i - 1; j >= 1; j--) {
			dp[i] = max(dp[i], dp[j] + p[i - j]);
		}
	}

	cout << dp[n];
	return 0;
}