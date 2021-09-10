# 소수 찾기
# https://programmers.co.kr/learn/courses/30/lessons/12921

def solution(n):
    primeNumber = [1] * (n + 1)
    primeNumber[0] = 0
    primeNumber[1] = 0
    
    for i in range(2, len(primeNumber)):
        if(primeNumber[i] == 1):
            for j in range(i + i, len(primeNumber), i):
                primeNumber[j] = 0

    answer = sum(primeNumber)
    return answer


n = 5
print(solution(n))
