#include <iostream>
using namespace std;

int dp[1001] = { 0, 1, 3 };

int main() {
    int n;
    cin >> n;

    // Make Dp
    for (int i = 3; i <= n; i++) {
        dp[i] = ((dp[i - 1] % 10007) + (2 * dp[i - 2] % 10007)) % 10007;
    }

    cout << dp[n] << endl;
    return 0;

}