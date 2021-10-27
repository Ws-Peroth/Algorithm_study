# 예산
# https://programmers.co.kr/learn/courses/30/lessons/12982

def solution(d, budget):
    d = sorted(d)
    answer = 0

    for i in d:
        if budget >= i:
            budget -= i
            answer += 1
    return answer


print(solution([2, 2, 3, 3], 10))
