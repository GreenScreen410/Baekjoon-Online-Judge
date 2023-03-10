from sys import stdin
input = lambda : stdin.readline().strip()

def merge_sort(start, end):
    global count

    if start < end :
        mid = (start + end) // 2
        merge_sort(start, mid)
        merge_sort(mid + 1, end)

        front_index, back_index = start, mid + 1
        new_A = []

        while front_index <= mid and back_index <= end :
            if A[front_index] <= A[back_index] :
                new_A.append(A[front_index])
                front_index += 1
            else :
                new_A.append(A[back_index])
                back_index += 1
                count += mid - front_index + 1

        if front_index <= mid :
            new_A = new_A + A[front_index : mid + 1]
        if back_index <= end :
            new_A = new_A + A[back_index : end + 1]

        for i in range(len(new_A)) :
            A[start + i] = new_A[i]

count = 0
N = int(input())
A = list(map(int, input().split()))

merge_sort(0, N - 1)
print(count)