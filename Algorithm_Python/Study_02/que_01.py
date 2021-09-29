# 3진법 뒤집기
# https://programmers.co.kr/learn/courses/30/lessons/68935

def solution(n):
    ternary = [0] * 17

    i, answer = 0, 0
    while(n >= 3):
        ternary[i] = n % 3
        n = n // 3
        i = i + 1
    ternary[i] = n

    for j in range(i , -1, -1):
        answer += (3**(i-j)) * ternary[j]

    return answer

def solution2(n):
    temp = ''
    while(n >= 3):
        temp = temp + str(n % 3)    # 배열의 0번째부터 넣는것을 str 덧셈으로 처리
        n = n // 3
    return int(temp, 3) # int( x, base = 10) 함수를 이용하여 3진수로 출력
    

print(solution(3))




