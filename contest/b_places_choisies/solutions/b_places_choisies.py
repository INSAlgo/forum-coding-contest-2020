# Main solution for Coding Contest 2

# --- uncomment below for debug ---
# import sys

# parse and store the integer inputs
n = int(input())
h, c = map(int, input().split())

# initialize variables to count places and passengers
hCurr = 0
cCurr = 0
i = 0
car = 'a'

while hCurr <= h and cCurr <= c and i < n:
    car = input()
    if car == 'H':
        hCurr += 1
        # --- uncomment below for debug ---
        # print("H found, hCurr : ",hCurr, file=sys.stderr)
    elif car == 'C':
        cCurr += 1
        # --- uncomment below for debug ---
        # print("C found, cCurr : ",cCurr, file=sys.stderr)
    i += 1

if hCurr > h or cCurr > c:   # more demands than places for one type of seat
    print("NON")
else:
    print("OUI")
