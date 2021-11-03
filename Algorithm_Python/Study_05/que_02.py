# 땅따먹기
#https://programmers.co.kr/learn/courses/30/lessons/12913

def solution(dp):
    answer = 0

    for i in range(1, len(dp)):
        for j in range(4):
            temp = dp[i][j]
            for k in range(4):
                if(j == k):
                    continue
                else:
                    dp[i][j] = max(dp[i][j],temp + dp[i - 1][k])

    
    return max(dp[len(dp) - 1])

print(solution([[1,2,3,5],[5,6,7,8],[4,3,2,1]]))
