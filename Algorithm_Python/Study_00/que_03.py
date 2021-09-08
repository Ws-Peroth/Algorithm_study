phone_number = input()

answer = ''
answer = ('*' * (len(phone_number) - 4)) + phone_number[-4:]

print(answer)
    
    
