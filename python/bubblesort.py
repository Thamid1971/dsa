def recursive_bubble_sort(arr, n=None):
    # Initialize size on first call
    if n is None:
        n = len(arr)
        
    # Base Case: Array of size 1 is sorted
    if n == 1:
        return
    
    # Track swaps to optimize for already sorted arrays
    swapped = False
    
    # One pass of bubble sort through the unsorted subarray
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            swapped = True
            
    # Optimization: If no elements were swapped, array is sorted
    if not swapped:
        return

    # Recursive call for the remaining n-1 elements
    recursive_bubble_sort(arr, n - 1)

# Example usage
numbers = [64, 34, 25, 12, 22, 11, 90]
recursive_bubble_sort(numbers)
print("Sorted array:", numbers)
