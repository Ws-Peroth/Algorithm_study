# Top-Down
def fibo_re(n):
    return 1 if n <= 2 else fibo_re(n - 1) + fibo_re(n - 2)

# Bottom-Up
def fibo_dp(n):
    if(n < 0): return -1
    dp = list(range(0, n))
    dp[0] = 1
    
    for i in range(2, n):
        dp[i] = dp[i-1] + dp[i-2]

    return dp[n-1]

# Top-Down with DP-Table
def fibo_dp_re(n):
    if(dp[n] == 0):
        dp[n] = 1 if n <= 2 else fibo_dp_re(n - 1) + fibo_dp_re(n - 2)
    return dp[n]

# Swap
def fibo_swap(n):
    a, b = 0 , 1
    for i in range(n):
        a, b = b, b + a

    return a

# Main
for i in range(1,10):
    print(f"fibo {i} = {fibo_dp(i)}")
    dp = [0 for i in range(0, i + 1)]
    
    print(f"fibo {i} = {fibo_re(i)}")
    dp = [0 for i in range(0, i + 1)]
    
    print(f"fibo {i} = {fibo_dp_re(i)}")
    print(f"fibo {i} = {fibo_swap(i)}\n")


# Top-Down방식과 Bottom-Up 방식의 차이점

# Top-Down 방식은 결과값을 먼저 구하고 결과값을 구하기 위해 아랫단계의 값을 구하는 방식으로
# 주로 재귀함수를 통해 구현합니다.

# Bottom-Up 방식은 아랫값을 통해 결과값을 도출해내는 방식으로
# 주로 반복문을 이용하여 구현합니다.
