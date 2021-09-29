def solution(id_list, report, k):
    
    # 중복 제거 및 정렬 
    reportSet = sorted(list(set(report)))

    # 정렬 
    id_list = sorted(id_list)

    # 유저 배열 선언
    userData = [[0]* (len(id_list)+ 1)] * (len(id_list)+1)

    for i in range(len(reportSet)):
        pair = reportSet[i].split(' ')
        print("pair : " + str(pair[0]))

        print(id_list.index(pair[0]))
        

    print(id_list)

    pair = ()
    
    answer = []
    return reportSet

id1 = [ "muzi", "frodo", "apeach", "neo" ]
report1 = [ "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" ]

id2 = [ "con", "ryan" ]
report2 = [ "ryan con", "ryan con", "ryan con", "ryan con" ]

k = 2

print(solution(id1, report1, k))
