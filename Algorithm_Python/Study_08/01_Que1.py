# 프로그래머스 주식가격
# https://programmers.co.kr/learn/courses/30/lessons/42584
# Not Solved
from Connections import deque

def solution(prices):
    ans = [0 for i in range(len(price))]
    deq = deque()
    deq.append((prices[0], 0))
    for i in range(1, len(prices)):
        x = prices[i]
        while(x < deq[-1]):
            d = deq.pop()
            ans[d[1]] = i - d[1]
        
            

        
    

    return answer
