// https://www.acmicpc.net/problem/1330
// ���� �� �� ���ϱ�
// Solved

#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>
#include <algorithm>

int main() {
	int a, b;
	std::cin >> a >> b;
	if (a == b) {
		std::cout << "==";
		return;
	}
	if (a > b) {
		std::cout << ">";
		return;
	}

	std::cout << "<";
	return;
}