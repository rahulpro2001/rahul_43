//hum isme ek curr mei root lenge
// fiir sbse pehle dekhte hai agr left exist krta hai toh
// toh firr hum isme right mei jayenge last taak basically curr k right ka predecessor dekhna hai fiir 
// jo milega uske right ko link kr denge curr k right se 
//fir curr->right = curr->left
//aur jo humara hoga curr ->left =null
 void flatten(TreeNode* root)
  {
    if(root==nullptr) return;
        TreeNode *curr = root;
        while(curr!=nullptr)
        {
            if(curr->left)
            {
                TreeNode *prev = curr->left;
                while(prev->right!=nullptr) prev = prev->right;
                prev->right = curr->right;
                curr->right  = curr->left;
                curr->left = nullptr;
            }
            curr = curr->right;
        }
    }

// recursive

//     class Solution {
// public:
//     TreeNode *prev = nullptr;
//     void flatten(TreeNode* root) {
//         if(root==nullptr)return;
//         flatten(root->right);
//         flatten(root->left);
//         root->right = prev;
//         root->left = nullptr;
//         prev = root;
//     }
// };
// sc - tc o(n)