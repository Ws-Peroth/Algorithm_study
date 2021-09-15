# N개의 최소공배수
# https://programmers.co.kr/learn/courses/30/lessons/12953

def solution(arr):
    if(len(arr) == 1):
        return arr[0]
    
    a = lcm(arr[0], arr[1])
    for i in range(2, len(arr)):
        a = lcm(a, arr[i])
    return a

def gcd(a, b):
    while(b != 0):
        r = a % b
        a = b
        b = r

    return int(a)

def lcm(a, b):
    return int(a * (b / gcd(a, b)))
