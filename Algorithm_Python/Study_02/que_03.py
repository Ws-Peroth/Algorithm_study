# 복서 정렬하기
# https://programmers.co.kr/learn/courses/30/lessons/85002
def solution(weights, head2head):
    answer = [[0 for _ in range(5)] for _ in range(len(weights))]
    ans = [ 0 for _ in range(len(weights))]
    # answer[0, 0, 0, 0, 0]
    # 승리, 무거운 사람 이김, 몸무게, 선수 번호, 패배
    

    # i = 각 선수별 정보 배열 인덱스 = weights 인덱스
    for i in range(0, len(weights)):
        winCount = 0
        answer[i][2] = weights[i]   # 몸무게
        answer[i][3] = (i + 1)    # 선수 번호
        
        for j in range(0, len(head2head[i])):
            boxingResult = head2head[i][j]  # 전투 결과
            
            if(boxingResult == 'W'):    # 이겼을 경우
                answer[i][0] = answer[i][0] + 1     # 승리횟수 + 1                
                if(weights[i] < weights[j]):    # 이긴 상대가 더 무거울 때
                    answer[i][1] = answer[i][1] + 1     # 무거운 사람 이김 + 1
            elif(boxingResult == "L"):
                answer[i][4] = answer[i][4] + 1     # 패배횟수 + 1          
            

    # 승률 = 100*(이긴 횟수)/(경기에서 진횟수 + 이긴 횟수)
    # 승률 : 오름차순
    # 무거운 사람 이김 : 오름차순
    # 몸무게 : 오름차순
    # 선수 번호 : 내림차순
    
    answer = sorted(answer, key = lambda x : (0 if (x[4] + x[0]) == 0 else -(100 * (x[0]) / (x[4] + x[0])), -x[1], -x[2], x[3]))
    
    for i in range(0, len(answer)):
        ans[i] = answer[i][3]
        
    return ans

print("case 1")
print(solution([50,82,75,120], ["NLWL","WNLL","LWNW","WWLN"]))
print("case 2")
print(solution([145,92,86], ["NLW","WNL","LWN"]))
print("case 3")
print(solution([60,70,60], ["NNN","NNN","NNN"]))


