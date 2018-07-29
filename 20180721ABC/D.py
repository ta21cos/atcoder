def main():
    in1 = input().split(" ")
    n, m = [int(c) for c in in1]

    arr = []
    for i in range(m):
        _in = input().split(" ")
        a, b = [int(c) for c in _in]
        arr.append((a, b))

    sorted_arr = sorted(arr, key=lambda x: x[0])

    n = 1

    mi, ma = sorted_arr[0]
    mi, ma = (mi, ma) if mi < ma else (ma, mi)
    for a, b in sorted_arr[1:]:
        a, b = (a, b) if a < b else (b, a)
        if ma <= a:
            n += 1
            mi, ma = a, b
        if mi < a:
            mi = a
        if ma > b:
            ma = b
    print(n)

if __name__ == "__main__":
    main()
