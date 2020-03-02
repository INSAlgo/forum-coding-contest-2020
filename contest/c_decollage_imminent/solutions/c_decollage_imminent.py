L, C = map(int, input().split())

maxByColumn = [0] * C
for row in range(L):
	values = map(int, input().split())
	for index, value in enumerate(values):
		maxByColumn[index] = max(maxByColumn[index], value)

H = int(input())

hostess = []
for i in range(H):
	hostess.append(int(input()))

hostess.sort(reverse = True)
maxByColumn.sort(reverse = True)

for index, maxC in enumerate(maxByColumn) :
	if(hostess[index] < maxC):
		print("NON")
		exit()

print("OUI")
