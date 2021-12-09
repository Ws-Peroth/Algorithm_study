# 크레인 인형뽑기 게임
# https://programmers.co.kr/learn/courses/30/lessons/64061?language=cpp

             
def solution(board, moves):
    ans = 0
    stack = []
    for move in moves:
        for i in range(len(board)):
            if board[i][move - 1]:
                stack.append(board[i][move - 1])
                board[i][move - 1]

                if len(stack) >= 2:
                    if stack[-1] == stack[-2]:
                        stack.pop()
                        stack.pop()
                        ans+= 2
                        
l = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
m = [1,5,3,5,1,2,1,4]
print(f"ans = {solution(l, m)}")
