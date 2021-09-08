a, b = map(int, input().strip().split(' '))
c = a
ans = [0] * b

for i in range(b):
    ans[i] = c
    c = c + a

print(ans)
