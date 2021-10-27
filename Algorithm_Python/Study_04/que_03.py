# 푸는 중
# https://programmers.co.kr/learn/courses/30/lessons/42898
def solution(m, n, puddles):
    factorial = [1 for i in range(m + n + 1)]
    
    for i in range(2, len(factorial)):
        factorial[i] = i * factorial[ i - 1 ]

    answer = factorial[m + n - 2] // (factorial[m - 1] * factorial[n - 1])
    
    for i in range(len(puddles)):
        x, y = puddles[i][0], puddles[i][1]
        
        answer -= (factorial[x + y - 2] // (factorial[x - 1] * factorial[y - 1])) * (factorial[ (m - x) + (n - y)]) // (factorial[m - x] * factorial[n - y])    
    return int(answer % 1000000007)


print(solution(6, 5, [[3, 3]]))


factorial = [1 for i in range(10)]

for i in range(2, len(factorial)):
    factorial[i] = i * factorial[ i - 1 ]



print(factorial[6] / (factorial[3]**2))
