G, A, P = map(int, input().split())
amis = set()
amis.add(tuple([P for _ in range(G)]))
for k in range(A):
    Pi, Gi = map(int, input().split())
    newset = set()
    for index in map(lambda x: int(x) - 1, input().split()):
        for s in amis:
            if s[index] >= Pi:
                cp = list(s)
                cp[index] -= Pi
                newset.add(tuple(cp))
    amis = newset
if amis:
    print("OUI")
else:
    print("NON")
