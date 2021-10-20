# 1주차_부족한 금액 계산하기
# https://programmers.co.kr/learn/courses/30/lessons/82612

def solution(price, money, count):

    pay = 0
    for i in range(1, count + 1):
        pay = pay + price * i

    if(pay - money > 0):
        return pay - money
    else:
        return 0

print(solution(3, 20, 4))
