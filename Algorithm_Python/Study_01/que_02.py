# 숫자 문자열과 영단어
# https://programmers.co.kr/learn/courses/30/lessons/81301

def solution(s):
    enList = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']

    for i in range(10):
        s = s.replace(enList[i], str(i))
                      
    return int(s)


print(solution("123"))
