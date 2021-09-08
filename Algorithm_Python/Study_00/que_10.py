# 자연수 뒤집어 배열로 만들기
# https://programmers.co.kr/learn/courses/30/lessons/12932

def solution(n):
    n = str(n)
    n = list(map(int, n))
    n.reverse()
    return n

print(solution(118372))
