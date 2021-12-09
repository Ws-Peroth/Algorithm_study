# 스택은 어떤 상황(알고리즘)에서 사용될까요?
# 스택은 후입선출 구조가 필요한 경우에 사용됩니다. 주로 DFS(깊이 우선 탐색)와 같은 그래프 탐색 알고리즘에 주로 사용됩니다.

# 메모리 구조에서 스택의 역할은?
# 메모리 구조에서의 스택은 변수 등을 저장하며 함수 호출관련 정보를 스택에 저장합니다.

class Stack:
    def __init__(self):
        self.stack = []

    def Size(self):
        return len(self.stack)

    def IsEmpty(self):
        return self.Size() <= 0
        
    def Push(self, x):
        self.stack.append(x)

    def Pop(self):
        # If Stack is Empty return None
        return self.stack.pop() if not self.IsEmpty() else None

    def Peek(self):
        # If Stack is Empty return None
        return self.stack[-1] if not self.IsEmpty() else None

stack = Stack()

for i in range(0, 10):
    stack.Push(i)

for i in range(0, 5):
    print(stack.Pop())

print(stack.Peek())
print(stack.Pop())

for i in range(5):
    print(stack.Pop())



