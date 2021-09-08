# 정수 제곱근 판별
# https://programmers.co.kr/learn/courses/30/lessons/12934

import math

def solution(n):
    n = math.sqrt(n)
    
    if(n - int(n) == 0.0):
        return (int(n) + 1) ** 2
    return -1

print(solution(11))
