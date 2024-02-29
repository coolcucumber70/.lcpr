#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    if (root == nullptr)
        return result;

    stack<TreeNode*> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        TreeNode* curr = nodes.top();
        nodes.pop();
        result.push_back(curr->val);

        if (curr->right != nullptr)
            nodes.push(curr->right);

        if (curr->left != nullptr)
            nodes.push(curr->left);
    }

    return result;
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform preorder traversal
    vector<int> traversal = preorderTraversal(root);

    // Print the result
    cout << "Preorder Traversal: ";
    for (int num : traversal) {
        cout << num << " ";
    }
    cout << endl;

    // Clean up memory
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}