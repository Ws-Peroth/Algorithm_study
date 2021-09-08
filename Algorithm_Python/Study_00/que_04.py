# 하샤드 수
# https://programmers.co.kr/learn/courses/30/lessons/12947

s = input()

x = 0

for i in range(len(s)):
    x = x + int(s[i])

print(x)
print(int(s) % x is 0)
