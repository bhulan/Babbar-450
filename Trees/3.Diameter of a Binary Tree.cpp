
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
     int height(Node* root){
         if(root==NULL)
         return 0;
         return max(height(root->left),height(root->right))+1;
     }
    int diameter(Node* root) {
        // Your code here
         if(root==NULL)
         return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        int dia=lh+rh+1;
        int ldia=diameter(root->left);
        int rdia=diameter(root->right);
        return max(dia,max(ldia,rdia));
    }
};
