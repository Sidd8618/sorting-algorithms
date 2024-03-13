def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

def selsort(arr):
    n = len(arr)
    for i in range(n - 1):
        k = i
        for j in range(i + 1, n):
            if arr[j] < arr[k]:
                k = j
        swap(arr, i, k)

def array(arr):
    print(" ".join(map(str, arr)))

arr = [10, 5, 6, 2, 3, 7]
selsort(arr)
print("Sorted array:")
array(arr)