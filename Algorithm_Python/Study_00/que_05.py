# 콜라츠 추측
# https://programmers.co.kr/learn/courses/30/lessons/12943

def solution(num):
    if(num == 1):
        return 0
    
    for i in range(500):
        if(num % 2 == 0):
            num = num / 2
        else:
            num = num * 3 + 1

        if(num == 1) :
            return i + 1
    return -num



num = input()
n = solution(int(num))
print(str(abs(n)) + ' : ' + str(num))


