#include <iostream>
#define DLL unsigned long long int
using namespace std;

int main() {
	DLL dp[101] = { 0, 1, 1, 1, 2, 2 }, T, n;

	cin >> T;

	for (int i = 6; i <= 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << dp[n] << endl;
	}
}