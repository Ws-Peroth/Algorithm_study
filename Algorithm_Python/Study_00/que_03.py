# 핸드폰 번호 가리기
# https://programmers.co.kr/learn/courses/30/lessons/12948

phone_number = input()

answer = ''
answer = ('*' * (len(phone_number) - 4)) + phone_number[-4:]

print(answer)
    
    
