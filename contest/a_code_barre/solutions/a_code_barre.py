s = input()
r=0
for i in s:
    if i=='-':
        r+=1
    elif r>0:
        print(r)
        r=0
print(r)
