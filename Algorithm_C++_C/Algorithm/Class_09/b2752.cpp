// https://www.acmicpc.net/problem/2752
// 세수정렬
// Solved

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cmath>
#define SIZE 1000001

using namespace std;
int N[SIZE] = { 0, };

int main() {
	int n;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		N[n]++;
	}

	for (int i = 0; i < SIZE; i++) {
		if (N[i] == 1) {
			cout << i << " ";
		}
	}

	return 0;
}


