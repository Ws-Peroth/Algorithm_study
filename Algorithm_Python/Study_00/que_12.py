# 이상한 문자 만들기
# https://programmers.co.kr/learn/courses/30/lessons/12930

def solution(s):
    s = s.lower()
    print(s)
    
    s = s.split(" ")
    
    for i in range(len(s)):
        s[i] = list(s[i])
        for j in range(len(s[i])):
            if(j == 0 or j % 2 == 0):   # is Even?
                if(s[i][j].islower()): # islower?
                    s[i][j] = s[i][j].upper()   # lower to Upper
                    print(s[i][j])

        s[i] = ''.join(s[i])
        print(s[i])
    return ' '.join(s)

print(solution('tRy hElLo wOrLd'))
