// https://www.acmicpc.net/problem/1546
// πÈ¡ÿ ∆Ú±’
// Solved

#define _CRT_SECURE_NO_WARNINGS


#include <algorithm>
#include <string>
#include <iostream>

int main() {
	int N;
	float scores[1000] = { 0, }, sum = 0, M;
	std::cin >> N;
	
	for (int i = 0; i < N; i++) {
		std::cin >> scores[i];
	}
	
	std::sort(scores, scores + N, std::greater<int>());
	M = scores[0];

	for (int i = 0; i < N; i++) {
		sum += scores[i] / M * 100;
	}
	printf("%0.2f", sum / N);
	return 0;
}