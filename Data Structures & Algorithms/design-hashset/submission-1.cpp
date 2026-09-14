class BST{
    private:
     struct TreeNode{
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int k):val(k),left(nullptr),right(nullptr){}
     };

     TreeNode*insert(TreeNode *root, int key){
        if(root==nullptr)return new TreeNode(key);
        if(key<root->val){
            root->left=insert(root->left,key);
        }else if(key>root->val){
            root->right=insert(root->right,key);
        }
        return root;
     }
     TreeNode* deleteNode(TreeNode*root,int key){
        if(root==nullptr)return nullptr;
        if(key<root->val){
            root->left=deleteNode(root->left, key);
        }else if (key>root->val){
            root->right=deleteNode(root->right,key);
        }else {
            if(root->left==nullptr and root->right==nullptr){
                delete root;
                return nullptr;
            }
            // only one child
            if(root->left==nullptr){
                TreeNode*temp=root->right;
                delete root;
                return temp;
            }
            if(root->right==nullptr){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            TreeNode*temp=minValueNode(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
     }
     TreeNode* minValueNode(TreeNode* root){
        while(root->left!=nullptr){
            root=root->left;
        }
        return root;
     }
     bool search (TreeNode*root, int key){
        if(root==nullptr)return false;
        if(key==root->val)return true;
        if(key<root->val)return search(root->left,key);
        return search(root->right,key);
     }
   TreeNode* root;
   public:
   BST():root(nullptr){}
   void add (int key){
    root=insert(root,key);
   }
   void remove (int key){
    root=deleteNode(root,key);
   }
   bool contains(int key){
    return search(root, key);
   }

};
class MyHashSet {
public:
    int size=10000;
    vector<BST>buckets;
    int hash(int key){
        return key%10000;
    }
    MyHashSet() {
        buckets.resize(size);
    }
    
    void add(int key) {
        int idx=hash(key);
        if(!contains(key)){
            buckets[idx].add(key);
        }
    }
  void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);
    }

    bool contains(int key) {
        int idx = hash(key);
        return buckets[idx].contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */