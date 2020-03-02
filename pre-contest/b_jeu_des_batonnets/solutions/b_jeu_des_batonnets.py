nb, b= map(int, input().split())
j=int(input())

if( j==0 and ( (nb-b)//(b+1)-(nb-1)//(b+1)<0 or (nb-b)%(b+1)==0 ) ) or (j==1 and ( (nb-b)//(b+1)-(nb-1)//(b+1)==0 and (nb-b)%(b+1)!=0)):
	print("OUI")
else:
	print("NON")

