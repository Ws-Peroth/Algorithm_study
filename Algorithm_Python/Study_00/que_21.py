def solution(s):
    size = len(s)
    if(size == 4 or size == 6):
        try:
            n = int(s)
            return True
        except:
            return False
    return False

def solution2(s):
    size = len(s)
    return s.isdigit() and (size == 4 or size == 6)


s = "1234"
print(solution(s))
