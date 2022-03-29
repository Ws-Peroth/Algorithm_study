// https://www.acmicpc.net/problem/23968
// 알고리즘 수업 - 버블 정렬 1
// Solved

#include <iostream>
#define SIZE 100
using namespace std;

int N, input, K;
int numbers[SIZE] = { 0, };


int main() {
	cout << "입력할 수의 개수를 입력하시오 : ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "\n수를 입력하시오 : ";
		cin >> numbers[i];
	}

	cout << "\n찾을 수를 입력하시오 : ";
	cin >> K;

	int s = 0, d = N - 1, now = N / 2;


	while (s < d) {

		now = (s + d) / 2;

		if (numbers[now] >= K) {
			d = now;
		}
		else {
			s = now + 1;
		}
	}

	cout << d;

}
