# 제일 작은 수 제거하기
# https://programmers.co.kr/learn/courses/30/lessons/12935

n = [1]
del n[n.index(min(n))]
a = n
if(a == []):
    print([-1])
else:
    print(a)
