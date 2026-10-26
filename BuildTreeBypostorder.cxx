class Solution {
public:
    int search(vector<int>& inorder, int val, int l, int r) {
        for(int i = l; i <= r; i++) {
            if(inorder[i] == val) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& inorder,
                     vector<int>& postorder,
                     int &pIdx,
                     int l,
                     int r) {

        if(l > r) {
            return nullptr;
        }

        int curr = postorder[pIdx];

        TreeNode* root = new TreeNode(curr);

        pIdx--;

        int iIdx = search(inorder, curr, l, r);

        root->right = helper(inorder, postorder,
                             pIdx, iIdx + 1, r);

        root->left = helper(inorder, postorder,
                            pIdx, l, iIdx - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder,
                        vector<int>& postorder) {

        int postIdx = postorder.size() - 1;

        return helper(inorder, postorder,
                      postIdx, 0, inorder.size() - 1);
    }
};