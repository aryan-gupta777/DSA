### Bubble Sort: Detailed Notes

---

#### **Introduction**
Bubble Sort is a simple comparison-based sorting algorithm. It is known for its simplicity but not for its efficiency. The algorithm repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

#### **How It Works**
- **Passes**: The algorithm requires multiple passes through the list. Each pass sorts one element at its correct position (like the largest element "bubbling up" to the top of the list).
- **Comparison**: During each pass, adjacent elements are compared.
- **Swapping**: If the elements are out of order, they are swapped.
- **Optimization**: The process can be optimized by stopping early if no swaps are made during a pass, indicating that the list is already sorted.

#### **Pseudocode**
```plaintext
BubbleSort(array)
  n = length(array)
  for i from 0 to n-1
    swapped = false
    for j from 0 to n-i-2
      if array[j] > array[j+1]
        swap(array[j], array[j+1])
        swapped = true
    if not swapped
      break
```

#### **Step-by-Step Example**
**Given Array**: `[5, 2, 9, 1, 5, 6]`

- **Pass 1**: 
  - Compare `5` and `2` → Swap → `[2, 5, 9, 1, 5, 6]`
  - Compare `5` and `9` → No Swap → `[2, 5, 9, 1, 5, 6]`
  - Compare `9` and `1` → Swap → `[2, 5, 1, 9, 5, 6]`
  - Compare `9` and `5` → Swap → `[2, 5, 1, 5, 9, 6]`
  - Compare `9` and `6` → Swap → `[2, 5, 1, 5, 6, 9]`
- **Pass 2**: 
  - Compare `2` and `5` → No Swap → `[2, 5, 1, 5, 6, 9]`
  - Compare `5` and `1` → Swap → `[2, 1, 5, 5, 6, 9]`
  - Compare `5` and `5` → No Swap → `[2, 1, 5, 5, 6, 9]`
  - Compare `5` and `6` → No Swap → `[2, 1, 5, 5, 6, 9]`
- **Pass 3**: 
  - Compare `2` and `1` → Swap → `[1, 2, 5, 5, 6, 9]`
  - Compare `2` and `5` → No Swap → `[1, 2, 5, 5, 6, 9]`
  - Compare `5` and `5` → No Swap → `[1, 2, 5, 5, 6, 9]`
- **Pass 4**: 
  - Compare `1` and `2` → No Swap → `[1, 2, 5, 5, 6, 9]`
  - No swaps made, so the algorithm stops here.

#### **Time Complexity**
- **Best Case**: `O(n)` (when the array is already sorted; early stopping)
- **Average Case**: `O(n^2)`
- **Worst Case**: `O(n^2)`

#### **Space Complexity**
- **Auxiliary Space**: `O(1)` (Bubble Sort is an in-place sorting algorithm)

#### **Key Points**
- **Stability**: Bubble Sort is a stable sort (equal elements maintain their relative order).
- **Adaptive**: Bubble Sort is adaptive; it can stop early if the list is already sorted.
- **Not Practical**: Due to its quadratic time complexity, Bubble Sort is not suitable for large datasets. It is generally used for educational purposes or small datasets.

#### **Applications**
- **Educational Tool**: Often used to introduce the concept of sorting algorithms.
- **Small Data Sets**: Occasionally used for sorting small datasets where performance is not a primary concern.

#### **Visual Representation**

Imagine sorting bubbles in a water tank where the larger bubbles slowly "bubble up" to the top.

---

This detailed breakdown provides a comprehensive understanding of Bubble Sort, covering its methodology, complexity, and use cases.