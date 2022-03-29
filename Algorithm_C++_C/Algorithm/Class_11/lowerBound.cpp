// https://www.acmicpc.net/problem/23968
// �˰��� ���� - ���� ���� 1
// Solved

#include <iostream>
#define SIZE 100
using namespace std;

int N, input, K;
int numbers[SIZE] = { 0, };


int main() {
	cout << "�Է��� ���� ������ �Է��Ͻÿ� : ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "\n���� �Է��Ͻÿ� : ";
		cin >> numbers[i];
	}

	cout << "\nã�� ���� �Է��Ͻÿ� : ";
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
