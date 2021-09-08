# 자릿수 더하기
# https://programmers.co.kr/learn/courses/30/lessons/12931

def solution(n):
    n = str(n)
    n = list(map(int, n))
    return sum(n)

print(solution(118372))
