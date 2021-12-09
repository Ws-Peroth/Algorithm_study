# 프로그래머스 : 완주하지 못한 선수
# https://programmers.co.kr/learn/courses/30/lessons/42576

import collections
def solution(p, c):return list(collections.Counter(p) - collections.Counter(c))[0]

p = ["mislav", "stanko", "mislav", "ana"]
c = ["stanko", "ana", "mislav"]
print(solution(p, c))
