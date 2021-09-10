def solution2(strings, n):
    return sorted(strings, key=lambda x: x[n])

###########################################################

def compare(a, b, n):
    if(a[n] > b[n]):
        return True
    elif(a[n] == b[n]):
        return a > b
    return False;

def sort(arr, n):
    end = len(arr) - 1
    while end > 0:
        last_swap = 0
        for i in range(end):
            if compare(arr[i], arr[i + 1], n):
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                last_swap = i
        end = last_swap
    return arr

                
def solution(strings, n):
    answer = sort(strings, n)
    return answer

s = ["sun", "bed", "car"]
n = 1
print(solution(s, n))
