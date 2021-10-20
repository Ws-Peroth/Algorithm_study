# 카펫 
# https://programmers.co.kr/learn/courses/30/lessons/42842

def solution(brown, yellow):
    answer = [0, 0]
    
    for i in range(3, int(brown / 2)):
        r = i
        c = int((brown - (2*r) + 4) / 2)

        if((r - 2) * (c - 2) == yellow):
            answer = list((max(r, c), min(r, c)))
            return answer

print(solution(24, 24))
