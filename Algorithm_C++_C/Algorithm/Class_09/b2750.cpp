// https://www.acmicpc.net/problem/2750
// 수 정렬하기
// Solved

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cmath>
#define SIZE 101

using namespace std;

int N, M, inputI, inputJ;
int numbers[SIZE] = { 0, };

void Swap(int i, int j);
void Init();
void Input();
void BubbleSort();
void Print();

int main() {
		Input();
		Print();
}

void Input() {
	cin >> N >> M;	// M => input case
	Init();


	// M times loop
	for (int i = 0; i < M; i++) {
		cin >> inputI >> inputJ;
		Swap(inputI, inputJ);
	}
}

void Init() {
	for (int i = 1; i <= N; i++) {
		numbers[i] = i;	// 1 -> N 생성
	}
}

void Swap(int i, int j) {
	// swap
	int temp = numbers[j];
	numbers[j] = numbers[i];
	numbers[i] = temp;
}

void Print() {
	for (int i = 1; i <= N; i++) {
		cout << numbers[i] << " ";
	}
}