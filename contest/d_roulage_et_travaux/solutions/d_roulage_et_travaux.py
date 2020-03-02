from collections import defaultdict, deque


n, h, p = map(int, input().split())
hangars = set(map(lambda x: int(x) - 1, input().split()))
slopes = set(map(lambda x: int(x) - 1, input().split()))
graph = [set() for _ in range(n)]
for _ in range(int(input())):
    a, b = map(lambda x: int(x) - 1, input().split())
    graph[a].add(b)
    graph[b].add(a)

connect_hangar = defaultdict(set)
connect_slopes = defaultdict(set)

seen = [0 for _ in range(n)]
index_cc = -1
for index in range(n):
    if index not in slopes and index not in hangars and not seen[index]:
        index_cc += 1
        d = deque()
        d.append(index)
        seen[index] = 1
        while(d):
            current = d.popleft()
            for neigh in graph[current]:
                if not seen[neigh]:
                    if neigh in hangars:
                        connect_hangar[neigh].add(index_cc)
                    elif neigh in slopes:
                        connect_slopes[neigh].add(index_cc)
                    else:
                        d.appendleft(neigh)
                        seen[neigh] = True
number_missed = 0
for _ in range(int(input())):
    a, b = map(lambda x: int(x) - 1, input().split())
    number_missed += len(
        connect_hangar[a].intersection(connect_slopes[b])) == 0
print(number_missed)
