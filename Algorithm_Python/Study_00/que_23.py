# https://programmers.co.kr/learn/courses/30/lessons/12912
# 두 정수 사이의 합

def solution(a, b):
    n = min(a, b)
    m = max(a, b)
    return sum(range(n,m + 1))

def solution2(a, b):
    return (abs(a-b)+1)*(a+b)//2

a = 3
b = 3
print(solution(a, b))
