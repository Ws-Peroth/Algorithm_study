// https://www.acmicpc.net/problem/1920
// 알고리즘 수업 - 수 찾기
// Solved

#include <iostream>
#include <algorithm>
#define SIZE 100000
using namespace std;

int N, input, M;
int numbers[SIZE] = { 0, };
int findNumbers[SIZE] = { 0, };

void Input() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> findNumbers[i];
	}
}

bool binarySearch(int v) {
	int s = 0, d = N - 1, now = N / 2;

	while (s <= d) {
		now = (s + d) / 2;
		if (numbers[now] == v) {
			return true;
		}
		if (numbers[now] > v) {
			d = now - 1;
		}
		if (numbers[now] < v) {
			s = now + 1;
		}
	}
	return false;
}

void BS() {
	
	sort(numbers, numbers + N);

	for (int i = 0; i < M; i++) {

		if (binarySearch(findNumbers[i])) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}

int main() {
	Input();
	BS();
}
