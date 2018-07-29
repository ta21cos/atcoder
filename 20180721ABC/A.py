# Task Scheduling Problem

def main():
    a = input()
    tasks_char = a.split(" ")
    tasks = [int(c) for c in tasks_char]

    indiced_tasks = list(zip(list(range(len(tasks))), tasks))
    sorted_tasks = sorted(indiced_tasks, key=lambda t: t[1])

    x = 0
    for (i1, t1), (i2, t2) in zip(sorted_tasks[:-1], sorted_tasks[1:]):
        x += abs(t1 - t2)
    print(x)
    return

if __name__ == "__main__":
    main()
