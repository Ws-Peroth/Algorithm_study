# 최댓값
a = list(map(int, input().split(" ")))
maxValue = sorted(a, reverse = True)[0]
print(maxValue)
print(a.index(maxValue) + 1)
