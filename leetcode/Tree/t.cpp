#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int val;
    Node* lp;
    Node* rp;

    Node(int val) {
        this->val = val;
        lp = rp = nullptr;
    }
};

class TreeNode {
public:
    Node* root;
    static int idx;
    TreeNode() {
        root = nullptr;
    }

    Node* buildTree(vector<int> &nums) {
        idx++;
        if(nums[idx] == -1 || idx >= nums.size()) {
            return nullptr;
        }
        Node* root = new Node(nums[idx]);

        root->lp = buildTree(nums);
        root->rp = buildTree(nums);

        return root;

    }
    void preorder(Node* root) {
        if(root == nullptr) {
            return;
        }

        cout << root->val << endl;;
        preorder(root->lp);
        preorder(root->rp);

    }

    void postOrder(Node* root) {
        if(root == nullptr) {
            return;
        }

        postOrder(root->lp);
        postOrder(root->rp);
       
        cout << root->val << endl;



    }

    void inorder(Node* root) {
        if(root == nullptr) {
            return;
        }

        inorder(root->lp);
        cout << root->val << endl;
        inorder(root->rp);
    }
    
};

int TreeNode::idx = -1;

int main() {
   vector<int> nums = {1, 2, -1, -1, 3, -1, -1};

    TreeNode tree;
    tree.root = tree.buildTree(nums);

    cout << "Tree created successfully" << endl;

    cout << "Pre Order: " << endl;
    tree.preorder(tree.root);

    cout << "Post Order: " << endl;
    tree.postOrder(tree.root);

    cout << "In Order: " << endl;
    tree.inorder(tree.root);
    return 0;

}