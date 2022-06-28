#include <iostream>

#include "sparse_table.hpp"

using namespace std;

int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  SparseTable<int, min> table({1, 3, 4, 2, 5});
  cout << table.query(0, 5) << endl;
  cout << table.query(1, 3) << endl;
  cout << table.query(3, 5) << endl;
}