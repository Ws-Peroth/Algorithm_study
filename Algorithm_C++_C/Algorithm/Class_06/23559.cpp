/*
# น้มุ 23559 นไ
# https://www.acmicpc.net/problem/23559

def solution(N, X):
    result = 0
    heap = []

    M = int((X / N - 1000) * N / 4000)

    for i in range(N):
        a, b = map(int, input('').split())
        heap.append(a - b)
        result += b

    heap = sorted(heap, reverse=True)

    for i in range(M):
        result += heap[i]

    return result

N, X = map(int, input('').split())
print(solution(N, X))
*/

#include <iostream>
#include <algorithm>
#define MAX 100000

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int price[MAX] = { 0, };
    int N, X, M, result = 0;
    cin >> N;
    cin >> X;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a;
        cin >> b;
        result += b;
    }

    sort(price[0], price[N - 1]);

    M = (X / N - 1000) * N / 4000;

    for (int i = 0; i < M; i++) {
        result += price[N - 1 - i];
    }

    cout << result;
}