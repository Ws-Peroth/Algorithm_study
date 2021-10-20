# 모의고사 
# https://programmers.co.kr/learn/courses/30/lessons/42840
def solution(answer):
    solver1 = [1, 2, 3, 4, 5]
    solver2 = [2, 1, 2, 3, 2, 4, 2, 5]
    solver3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    ans = [[1, 0], [2, 0], [3, 0]]
    
    for i in range(0, len(answer)):
        if(answer[i] == solver1[i % len(solver1)]):
            ans[0][1] += 1
        if(answer[i] == solver2[i % len(solver2)]):
            ans[1][1] += 1
        if(answer[i] == solver3[i % len(solver3)]):
            ans[2][1] += 1

    ans = sorted(ans, key= lambda x : (x[1], -x[0]))

    result = []
    
    for i in range(len(ans), 0, -1):
        if(ans[len(ans) - 1][1] == ans[i - 1][1]):
            result.append(ans[i - 1][0])
        else:
            break

    return result
    

    
print(solution([1,3,2,4,2]))
