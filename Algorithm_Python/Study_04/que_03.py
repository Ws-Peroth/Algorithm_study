# 등굣길
# https://programmers.co.kr/learn/courses/30/lessons/42898

def solution(m, n, puddles):
    dp = [[1 for i in range(m)] for j in range(n)]
    
    for i in range(len(puddles)):
        x = puddles[i][0] - 1
        y = puddles[i][1] - 1
        dp[y][x] = 0

    for x in range(1, m):
        if(dp[0][x] != 0):
            dp[0][x] = dp[0][x - 1]
            
    for y in range(1, n):
        if(dp[y][0] != 0):
            dp[y][0] = dp[y - 1][0]
    
    for y in range(1, n):
        for x in range(1, m):
            targetValue = dp[y][x]
            
            if(targetValue != 0):
                dp[y][x] = dp[y - 1][x] + dp[y][x - 1]
                
    return dp[y][x] % 1000000007

print(solution(6, 5, [[3, 3]]))

