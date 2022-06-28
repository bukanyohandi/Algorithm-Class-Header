#ifndef SPARSE_TABLE_HPP
#define SPARSE_TABLE_HPP

#include <assert.h>
#include <math.h>

#include <vector>
using namespace std;

template <class T, T (*op)(T, T)>
class SparseTable {
 public:
  SparseTable(vector<T> v) {
    __n = (int)v.size();

    table.push_back(v);
    for (int j = 1; (1 << j) <= __n; ++j) {
      vector<T> tmp(__n);

      for (int i = 0; (i + (1 << j) - 1) < __n; ++i) {
        tmp[i] = op(table[j - 1][i], table[j - 1][i + (1 << (j - 1))]);
      }
      table.push_back(tmp);
    }
  }

  T query(int left, int right) {
    assert(0 <= left && left < right && right <= __n);

    int lg = (int)log2(right - left);
    return op(table[lg][left], table[lg][right - (1 << lg)]);
  }

 private:
  int __n;
  vector<vector<T>> table;
};

#endif  // SPARSE_TABLE_HPP