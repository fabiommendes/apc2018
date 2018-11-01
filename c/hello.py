def collatz_size(n):
    size = 0
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        size += 1
    return size


def main():
    n = 0
    m = 0
    
    for i in range(1, 100000):
        m = collatz_size(i)
        if m > n:
            print("%d: tamanho %d" % (i, m))
            n = m
    return 0

main()