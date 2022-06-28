## SparseTable<ValueType, func>
An implemented sparse table data structure in the form of a class. This class is designed with the intention of simplicity for its user when constructing the data structure.
    
The class is recommended for C++11 or later.

`#include "sparse_table.hpp"`

### Constructor
| Syntax           | Complexity   | Description                                                           |
| ---------------- | ------------ | --------------------------------------------------------------------- |
| SparseTable($v$) | $O(n log n)$ | Initializes a new sparse table data structure from the given vector v.|
    
### Methods
| Syntax                 | Complexity | Description                                                    |
| ---------------------- | ---------- | -------------------------------------------------------------- |
| query($left$, $right$) | $O(1)$     | Returns func($v_{left}$, $v_{left + 1}$, ..., $v_{right - 1}$) |
    
### Details
Please find the `demo.cpp` file for the example use.
