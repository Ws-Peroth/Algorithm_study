# 프로그래머스 : 이중우선순위큐
# https://programmers.co.kr/learn/courses/30/lessons/42628?language=python3
# 아직 못품
import heapq

def solution(operations):
    maxheap = []
    minheap = []
    heapq.heapify(minheap)
    heapq._heapify_max(maxheap)
    
    for i in operations:
        
        op = i[0]
        if op == "I":   # Add Data
            n = int(i[2:])
            heapq.heappush(maxheap, n)
            heapq.heappush(minheap, n)
        elif len(maxheap) > 0:
            if op == "D": # Del Max
                target = maxheap[0]
                maxheap.remove(target)
                minheap.remove(target)
                heapq.heapify(minheap)
            else:   # Del Min
                target = minheap[0]
                maxheap.remove(target)
                minheap.remove(target)
                heapq._heapify_max(maxheap)

    heapq.heapify(minheap)
    heapq._heapify_max(maxheap)
    return [maxheap[0], minheap[0]] if len(maxheap) > 0 else [0, 0]

v = ["I 16","D 1"]
print(solution(v))
