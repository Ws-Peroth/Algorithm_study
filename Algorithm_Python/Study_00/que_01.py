# x만큼 간격이 있는 n개의 숫자
# https://programmers.co.kr/learn/courses/30/lessons/12954

a, b = map(int, input().strip().split(' '))
c = a
ans = [0] * b

for i in range(b):
    ans[i] = c
    c = c + a

print(ans)
