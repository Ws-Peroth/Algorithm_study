s = input()

x = 0

for i in range(len(s)):
    x = x + int(s[i])

print(x)
print(int(s) % x is 0)
