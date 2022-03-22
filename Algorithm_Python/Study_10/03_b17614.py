# https://www.acmicpc.net/problem/17614
# 369
s = 0
def is369(s): return s.count('3') + s.count('6') + s.count('9')
for i in range(1, int(input()) + 1): s += is369(str(i))    
print(s)

