# String Rotation

def main():
    s1 = input()
    s2 = input()

    _s = s2

    for i in range(len(s1)):
        if s1 == _s:
            print("Yes")
            return
        else:
            # 最後の1回は比較されないのでよくない書き方
            _s = rotate(_s)
            print(_s)
    print("No")
    return

def rotate(arr):
    return arr[-1] + arr[:-1]


if __name__ == "__main__":
    main()
