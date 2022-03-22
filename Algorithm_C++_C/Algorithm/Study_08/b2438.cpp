// https://www.acmicpc.net/problem/2438
// º°Âï±â - 1
// Solved
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <string>
#include <iostream>

int main() {
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}