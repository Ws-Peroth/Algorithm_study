# python
# 최대 최소
def is369(s):
    if s.find('3') != -1 : return True
    if s.find('6') != -1 : return True
    if s.find('9') != -1 : return True
    return False

a = int(input())
for i in range(1, a + 1):
    print( " X" if is369(str(i)) else f" {i}", end = '')
