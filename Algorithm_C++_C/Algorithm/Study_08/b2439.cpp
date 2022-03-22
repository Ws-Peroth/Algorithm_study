// https://www.acmicpc.net/problem/2439
// º°Âï±â - 2
// Solved
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <string>
#include <iostream>

int main() {
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		int space = N - i;
		int star = i;
		for (int j = 0; j < space; j++) {
			printf(" ");
		}
		for (int j = 0; j < star; j++) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}