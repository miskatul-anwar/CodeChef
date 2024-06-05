def max_summation(n, a):
    a.sort()
    max_sum = 0
    lft = 0
    rght = n - 1
    while lft <= rght:
        if lft == rght:
            max_sum += a[rght]
        else:
            max_sum += a[rght]
            max_sum -= a[lft]
        rght -= 1
        lft += 1
    return max_sum


t = int(input())
res = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    result = max_summation(n, a)
    res.append(result)

for i in res:
    print(i)
