/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorderHelper(struct TreeNode* root, int* result, int* index) {
    if (root != NULL) {
        inorderHelper(root->left, result, index);
        result[(*index)++] = root->val;
        inorderHelper(root->right, result, index);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int)); // Assuming a maximum of 100 nodes
    *returnSize = 0;
    inorderHelper(root, result, returnSize);
    return result;
}
