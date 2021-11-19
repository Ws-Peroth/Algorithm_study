# 백준 : 01타일
# https://www.acmicpc.net/problem/1904

def solve(n):
    a , b = 1, 1    #초기값 : a, 다음값 과의 차
    for i in range(0, n):    # n 회 만큼 반복
        a , b = b%15746, (a + b)%15746
    return a

n = int(input())
print(solve(n))

######################
n = int(input())
a=b=1
for i in range(0, n):
    a , b = b % 15746, a + b
print(a)
######################
