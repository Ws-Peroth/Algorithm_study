# 나누어 떨어지는 숫자 배열
# https://programmers.co.kr/learn/courses/30/lessons/12910

def solution(arr, divisor):
    answer = list([])

    for i in range(len(arr)):
        if(arr[i] % divisor == 0):
            answer.append(arr[i])

    if(answer == []):
        return [-1]
    return sorted(answer)



arr =[5, 9, 7, 10]
di = 5
print(solution(arr, di))
