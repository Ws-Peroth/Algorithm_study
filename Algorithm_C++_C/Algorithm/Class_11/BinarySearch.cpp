// https://www.acmicpc.net/problem/23968
// �˰��� ���� - ���� ���� 1
// Solved

#include <iostream>
#define SIZE 100
using namespace std;

int N, input, K;
int numbers[SIZE] = { 0, };

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

int main() {
	cout << "�Է��� ���� ������ �Է��Ͻÿ� : ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "\n���� �Է��Ͻÿ� : ";
		cin >> numbers[i];
	}

	cout << "\nã�� ���� �Է��Ͻÿ� : ";
	cin >> K;

	bool res = binarySearch(K);
	if (res) {
		cout << "Find";
	}
	else {
		cout << "No Find";
	}

}
