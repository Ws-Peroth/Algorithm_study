# 거리두기 확인하기
# https://programmers.co.kr/learn/courses/30/lessons/81302

def solution(places):
    answer = []
    # 1. 각 P에 대해 맨해튼 거리 측정 (n^2)
    # 2. 맨해튼 거리가 2 이하인 P에 대해 조건 탐색
    # case 1 : 주변이 막혀 있는가
    # case 2 : 주변에 탁자가 있는가

    

    return ManhattanDistance([1, 3], [5, 4])


def ManhattanDistance(x, y):
    return abs(x[0] - y[0]) + abs(x[1] - y[1])

# 상하좌우 대각 즉, 맨해튼 거리가 2인 부분 만 탐색
def CheckArea(place, x, y):
    

print(solution(1))
