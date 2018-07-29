# Modulo Summation

def main():
    n = input()
    arr = input()
    nums = [int(c) for c in arr.split(" ")]

    print(sum([(n - 1) for n in nums]))

if __name__ == "__main__":
    main()
