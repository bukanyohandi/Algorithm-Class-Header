/*
    Author: Yohandi
    Date: 03/06/2022
    This is a demo for using the "fenwick_tree.hpp" header class.
*/

#include <iostream>

#include "fenwick_tree.hpp"
using namespace std;

int main() {
  FenwickTree<int> tree(10);
  tree.setZero(0);
  tree.add(5, 2);
  tree.add(6, 3);
  tree.add(7, 4);
  tree.add(9, 10);
  cout << tree.sum(0, 10) << endl;
}