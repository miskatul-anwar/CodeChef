T = int(input())
while T:
    N = int(input())
    A = int(input())
    B = int(input())
    total_seconds = (N * 2 + 1) * A + (N * (N + 1)) * B
    T -= 1
    print(total_seconds)
