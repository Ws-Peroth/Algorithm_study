# Largest Palindrome product
# Condition
# 세자리의 수인 두 수의 곱으로 만들어진 가장 큰 회문수

def solve():
    On = 0
    t = 0
    ti = 0
    tj = 0
    
    for i in range(999, 99, -1):        # 999 -> 100
        for j in range(i - 1, 99, -1):  # i -> 100
            
            On += 1
            s = str(i * j)
            if(s == s[::-1]):
                if(t <= i * j):
                    t = max(t, i * j)
                    ti = i
                    tj = j
    print(f"i = {ti}, j = {tj} => {t}")
    return On

def IsPalindrome(n):
    if (str(n) == str(n)[::-1]):
        return True
    else:
        return False
    
def solve_2():
    palindrome = [ i * j for i in range(999, 99, -1)
                           for j in range(i - 1, 99, -1)
                               if IsPalindrome(i * j) ]
    return sorted(palindrome)[-1]

print(f"answer = {solve_2()}")
