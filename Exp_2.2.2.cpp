#include <iostream>
#include <string>
using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    TreeNode* successor = nullptr;
    while (root != nullptr) {
        if (p->val >= root->val) {
            root = root->right;
        } else {
            successor = root;
            root = root->left;
        }
    }
    return successor;
}
