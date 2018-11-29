def fat(n):
    if n <= 1:
        return 1
    else:
        return n * fat(n - 1)

def fat_(n):
    acc = 1
    for x in range(1, n + 1):
        acc *= x
    return acc
