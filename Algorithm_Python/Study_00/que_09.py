# 정수 내림차순으로 배치하기
# https://programmers.co.kr/learn/courses/30/lessons/12933

def solution(n):
    answer = list(str(n))
    return int(''.join(sorted(answer,  reverse = True)))


print(solution(118372))
