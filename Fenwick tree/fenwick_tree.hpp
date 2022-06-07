#ifndef FENWICK_TREE_HPP
#define FENWICK_TREE_HPP

#include <assert.h>

#include <vector>
using namespace std;

template <class T>
class FenwickTree {
 public:
  FenwickTree() {
    __n = 0;
  }
  FenwickTree(int n) {
    assert(n >= 0);

    __n = n;
    BIT.resize(__n);
  }

  void add(int index, T val) {
    assert(0 <= index && index < __n);
    assert(zeroIsSet == true);

    for (++index; index <= __n; index += index & -index) {
      BIT[index - 1] += val;
    }

    return;
  }

  void clear() {
    fill(BIT.begin(), BIT.end(), zero);

    return;
  }

  T getZero() {
    return zero;
  }

  void resize(int n) {
    assert(n >= 0);

    __n = n;
    BIT.resize(n, zero);

    return;
  }

  void setZero(T val) {
    zero = val;
    zeroIsSet = true;

    return;
  }

  int size() {
    return __n;
  }

  T sum(int left, int right) {
    assert(0 <= left && left < right && right <= __n);
    assert(zeroIsSet == true);

    return sum(right) - sum(left);
  }

 private:
  bool zeroIsSet;
  int __n;
  T zero;
  vector<T> BIT;

  T sum(int right) {
    T ret = zero;
    for (int index = right; index > 0; index -= index & -index) {
      ret += BIT[index - 1];
    }

    return ret;
  }
};

#endif  // FENWICK_TREE_HPP