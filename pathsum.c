
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
*/
bool hasPathSumHelper(struct TreeNode* root, int targetSum) {
    static int sum = 0; 
    
    if (root == NULL)
        return false;
    
    sum=sum+root->val;
    
    
    if (root->left==NULL && root->right == NULL) {
        bool result = sum == targetSum;
        sum=sum-root->val;
        return result;
    }
    

    bool foundPath = hasPathSumHelper(root->left, targetSum) || hasPathSumHelper(root->right, targetSum);
    
    sum=sum-root->val; 
    
    return foundPath;
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    return hasPathSumHelper(root, targetSum);
}
