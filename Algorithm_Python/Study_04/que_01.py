# 연습문제

def solution(n):
    count, money = 0, [500, 100, 50, 10]
    
    for i in range(0, len(money)):
        count += n // money[i]
        n %= money[i]

    return count
    
print(solution(5870))
