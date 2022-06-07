#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace sol235;
using namespace std;

/*takeaways
  - continue the recursion if p and q are in the same
    child subtree of root
  - or root is the lcm
    - p and q might be the same as the root
*/

Node *Solution::lcm(Node *root, Node *p, Node *q)
{
  if (p->val < root->val && q->val < root->val)
    return lcm(root->left, p, q);

  if (p->val > root->val && q->val > root->val)
    return lcm(root->right, p, q);

  return root;
}