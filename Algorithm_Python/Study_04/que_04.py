# 정수 삼각형
# https://programmers.co.kr/learn/courses/30/lessons/43105

def solution(triangle):
    dp = [[0 for i in range(0, 500)] for i in range(0, 500)]
    dp[0][0] = triangle[0][0]
    
    for i in range(1, len(triangle)):
        for j in range(len(triangle[i])):
            dpValue = triangle[i][j]
            
            if(j == 0):
                dpValue += dp[i - 1][j]
            elif(j == i):
                dpValue += dp[i - 1][j - 1]
            else:
                dpValue += max(dp[i - 1][j - 1], dp[i - 1][j])

            dp[i][j] = dpValue
            
    return max(dp[len(triangle) - 1])


def solution2(dp):
    for i in range(1, len(dp)):
        for j in range(len(dp[i])):
            if( j == 0 ):
                dp[i][j] += dp[i - 1][j]
            elif( j == i ):
                dp[i][j] += dp[i - 1][j - 1]
            else:
                dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j])
    return max(dp[len(dp) - 1])
                

print(solve2([[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]))
