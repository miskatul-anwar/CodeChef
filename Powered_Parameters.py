def min():
    t = int(input())
    res = []
    for _ in range(t):
        n = int(input())
        cows = n // 4
        remainder = n % 4
        if remainder == 0:
            res.append(cows)
        else:
            res.append(cows + 1)
    for i in res:
        print(i)


min()
