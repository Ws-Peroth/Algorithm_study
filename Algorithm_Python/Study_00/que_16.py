#  같은 숫자는 싫어
# https://programmers.co.kr/learn/courses/30/lessons/12906

def solution(arr):
    ans = [arr[0]]

    
    i = 1
    temp = arr[0]
    while(i < len(arr)):
        if(arr[i] != temp):
            temp = arr[i]
            ans.append(arr[i])
        i = i + 1
    return ans




n = [1,1,3,3,0,1,1]
print(solution(n))
