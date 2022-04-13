// https://programmers.co.kr/learn/courses/30/lessons/92344?language=cpp
// 파괴되지 않은 건물
// Solved
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#define SIZE 1001
using namespace std;

int X, Y, skillLength;
int field[SIZE][SIZE] = { };

int solution(vector<vector<int>> board, vector<vector<int>> skill) {
	int type, x1, y1, x2, y2, degree;
	int answer = 0, sum = 0;

	Y = board.size();
	X = board[0].size();
	skillLength = skill.size();

	for (int i = 0; i < skillLength; i++) {
		degree = (skill[i][0] == 2 ? 1 : -1) * skill[i][5];
		y1 = skill[i][1];
		x1 = skill[i][2];
		y2 = skill[i][3] + 1;
		x2 = skill[i][4] + 1;

		field[y1][x1] +=  degree;
		field[y1][x2] += (-degree);
		field[y2][x1] += (-degree);
		field[y2][x2] +=  degree;
	}


	// X Sum
	for (int i = 0; i < Y; i++) {
		sum = 0;
		for (int j = 0; j < X; j++) {
			sum += field[i][j];
			field[i][j] = sum;
		}
	}

	// Y Sum
	for (int i = 0; i < X; i++) {
		sum = 0;
		for (int j = 0; j < Y; j++) {
			sum += field[j][i];
			field[j][i] = sum + board[j][i];
			if (field[j][i] > 0) answer++;
		}
	}

	return answer;
}

int main() {
	vector<vector<int>> board =
	{
		{5, 5, 5, 5, 5},
		{5, 5, 5, 5, 5},
		{5, 5, 5, 5, 5},
		{5, 5, 5, 5, 5}
	};

	vector<vector<int>> skill =
	{
		{1, 0, 0, 3, 4, 4},
		{1, 2, 0, 2, 3, 2},
		{2, 1, 0, 3, 1, 2},
		{1, 0, 1, 3, 3, 1}
	};

	cout << solution(board, skill);
}
