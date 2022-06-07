## FenwickTree<ValueType>
An implemented Fenwick tree data structure in the form of a class. This class is designed with the intention of simplicity for its user when constructing the data structure.
    
The class is recommended for C++11 or later.

`#include "fenwick_tree.hpp"`

### Constructor
| Syntax           | Complexity | Description                                               |
| ---------------- | ---------- | --------------------------------------------------------- |
| FenwickTree()    | $O(1)$     | Initializes a new fenwick tree data structure of size 0.  |
| FenwickTree($n$) | $O(n)$     | Initializes a new fenwick tree data structure of size $n$.|
    
### Methods
| Syntax                 | Complexity | Description                                                    |
| ---------------------- | ---------- | -------------------------------------------------------------- |
| add($index$, $val$)    | $O(log n)$ | Adds $val$ to $arr_{index}$.       |
| clear()                | $O(n)$     | Clears the current data structure.|
| getZero()              | $O(1)$     | Returns the zero value.                                        |
| resize($n$)            | $O(n)$     | Resizes the current data structure size to $n$.                         |
| setZero($val$)         | $O(1)$     | Sets a zero value.                                             |
| size()                 | $O(1)$     | Returns the size of data structure.                          |
| sum($left$, $right$)   | $O(log n)$ | Returns a sum of $arr_{left}$ + $arr_{left+1}$ + ... + $arr_{right-1}$|
    
### Details
Please find the `demo.cpp` and `demo2.cpp` file for the example use.
