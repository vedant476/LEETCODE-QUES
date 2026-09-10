class Solution {
public:
    int ans=0;
    pair<int, int> helper(TreeNode* root){
        if(root==NULL) return {0,0};

        auto left = helper(root->left);
        auto right = helper(root->right);

        int sum=left.first+right.first+root->val;
        int count=left.second+right.second+1;

        if(sum/count==root->val){
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};