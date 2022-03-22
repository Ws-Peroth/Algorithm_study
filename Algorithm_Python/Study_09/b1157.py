# https://www.acmicpc.net/problem/1157
# 백준 단어 공부 (Bronze 1)

import collections as c
d = sorted(dict((c.Counter(input().upper())).items()).items(), key = lambda item: item[1], reverse = True)
print("?" if len(d) >= 2 and d[0][1] == d[1][1] else d[0][0])
