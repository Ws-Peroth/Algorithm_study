# 문자열 내림차순으로 배치하기
# https://programmers.co.kr/learn/courses/30/lessons/12917

def solution(s):
    s = list(s)
    for i in range(0, len(s) - 1):
        for j in range(i, len(s)):
            
            # ex) A B
            if(s[i].isupper() and s[j].isupper()):
                if(s[i] < s[j]):
                    s[i], s[j] = s[j], s[i]
            # ex) a b
            elif(s[i].islower() and s[i].islower()):
                if(s[i] < s[j]):
                    s[i], s[j] = s[j], s[i]

            # ex) A b
            elif(s[j].islower()):
                    s[i], s[j] = s[j], s[i]
                
    return ''.join(s)

s = 'Zbcdefg'
print(solution(s))
