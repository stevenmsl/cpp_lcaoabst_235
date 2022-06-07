#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol235;

/*
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.
*/

tuple<Node *, Node *, Node *, int>
testFixture1()
{

  auto root = new Node(6);
  root->left = new Node(2);
  root->left->left = new Node(0);
  root->left->right = new Node(4);
  root->left->right->left = new Node(3);
  root->left->right->right = new Node(5);

  root->right = new Node(8);
  root->right->left = new Node(7);
  root->right->right = new Node(9);

  return make_tuple(root, root->left, root->right, 6);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  auto root = get<0>(f);
  auto found = sol.lcm(get<0>(f), get<1>(f), get<2>(f))->val;

  cout << "Expect to see : " << get<3>(f) << endl;
  cout << found << endl;
}

main()
{
  test1();
}