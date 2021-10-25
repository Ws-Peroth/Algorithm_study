#include <iostream>
using namespace std;

int main() {
	int n, res = 0;
	int input[1001] = { 0, };
	int dpUpper[1001] = { 0, };
	int dpLower[1001] = { 0, };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> input[i];
	}

	// 1. Left -> Right (감소 배열)
	// 2. Right -> Left (증가 배열)
	// 3. dpUpper[i] + dpLower[i] - 1 중 최대값 탐색
	// 최대값 출력

	cout << res;
}

/*
	for (int i = 1; i <= n; i++) {
		int len = dp[i];
		cin >> a[i];
		int cur = 0;

		for (int j = 1; j < i; j++) {
			if (a[i] < a[j]) {
				cur = max(cur, dp[j]);
			}
		}
		dp[i] = cur + 1;
		res = max(res, dp[i]);
	}
*/
/*
	for (int i = 1; i <= n; i++) {
		int len = dp[i];
		cin >> a[i];
		int cur = 0;

		for (int j = 1; j < i; j++) {
			if (a[i] < a[j]) {
				cur = max(cur, dp[j]);
			}
		}
		dp[i] = cur + 1;
		res = max(res, dp[i]);
	}
*/