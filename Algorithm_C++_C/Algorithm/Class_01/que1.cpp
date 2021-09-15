#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

	set<string> reportSet;
	int idCount = id_list.size();

	int** users = new int* [idCount];
	for (int i = 0; i < idCount; i++) users[i] = new int[];

	for (int i = 0; i < report.size(); i++) {
		reportSet.insert(report[i]);
	}




	for (set<string>::iterator it = reportSet.begin(); it != reportSet.end(); it++) {
		std::cout << *it << endl;
	}

	vector<int> answer;
	return answer;
}

void main() {
	vector<string> id = { "muzi", "frodo", "apeach", "neo" };
	vector<string> report = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };

	vector<string> id2 = { "con", "ryan" };
	vector<string> report2 = { "ryan con", "ryan con", "ryan con", "ryan con" };


	int k = 2;
	int k2 = 3;

	solution(id, report, k);
}