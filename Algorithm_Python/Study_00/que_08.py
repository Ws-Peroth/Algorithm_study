import math

def solution(n):
    n = math.sqrt(n)
    
    if(n - int(n) == 0.0):
        return (int(n) + 1) ** 2
    return -1

print(solution(11))
