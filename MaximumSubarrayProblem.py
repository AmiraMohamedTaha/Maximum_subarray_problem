def maxSubarray(arr):
    max_ending_here = arr[0]
    max_so_far = arr[0]
    max_noncontiguous = arr[0]

    for num in arr[1:]:
        max_ending_here = max(num, max_ending_here + num)
        max_so_far = max(max_so_far, max_ending_here)
        

        if num > 0:
            max_noncontiguous += num
        else:
            max_noncontiguous = max(max_noncontiguous, num)
    
    max_non_contiguous = max(max_noncontiguous, max(arr))
    return max_so_far, max_noncontiguous


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        result = maxSubarray(arr)
        print(result[0], result[1])
