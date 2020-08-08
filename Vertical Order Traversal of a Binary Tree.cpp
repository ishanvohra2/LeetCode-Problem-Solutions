#include <iostream>
#include <vector>

using namespace std;

int main(){

    return 0;
}

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

void dfs(TreeNode* root, int l, int& mn, int& mx){
        if(root==NULL) return;
        else{
            mn = min(l,mn);
            mx = max(l,mx);
            dfs(root->left,l-1,mn,mx);
            dfs(root->right,l+1,mn,mx);
        }
    }
    void dfs(TreeNode *root, int l, int mn, vector<vector<int>>& ans){
        if(root==NULL) return;
        else{
            
            dfs(root->left,l-1,mn,ans);
            ans[l-mn].push_back(root->val);
            dfs(root->right,l+1,mn,ans);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int mn=INT_MAX,mx=INT_MIN;
        dfs(root,0,mn,mx);
        
        vector<vector<int>> ans(mx-mn+1);
        
        // dfs(root,0,mn,ans);
        queue<pair<TreeNode *,int >> q;
        q.push({root,0});
        while(!q.empty()){
            vector<vector<int>> temp(mx-mn+1);
            int s = q.size();
            while(s--){
                pair<TreeNode *, int> p= q.front();
                q.pop();
                temp[p.second-mn].push_back(p.first->val);
                if(p.first->left) q.push({p.first->left,p.second-1});
                if(p.first->right) q.push({p.first->right,p.second+1});
            }
            
            for(int i=0;i<temp.size();i++){
                sort(temp[i].begin(),temp[i].end());
                ans[i].insert(ans[i].end(),temp[i].begin(),temp[i].end());
            }
        }
        return ans;
    }