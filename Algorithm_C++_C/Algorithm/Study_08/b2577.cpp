// https://www.acmicpc.net/problem/2577
// 숫자의 개수
// Solved

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, calc, nums[10] = { 0, };
	cin >> a >> b >> c;

	calc = a * b * c;

	while (calc != 0) {
		int N = calc % 10;
		calc = calc / 10;
		nums[N]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << nums[i] << endl;
	}

	return 0;
}