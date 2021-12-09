# 프로그래머스 : 더 맵게
# https://programmers.co.kr/learn/courses/30/lessons/42626
import heapq

def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while(not scoville[0] >= K):
        if len(scoville) < 2: return -1
        a = heapq.heappop(scoville)
        b = heapq.heappop(scoville)
        heapq.heappush(scoville, a + (b * 2))
        answer += 1
    return answer

s = [1, 2, 3, 9, 10, 12]
k = 7
print(solution(s, k))
