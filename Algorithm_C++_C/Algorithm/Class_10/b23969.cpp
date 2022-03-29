// https://www.acmicpc.net/problem/23968
// 알고리즘 수업 - 버블 정렬 1
// Solved

#include <iostream>
#define SIZE 100001
using namespace std;

int tc;
int cnt = 0, N, input, K;
int numbers[SIZE] = { 0, };

void Input();
void BubbleSort();
void Print();

int main() {
	Input();
	BubbleSort();
}

void Input() {
	cnt = 0;
	N = 0;
	input = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> input;
		numbers[i] = input;
	}
}

void BubbleSort() {
	for (int i = 0; i < N - 1; i++) {
		int n = 0;

		for (int j = 0; j < N - i - 1; j++) {

			if (numbers[j] > numbers[j + 1]) {
				// swap
				int a = numbers[j];
				int b = numbers[j + 1];
				numbers[j] = b;
				numbers[j + 1] = a;
				cnt++;
				n++;

				if (cnt == K) {
					Print();
					return;
				}
			}
		}
		if (n == 0) {
			break;
		}
	}
	cout << "-1";
}

void Print() {
	for (int i = 0; i < N; i++) {
		cout << numbers[i] << " ";
	}
	// cout << endl << "swap Count = " << cnt << endl << endl;
}