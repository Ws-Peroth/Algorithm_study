#include <iostream>
using namespace std;

int dp[1001] = { 0, 1, 2, 4 };

int solve(int idx) {
    if (dp[idx]) return dp[idx];
    return dp[idx] = solve(idx - 1) + solve(idx - 2) + solve(idx - 3);
}

int main() {
    int tc, n;
    cin >> tc;

    while (tc--)
    {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}