def linear_search(arr, target):
    for i, element in enumerate(arr):
        if element == target:
            return i

    return -1


arr = [1, 2, 3, 4, 5]
print(linear_search(arr, 1))
print(linear_search(arr, 3))
print(linear_search(arr, 5))
print(linear_search(arr, 7))
