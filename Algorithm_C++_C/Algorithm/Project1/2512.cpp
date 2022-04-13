// https://www.acmicpc.net/problem/2512
// 알고리즘 수업 - 예산
// Solved

#define SIZE 100000
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, sum = 0, budget[SIZE] = { 0, };

void Input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> budget[i];
		sum += budget[i];
	}
	cin >> M;
}

void Solve() {
	sort(budget, budget + N);
	if (sum <= M) {
		cout << budget[N - 1];
		return;
	}

	for (int i = 0; i < N; i++) {
		if ((N - i) * budget[i] > M) {

			cout << M / (N - i);
			return;
		}
		else {
			M -= budget[i];
		}
	}
}

int main() {
	Input();
	Solve();
}
