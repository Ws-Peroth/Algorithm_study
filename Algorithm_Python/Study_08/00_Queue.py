class Queue():
    def __init__(self):
        self.queue = []

    def Enque(self, data):
        self.queue.insert(0, data)

    def Deque(self):
        return None if not len(self.queue) else self.queue.pop(0)

    def Clear(self):
        self.queue = []

    def Size(self):
        return len(self.queue)

    def Front(self):
        return None if not len(self.queue) else self.queue[0]

q = Queue()


        
q.Enque(10)
q.Enque(20)
q.Enque(30)
q.Enque(40)
print(q.Front())
print(q.Deque())
print(q.Deque())
print(q.Deque())
print(q.Deque())
