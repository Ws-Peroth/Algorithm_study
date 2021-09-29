// 백준 10844
#include <iostream>
#define mod 1000000000
using namespace std;

int dp[101][10] = { 0, };

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {  // 2 ~ n 까지
        for (int j = 0; j <= 9; j++) {  // 0 ~ 9 (끝자리에 오는 수)
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1] % mod;
            }
            else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1] % mod;
            }
            else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i <= 9; i++) {
        sum = (sum + dp[n][i]) % mod;
    }

    cout << sum << "\n";

    return 0;
}