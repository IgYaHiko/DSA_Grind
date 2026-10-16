#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* lp;
    TreeNode* rp;

    TreeNode(int val) {
        this->val = val;
        this->lp = nullptr;
        this->rp = nullptr;
    }

};

class MyTree {
public:
    TreeNode* root;
    static int idx;
    MyTree() {
        root = nullptr;
    }

    void createRoot(int val) {
       
        if(root == nullptr) {
            TreeNode* newNode = new TreeNode(val);
            root = newNode;
            return;
        } else {
            cout << "\n Already root initialized \n";
            return;
        }
    }

    void displayHelper(TreeNode* node) {
        if(node == nullptr) {
            return;
        }

        cout << node->val << " ";
        displayHelper(node->lp);
        displayHelper(node->rp);
    }

    void display() {
        if(root == nullptr) {
            cout << "Tree is empty";
            return;
        }
        displayHelper(root);
        cout << endl;
    }

    TreeNode* preorder(vector<int> &pre) {
       
        idx++;
        
        if (idx >= pre.size() || pre[idx] == -1) {
            return nullptr;
        }
        TreeNode* newnode = new TreeNode(pre[idx]);
        newnode->lp  = preorder(pre);
        newnode->rp =  preorder(pre);
        return newnode;
    }
};

int MyTree::idx = -1;

int main() {
    MyTree T;

    vector<int> res = {
        1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1
    };

    T.root = T.preorder(res);
    T.display();

    return 0;
}