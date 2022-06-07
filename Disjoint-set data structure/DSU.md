## DSU<ValueType>
An implemented Disjoint-set data structure in the form of a class. This class is designed with the intention of simplicity for its user when constructing the data structure.
    
The class is recommended for C++11 or later.

`#include "dsu.hpp"`

### Constructor
| Syntax           | Complexity | Description                                               |
| ---------------- | ---------- | --------------------------------------------------------- |
| DSU()            | $O(1)$     | Initializes a new disjoint-set data structure of size 0.  |
| DSU($n$)         | $O(n)$     | Initializes a new disjoint-set data structure of size $n$.|
    
### Methods
| Syntax                 | Complexity | Description                                                                                 |
| ---------------------- | ---------- | ------------------------------------------------------------------------------------------- |
| connectedNodes($x$)    | $O(n)$     | Returns a vector of nodes that are connected to node $x$ (excluding the node $x$ itself).   |
| find($x$)              | $O(log n)$ | Returns the representation of the group where node $x$ belongs.                             |
| isConnected($u$, $v$)  | $O(log n)$ | Returns a boolean value indicating the connectivity between node $u$ and $v$.               |
| merge($u$, $v$)        | $O(log n)$ | Merges groups where node $u$ and $v$ respectively belong and returns the representation.    |
| resize($n$)            | $O(n)$     | Resizes the current data structure size to $n$ ($n$ should be larger than the current size).|
| setParent($u$, $v$)    | $O(1)$     | Sets node $u$ as the parent of node $v$.                                                    |
| size()                 | $O(1)$     | Returns the size of the data structure.                                                     |
| size($x$)              | $O(log n)$ | Returns the number of nodes that are connected to node $x$ (including the node $x$ itself). |
    
### Details
Please find the `demo.cpp` and `demo2.cpp` files for the example use.
