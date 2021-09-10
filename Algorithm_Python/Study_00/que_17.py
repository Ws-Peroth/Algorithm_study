# 시저 암호
# https://programmers.co.kr/learn/courses/30/lessons/12926

littleAlpha = list("abcdefghijklmnopqrstuvwxyz")
capitalAlpha = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")

def solution(s, n):
    s = list(s)
    
    for i in range(len(s)):
        if(s[i] == ' '):
            continue
        elif(s[i].isupper()):
            c = capitalAlpha.index(s[i])
            s[i] = capitalAlpha[(c + n) % 26]
        else:
            c = littleAlpha.index(s[i])
            s[i] = littleAlpha[(c + n) % 26]

    return ''.join(s)




s = "a B z"
n = 4

print(solution(s, n))
