// https://www.acmicpc.net/problem/10816
// 알고리즘 수업 - 숫자 카드 2
// Solved

#include <iostream>
#include <algorithm>
#define SIZE 500000
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

int lowerBound(int L, int R, int k)
{
	int m;
	while (L < R)
	{
		m = (L + R) / 2;
		if (numbers[m] < k)
			L = m + 1;
		else R = m;
	}
	return R + 1;
}

int UpperBound(int L, int R, int k)
{
	int m;
	while (L < R)
	{
		m = (L + R) / 2;
		if (numbers[m] <= k)
			L = m + 1;
		else R = m;
	}
	return R + 1;
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

void Solve() {

	sort(numbers, numbers + N);

	for (int i = 0; i < M; i++) {
		int K = findNumbers[i];
		// int cnt = upper_bound(numbers, numbers + N, K) - lower_bound(numbers, numbers + N, K);
		int cnt = UpperBound(0, N, K) - lowerBound(0, N, K);
		cout << cnt << " ";
	}
}

int main() {
	Input();
	Solve();
}
