def solution(n):
    n = str(n)
    n = list(map(int, n))
    n.reverse()
    return n

print(solution(118372))
