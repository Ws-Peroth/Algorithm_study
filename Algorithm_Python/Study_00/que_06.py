# 최대 공약수와 최소 공배수
# https://programmers.co.kr/learn/courses/30/lessons/12940

"""
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b)
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}
"""

def gcd(a, b):
    while(b != 0):
        r = a % b
        a = b
        b = r

    return int(a)

def lcm(a, b):
    return int(a * (b / gcd(a, b)))


a, b = map(int, input().strip().split(' ')) 
print([gcd(a, b), lcm(a, b)])
