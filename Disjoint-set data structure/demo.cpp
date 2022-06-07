/*
    Author: Yohandi
    Date: 07/06/2022
    This is a demo for using the "dsu.hpp" header class.
*/

#include <iostream>

#include "dsu.hpp"

using namespace std;

int main() {
  DSU graph(10);
  graph.merge(0, 2);
  graph.merge(1, 3);
  graph.merge(2, 4);
  cout << graph.isConnected(0, 4) << endl;
  cout << graph.isConnected(0, 3) << endl;
}
