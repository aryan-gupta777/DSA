

# **C++ Standard Template Library (STL) Notes**

### **1. Introduction to STL**
- **STL** is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.
- STL is divided into four main components:
  - **Containers**: Store objects and data.
  - **Algorithms**: Perform operations on containers.
  - **Iterators**: Provide a way to access elements in a container.
  - **Functors (Function Objects)**: Objects that can be called as though they are a function.

  ```
  https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx
  ```
        <button>
<a href="https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx" target="_blank" rel="noopener noreferrer"> link</a>
         </button>
 

---

### **2. Containers**

Containers are objects that store data. STL provides several types of containers, primarily divided into three categories:

#### **a. Sequence Containers**
  - **Vector**: Dynamic array, can resize itself.
    ```cpp
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    ```
    ```
      https://www.programiz.com/cpp-programming/vectors 
    ```
  
  - **Deque**: Double-ended queue, allows fast insertions/removals from both ends.
    ```cpp
    deque<int> dq = {1, 2, 3};
    dq.push_back(4);
    dq.push_front(0);
    ```
     ```
      https://www.programiz.com/cpp-programming/deque
    ```
    
  - **List**: Doubly linked list.
    ```cpp
    list<int> l = {1, 2, 3};
    l.push_back(4);
    ```
    
     ```
      https://www.programiz.com/cpp-programming/list
    ```

#### **b. Associative Containers**
  - **Set**: Collection of unique elements, sorted.
    ```cpp
    set<int> s = {3, 1, 4, 2};
    ```
  - **Map**: Collection of key-value pairs, sorted by keys.
    ```cpp
    map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    ```
  - **Multiset**: Like a set but allows duplicate elements.
    ```cpp
    multiset<int> ms = {1, 2, 2, 3};
    ```
  - **Multimap**: Like a map but allows duplicate keys.
    ```cpp
    multimap<int, string> mm;
    mm.insert({1, "one"});
    mm.insert({1, "uno"});
    ```

#### **c. Container Adapters**
  - **Stack**: LIFO data structure.
    ```cpp
    stack<int> s;
    s.push(1);
    s.pop();
    ```
  - **Queue**: FIFO data structure.
    ```cpp
    queue<int> q;
    q.push(1);
    q.pop();
    ```
  - **Priority Queue**: Elements are ordered such that the largest element is always at the front.
    ```cpp
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(10);
    ```

---

### **3. Iterators**

Iterators are used to point at the memory addresses of STL containers. They are used to iterate over the containers. Common iterator types:

- **begin()**: Returns an iterator pointing to the first element.
- **end()**: Returns an iterator pointing to the position after the last element.
- **rbegin()**: Returns a reverse iterator pointing to the last element.
- **rend()**: Returns a reverse iterator pointing to the position before the first element.

**Example**:
```cpp
vector<int> v = {1, 2, 3, 4};
for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
}
```

---

### **4. Algorithms**

STL provides many algorithms that can be used with containers, like sorting, searching, and manipulating elements.

- **Sort**: Sorts elements in the range [begin, end).
  ```cpp
  sort(v.begin(), v.end());
  ```
- **Reverse**: Reverses the order of elements.
  ```cpp
  reverse(v.begin(), v.end());
  ```
- **Find**: Searches for an element in the container.
  ```cpp
  auto it = find(v.begin(), v.end(), 3);
  ```
- **Binary Search**: Checks if an element exists in a sorted container.
  ```cpp
  bool found = binary_search(v.begin(), v.end(), 3);
  ```
- **Lower Bound / Upper Bound**: Returns the first position where an element can be inserted (lower bound) and the last position (upper bound).
  ```cpp
  auto lb = lower_bound(v.begin(), v.end(), 3);
  auto ub = upper_bound(v.begin(), v.end(), 3);
  ```

---

### **5. Functors**

A **functor** is a class or struct that overloads the `operator()`. They can be used in place of functions.

**Example**:
```cpp
struct Add {
    int operator()(int a, int b) {
        return a + b;
    }
};

Add add;
cout << add(2, 3);  // Output: 5
```

---

### **6. Commonly Used STL Features**

- **Pair**: Used to combine two values.
  ```cpp
  pair<int, string> p = {1, "one"};
  ```
- **Tuple**: Similar to pair but can hold more than two values.
  ```cpp
  tuple<int, string, float> t = make_tuple(1, "one", 1.0);
  ```
- **Emplace**: Constructs elements in-place.
  ```cpp
  vector<pair<int, int>> v;
  v.emplace_back(1, 2);  // Constructs pair directly in the vector
  ```

---

### **7. Best Practices**
- **Choose the right container**: Use the most appropriate container based on the operations you need.
- **Prefer algorithms over manual loops**: Use STL algorithms as they are optimized and provide better readability.
- **Use `auto` with iterators**: It simplifies code and makes it less error-prone.

---

### **8. Example Usage**

Here’s a quick example of using various STL components together:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 5, 1, 3};
    sort(v.begin(), v.end());  // Sort the vector
    reverse(v.begin(), v.end());  // Reverse it

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
```

---
