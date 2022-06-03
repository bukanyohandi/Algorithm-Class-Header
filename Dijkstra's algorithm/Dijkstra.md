## Dijkstra<ValueType>
An implemented Dijkstra's algorithm in the form of a class. This class is designed with the intention of simplicity for its user when constructing a Dijkstra's algorithm
    
The class is recommended for C++11 or later.

`#include "dijkstra.hpp"`

### Constructor
| Syntax        | Complexity | Description                               |
| ------------- | ---------- | ----------------------------------------- |
| Dijkstra()    | $O(1)$     | Initializes a new empty graph of size 0.  |
| Dijkstra($n$) | $O(n)$     | Initializes a new empty graph of size $n$.|
    
### Methods
| Syntax                 | Complexity      | Description                                                    |
| ---------------------- | --------------- | -------------------------------------------------------------- |
| addEdge($u$, $v$, $w$) | $O(1)$          | Adds an edge between node $u$ and $v$ with a weight $w$.       |
| distance($source$)     | $O(V + E log V)$| Returns a vector of distances between the source and all nodes.|
| getInfinite()          | $O(1)$          | Returns the infinite value.                                    |
| getZero()              | $O(1)$          | Returns the zero value.                                        |
| resize($n$)            | $O(1)$          | Resizes the current graph size to $n$.                         |
| setInfinite($val$)     | $O(1)$          | Sets an infinite value.                                        |
| setZero($val$)         | $O(1)$          | Sets a zero value.                                             |
| size()                 | $O(1)$          | Returns the number of nodes in class.                          |
    
### Details
Please find the `demo.cpp` file for the example use.
