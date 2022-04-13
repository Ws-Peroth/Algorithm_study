// https://atcoder.jp/contests/abc243/submit?taskScreenName=abc243_b
// Hit and Blow
// Solved
#include <iostream>
#include <algorithm>
#define SIZE 1000
using namespace std;

int N, input, M;
int A[SIZE] = { 0, };
int B[SIZE] = { 0, };
int findNumbers[SIZE] = { 0, };

void Input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
}

void Solve() {
	// Task 1 => cnt1
	// Task 2 => cnt2
	int cnt1 = 0, cnt2 = 0;
	
	for (int i = 0; i < N; i++) {
		if (A[i] == B[i]) cnt1++;

		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (A[i] == B[j]) cnt2++;
		}
	}

	cout << cnt1 << endl << cnt2;
}
int main() {
	Input();
	Solve();
}
