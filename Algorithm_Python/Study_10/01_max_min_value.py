# https://www.acmicpc.net/problem/10818
# 최대, 최소
input() # 초기 입력 무시
a = sorted(list(map(int, input().split(" "))), reverse = True)
print(a[-1], a[0])
