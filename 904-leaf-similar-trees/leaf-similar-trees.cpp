class Solution {
private:
    void solve(TreeNode* root, vector<int> &v){
        if(root== NULL) return;

        solve(root->left,v);
        if(root->left == NULL && root->right ==NULL) v.push_back(root->val);
        solve(root->right, v);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> v1, v2;

        solve(root1, v1);
        solve(root2,v2);

        if(v1.size() != v2.size()) return false;

        for(int i = 0; i < v1.size(); i++ ){
            if(v1[i] != v2[i]) return false;
        }
        return true;
    }
};