# 백준 23559 밥
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
