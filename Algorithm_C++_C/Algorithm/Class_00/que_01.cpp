#include <iostream>
#include<string>
#define SIZE 100
using namespace std;

int main() {
    int n, arr[SIZE] = { 0, };
    cin >> n;

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0) {
            if (arr[i] > arr[i / 3] + 1) {
                arr[i] = arr[i / 3] + 1;
            }
        }
        if (i % 2 == 0) {
            if (arr[i] > arr[i / 2] + 1) {
                arr[i] = arr[i / 2] + 1;
            }
        }
    }
    cout << arr[n] << endl;
    return 0;
}