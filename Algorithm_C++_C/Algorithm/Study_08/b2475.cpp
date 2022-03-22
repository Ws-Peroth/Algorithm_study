// https://www.acmicpc.net/problem/2475
// °ËÁõ¼ö
// Solved

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, sum = 0;

	for(int i = 0; i < 5; i++) {
		cin >> N;
		sum += pow(N, 2);
	}

	cout << sum % 10;
	return 0;
}