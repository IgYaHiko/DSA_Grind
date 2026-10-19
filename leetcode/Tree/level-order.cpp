#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        left = right = nullptr;
    }
};

class Tree {
public:

    TreeNode* root;
    static int idx;

    Tree() {
        root = nullptr;

       
    }

    TreeNode* buildTree(vector<int> &nums) {
        idx++;
        if(idx >= nums.size() || nums[idx] == -1 ) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(nums[idx]);
        
        root->left = buildTree(nums);
        root->right = buildTree(nums);
        return root;
    
        
    }

void display() {
    if (root == nullptr) {
        cout << "Tree is empty";
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            TreeNode* curr = q.front();
            q.pop();

            cout << curr->val << " ";

            if (curr->left != nullptr) {
                q.push(curr->left);
            }

            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }

        cout << endl;
    }
}

};

class Solution {
public:
    // left to right level order
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr) {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int levelsize = q.size();
            vector<int> temp(levelsize);
            int i = 0;
            
            while(levelsize--) {
                TreeNode* t = q.front();
                q.pop();
                temp[i] = t->val;
                i++;

                if(t->left != nullptr) {
                    q.push(t->left);
                }
                if(t->right != nullptr) {
                    q.push(t->right);
                }
            }

            res.push_back(temp);
        }
    return res;
    }


    // zigzag traversal
    vector<vector<int>> zigzagSearch(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr) {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool leftRight = 1;
        
        while(!q.empty()) {
            int levelsize = q.size();
            vector<int> temp(levelsize);
            int i = 0;
            int j = temp.size()-1;
            
            while(levelsize--) {
                TreeNode* t = q.front();
                q.pop();
                if(leftRight == 1) {
                    temp[i] = t->val;
                    i++;
                } else {
                    temp[j] = t->val;
                    j--;
                }

                if(t->left != nullptr) {
                    q.push(t->left);
                }
                if(t->right != nullptr) {
                    q.push(t->right);
                }
            }

            res.push_back(temp);
            leftRight = 1 - leftRight;
        }
    return res;
    }

    //check same tree 
    bool sameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) {
            return true;
        }
        if( p == nullptr || q == nullptr) {
            return false;
        }

        if(p->val != q->val) {
            return false;
        }

        bool r1 = sameTree(p->left, q->left);
        bool r2 = sameTree(p->right, q->right);

        if(r1 == true && r2 == true) {
            return true;
        }
    return false;
        
    }
    
};

int Tree::idx = -1;
int main() {
    
    Tree t;
    Tree r1r, r2r;
    Solution sol;
    vector<int> r1 = {1, 2, -1, -1, 3, -1, -1};
    vector<int> r2 = {1, 2, -1, -1, 4, -1, -1};
    vector<int> nums = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    t.root = t.buildTree(nums);
    Tree::idx = -1;
    r1r.root = r1r.buildTree(r1);
    Tree::idx = -1;
    r2r.root =  r2r.buildTree(r2);
    vector<vector<int>> ans = sol.levelOrder(t.root);
    vector<vector<int>> ans2 = sol.zigzagSearch(t.root);

    cout << "\n --- left to right level order traversal --- \n" << endl;
    for (int i = 0; i < ans.size(); i++) {
        
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\n --- zigzag level order traversal --- \n" << endl;
    for(int i=0; i < ans2.size(); i++) {
        for(int j=0; j<ans2[i].size(); j++) {
            cout << ans2[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "\n --- check the same tree --- \n";
    bool res = sol.sameTree(r1r.root, r2r.root);
    cout << boolalpha << "This tree is: " << res << endl;
    return 0;
}