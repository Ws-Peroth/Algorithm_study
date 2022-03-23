#include <iostream>

using namespace std;

int tc;
int cnt = 0, N, input;
int numbers[50] = { 0, };

void Input();
void BubbleSort();
void Print();

int main() {
	cout << "테스트 케이스 개수를 입력하시오 : ";  cin >> tc;	// 테스트 케이스를 동시에 입력받기 위함

	while (tc --> 0) {
		Input();
		BubbleSort();
		Print();
	}
}

void Input() {
	cnt = 0;
	N = 0;
	input = 0;

	cin >> N;

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
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
				cnt++;
				n++;
			}
		}
		if (n == 0) {
			break;
		}
	}
}

void Print() {
	for (int i = 0; i < N; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl << "swap Count = " << cnt << endl << endl;
}