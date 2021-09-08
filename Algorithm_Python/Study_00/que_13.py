# 약수의 합
# https://programmers.co.kr/learn/courses/30/lessons/12928

def solution(n):
    s = 0
    for i in range(n + 1):
        if(i != 0):
            if(n % i == 0):
                s = s + i

            
    return s

n = 5
print(solution(n))
