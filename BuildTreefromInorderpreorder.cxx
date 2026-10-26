class Solution {
public:
    int search(vector<int> &inorder, int val, int l, int r) {
        for(int i = l; i <= r; i++) {
            if(inorder[i] == val) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,
                     int &preIdex, int left, int right) {

        if(left > right) {
            return nullptr;
        }

        int curr = preorder[preIdex];

        TreeNode* root = new TreeNode(curr);

        preIdex++;

        int inIdex = search(inorder, curr, left, right);

        root->left = helper(preorder, inorder,
                            preIdex, left, inIdex - 1);

        root->right = helper(preorder, inorder,
                             preIdex, inIdex + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;

        return helper(preorder, inorder,
                      preIdx, 0, inorder.size() - 1);
    }
};