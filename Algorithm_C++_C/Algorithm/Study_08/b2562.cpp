// https://www.acmicpc.net/problem/2562
// �ִ밪
// Solved

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int index = 0, maxValue = 0, temp;

	for (int i = 1; i <= 9; i++) {
		cin >> temp;

		if (temp > maxValue) {
			index = i;
			maxValue = temp;
		}
	}

	cout << maxValue << endl << index;

	return 0;
}