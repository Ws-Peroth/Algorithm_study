import heapq

heap = [1, 0, 2, 9, 3, 8, 4, 6, 5, 7]
heapq.heapify(heap)
print(heap)


h = []

heapq.heappush(h, (7,"jaw"))
heapq.heappush(h, (3,"seo"))
heapq.heappush(h, (1,"shin"))
heapq.heappush(h, (5,"kang"))

print(h)

print()
print(heap)
for i in heap:
    print(heapq.heappop(heap))
    print(heap)
