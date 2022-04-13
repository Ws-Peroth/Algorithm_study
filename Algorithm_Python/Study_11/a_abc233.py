# https://atcoder.jp/contests/abc233/submit?taskScreenName=abc233_b
# A Reverse

a, b = map(int, input().split(' '));
s = input();
print((s[:a - 1]) + (s[b - 1::-1] if a < 2 else s[b - 1:a - 2:-1]) + (s[b:]))
