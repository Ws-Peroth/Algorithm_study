// 프로그래머스 42889

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

bool ComparePair(pair<int, float>* a, pair<int, float>* b) {
    if (a->second == b->second) {
        return a->first < b->first;
    }
    return a->second > b->second;
}

vector<int> solution(int N, vector<int> stages) {
    /*
    // vector<int> stages = { 2, 1, 2, 6, 2, 4, 3, 3 };
    Pair* StageFailure[500];
    Pair* Zero = new Pair();

    for (int i = 0; i <= N; i++) {
        StageFailure[i] = Zero;
    }
    for (int i = 0; i < stages.size(); i++) {
        StageFailure[stages[i]]->second++;
    }
    int cleared_member = StageFailure[N]->second, next_cleared_member = 0;

    for (int i = N - 1; i >= 0; i--) {
        StageFailure[i]->first = (i+1); // stage
        next_cleared_member = StageFailure[i]->second + cleared_member;
        if (cleared_member != 0) {
            StageFailure[i]->second = StageFailure[i]->second / cleared_member;
        }
        else {
            StageFailure[i]->second = 0;
        }
        cleared_member = next_cleared_member;
    }
    sort(StageFailure, StageFailure+(N-1), ComparePair);
    vector<int> answer(N);
    // 실패율에 따라 정렬하였으니, answer에 스테이지 번호를 알맞게 대입
    for (int i = 0; i < N; i++) {
        answer[i] = StageFailure[i]->first;
    }
    return answer;

    */

    pair<int, float>* stage_failure[500];  // 해당 스테이지를 클리어 하지 못한 플레이어 수

    for (int i = 0; i <= 500; i++) {
        stage_failure[i] = new pair<int, float>(0, 0);
        stage_failure[i]->first = 0;
        stage_failure[i]->second = 0;
    }
    // <stage, failure>
    // sort(stages.begin(), stages.end(), compare_int);
    // failure = fail_member / cleared_member
    // stage_failure[N] = N 번째 스테이지를 클리어 하지 못한 사람의 수 (실패율)

    for (int i = 0; i < stages.size(); i++) {
        stage_failure[stages[i]]->second++;
    }
    // stage_failure
    // { 0, }
    int cleared_member = stage_failure[N]->second, next_cleared_member = 0;

    for (int i = N; i >= 0; i--) {
        stage_failure[i]->first = i + 1; // stage
        next_cleared_member = stage_failure[i]->second + cleared_member;
        if (cleared_member != 0) {
            cout << stage_failure[i]->second << " / " << cleared_member;
            stage_failure[i]->second = stage_failure[i]->second / cleared_member;
            cout << " = [" << i + 1 << "] : " << stage_failure[i]->second << endl;
        }
        else {
            stage_failure[i]->second = 0;
        }
        cleared_member = next_cleared_member;
    }

    sort(stage_failure, stage_failure + (N - 1), ComparePair);

    vector<int> answer(N);
    // 실패율에 따라 정렬하였으니, answer에 스테이지 번호를 알맞게 대입
    for (int i = 0; i < N; i++) {
        answer[i] = stage_failure[i]->first;
    }

    for (int i = 0; i < 500; i++) {
        free(stage_failure[i]);
    }

    return answer;
}

int main() {
    int n = 5;
    vector<int> stages = { 2, 1, 2, 6, 2, 4, 3, 3 };
    vector<int> res = solution(n, stages);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}





