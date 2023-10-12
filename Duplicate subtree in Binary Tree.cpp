class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
        unordered_map<string, int> hm;
        solve(root, hm);
        
        for (const auto& entry : hm)
        {
            if (entry.second > 1){
                return 1;
            }
        }       return 0;
    }
    string solve(Node* node, unordered_map<string, int>& hm){
        string sb = "";
        
        if (node == nullptr) {
            return "n";
        }
        if (node->left == nullptr && node->right == nullptr){
            return to_string(node->data) + ",";
        }
        sb += solve(node->left, hm);
        sb += solve(node->right, hm);
        sb += to_string(node->data) + ",";
        
        string s = sb;
        hm[s]++;
        
        return s;
    }
};