To explain the difference between a stable and an unstable sort algorithm, I’ll first define these concepts and then provide a simple diagram to illustrate.

### *Stable Sort:*
A sorting algorithm is considered stable if it preserves the relative order of records with equal keys (values). If two elements have the same value, they will remain in the same order as they were in the input list.

### *Unstable Sort:*
A sorting algorithm is considered unstable if it does not necessarily preserve the relative order of records with equal keys. Elements with the same value may appear in a different order after sorting.

### *Diagram:*
Let’s consider an example where we have a list of objects with two fields: a value and an identifier (for example, a letter).

*Original List:*

[(4, 'A'), (3, 'B'), (4, 'C'), (2, 'D'), (3, 'E')]


Here, we are sorting by the first number, but notice that some numbers (like 4 and 3) appear more than once.

*1. Stable Sort:*
- After sorting (assuming stable sort), the list might look like this:
  
  [(2, 'D'), (3, 'B'), (3, 'E'), (4, 'A'), (4, 'C')]
  

  - Notice that (3, 'B') appears before (3, 'E') because B appeared before E in the original list.
  - Similarly, (4, 'A') appears before (4, 'C') because A appeared before C originally.

*2. Unstable Sort:*
- After sorting (assuming unstable sort), the list might look like this:
  
  [(2, 'D'), (3, 'E'), (3, 'B'), (4, 'C'), (4, 'A')]
  

  - Here, the relative order of (3, 'B') and (3, 'E') is not preserved, nor is the order of (4, 'A') and (4, 'C'). The algorithm has rearranged the equal elements.

### *Diagram Illustration:*


Original List:  [(4, 'A'), (3, 'B'), (4, 'C'), (2, 'D'), (3, 'E')]

Stable Sort:    [(2, 'D'), (3, 'B'), (3, 'E'), (4, 'A'), (4, 'C')]

Unstable Sort:  [(2, 'D'), (3, 'E'), (3, 'B'), (4, 'C'), (4, 'A')]


### *Conclusion:*
- *Stable Sort:* Preserves the order of equal elements (e.g., Merge Sort, Bubble Sort).
- *Unstable Sort:* Does not guarantee the preservation of the order of equal elements (e.g., Quick Sort, Heap Sort).

This diagram and explanation should clarify the difference between stable and unstable sorting algorithms.