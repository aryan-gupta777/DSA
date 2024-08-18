### Selection Sort Notes

#### **Overview**
Selection Sort is a simple comparison-based sorting algorithm. It works by repeatedly finding the minimum (or maximum) element from the unsorted part of the array and placing it at the beginning (or end). Despite its simplicity, it is not suitable for large datasets as its time complexity is quite high compared to more advanced algorithms like Quick Sort or Merge Sort.

#### **How It Works**
1. **Initial Setup**: Start with an unsorted array.
2. **Iterative Process**:
   - **Step 1**: Find the minimum element in the unsorted portion of the array.
   - **Step 2**: Swap this minimum element with the first element of the unsorted portion.
   - **Step 3**: Move the boundary of the sorted and unsorted portions one element to the right.
   - **Repeat**: Continue the process until the entire array is sorted.

#### **Example**
Consider the array: `[29, 10, 14, 37, 13]`

- **Iteration 1**: Find the minimum value in the array `[29, 10, 14, 37, 13]`, which is `10`. Swap it with the first element.
  - Array becomes: `[10, 29, 14, 37, 13]`
  
- **Iteration 2**: Find the minimum in the subarray `[29, 14, 37, 13]`, which is `13`. Swap it with the second element.
  - Array becomes: `[10, 13, 14, 37, 29]`

- **Iteration 3**: Find the minimum in the subarray `[14, 37, 29]`, which is `14`. It's already in the correct position.
  - Array remains: `[10, 13, 14, 37, 29]`
  
- **Iteration 4**: Find the minimum in the subarray `[37, 29]`, which is `29`. Swap it with `37`.
  - Array becomes: `[10, 13, 14, 29, 37]`

- **Final Sorted Array**: `[10, 13, 14, 29, 37]`

#### **Pseudocode**
```plaintext
for i = 0 to n-1 do
    min_index = i
    for j = i+1 to n do
        if array[j] < array[min_index] then
            min_index = j
    swap(array[i], array[min_index])
```

#### **Time Complexity**
- **Best Case**: O(n²) - Even in the best scenario, the algorithm still makes O(n²) comparisons because it must check each element.
- **Average Case**: O(n²)
- **Worst Case**: O(n²)

#### **Space Complexity**
- **Space Complexity**: O(1) - Selection Sort is an in-place sorting algorithm, meaning it requires a constant amount of additional memory space.

#### **Characteristics**
- **Stability**: Selection Sort is *not stable*. If two elements are equal, their relative order may not be preserved.
- **Adaptive**: Selection Sort is *not adaptive*. It doesn't take advantage of any existing order in the array.
- **Comparisons**: The algorithm makes (n*(n-1))/2 comparisons.
- **Swaps**: The algorithm makes at most (n-1) swaps.

#### **When to Use**
Selection Sort is best used when:
- The array is small.
- The simplicity of the algorithm is more important than performance.
- The cost of swapping is higher than the cost of comparison, as Selection Sort minimizes the number of swaps.

#### **Limitations**
- Not suitable for large arrays.
- Inefficient compared to more advanced sorting algorithms (like Quick Sort, Merge Sort).
  
#### **Visual Representation**
```plaintext
Initial array:  [29, 10, 14, 37, 13]
Iteration 1:    [10, 29, 14, 37, 13]
Iteration 2:    [10, 13, 14, 37, 29]
Iteration 3:    [10, 13, 14, 37, 29]
Iteration 4:    [10, 13, 14, 29, 37]
Sorted array:   [10, 13, 14, 29, 37]
```

