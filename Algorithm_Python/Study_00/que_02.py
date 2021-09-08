# 행렬의 덧셈
# https://programmers.co.kr/learn/courses/30/lessons/12950

def solution(arr1, arr2):
    answer = arr1
    
    rowSize = len(arr1)
    columnSize = len(arr1[0])
    
    for i in range(rowSize):
        for j in range(columnSize):
            answer[i][j] = answer[i][j] + arr2[i][j]
    
    return answer
