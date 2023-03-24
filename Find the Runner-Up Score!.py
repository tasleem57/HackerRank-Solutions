if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    listA = list(set(arr))
    listA.sort()
    print(listA[-2])
