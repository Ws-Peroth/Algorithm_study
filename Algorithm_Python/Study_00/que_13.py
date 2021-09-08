def solution(n):
    s = 0
    for i in range(n + 1):
        if(i != 0):
            if(n % i == 0):
                s = s + i

            
    return s

n = 5
print(solution(n))
