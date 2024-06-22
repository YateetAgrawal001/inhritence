//????leetcode --> 560

/* 
1)- prefix sum nikalo 
2)- unordered map banao
3)-int count=0;
for(int  =0;i<n;i++){
    if(pre[i]==k) count++;

    int rem = pre[i]-key;
    if(m.find(rem)!=m.end()) count++;
    m[pre[i]]++;
}
*/

//????leetcode --> 2385

/*
TreeNode* first = NULL;

void markParent(TreeNode* root,unordered_map <TreeNode*,TreeNode*>& parent ){
    if(root==NULL) return;
    if(root->left!=NULL) parent[root->left] = root;
    if(root->right!= NULL) parent[root->right ] = root;
    markParent(root->left ,parent);
    markParent(root->right,parent);

}

void find (TreeNode* root, int start){    //node nikal ke dedi
    if(root == NULL) return ;
    if(root->val == start ){
         first = root;
         return;
        }
    find(root->left);
    find(root->right);
}

main(){
first = find(root,start);
unordered_map <TreeNode*,TreeNode*> parent;
markParent(root,parent);
unordered_set<TreeNode*> s;
s.insert(first);
queue<pair<TreeNode*,int>> q;
q.push({first,0});
int maxLevel  = INT_MIN;
//bfs chalaunga bhai ab

while(q.size()>0){
    pair<TreeNode*,int> p = q.front();
    q.pop();
    int level = p.second;
    maxLevel = max(maxLevel,level);
    TreeNode * temp = p .first;
    if(temp->left!=NULL){
        if(s.find(temp->left)=s.end()){
            q.push({temp->left,level+1});
            s.insert(temp->left);
        }
    }
    if(temp->right!=NULL){
        if(s.find(temp->right!=s.end()){
            q.push({temp->right,level+1});
            s.insert(temp->right);
        }
    }
    if(parent.find(temp)!=m.end()){
        if(s.find(parent[temp])=s.end()){
            q.push(parent[temp],level+1);
            s.insert(parent[temp]);
    }
}
return level-1;

}
*/



//????leetcode --> 49


/*
main(){
    vector<vector<string>> ans;
    unordered_map<string,vector<string>, mp;
    for(auto str : arr){
        int lexo = str;
        sort(lexo.begin(),lexo.end());
        if(mp.find(lexo)==mp.end()){
            vector<string> s;
            mp[lexo] = s;
        }
        else {
            mp[lexo].push_back(str);
        }
    }
    for(auto x : mp){
        ans.push_back(mp[lexo]);
    }
}
*/


// leetcode---------------->1657

/*
main(){
    if(str1.size() != str2.size()) return false;
    unordered_map<char,int>  mp1;
    unordered_map<char,int>  mp2;

    for(int i = 0;i<str1.size();i++){
       
        mp1[str1[i]]++;
         mp2[str2[i]]++;
    }
    for(auto x: mp1){
        char ch = x.first;
        if(mp2.find(ch)==mp2.end()) return false;
    }
    unoreder_map<int,int> h1,h2;
    for(auto x: mp1){
        int freq = mp1.second;
        h1[freq]++;
    }
    for(auto x: mp2){
        int freq = mp.2second;
        h2[freq]++;
    }
    for(int x : h1){
        int key = x.first;
        int freq = x.second;
        if(h2.find(key)==h2.end()) return false;
        if(h2.find(freq)==h2.end()) return false;
    }
    return true;

}
*/


// leetcode---------------->1497

/*
main(){
    unoreder_map<int,int>mp;
    for(int i =0;i<arr.size();i++){
        arr[i] = ((arr[i]%k)+k)%k;
        mp[arr[i]]++;
    }
    if(mp[0]%2!=) return false;
    if(mp.find(0)!=mp.end()) mp.erase(0);
    for(auto x : mp){
        int ele = x.first;
        int rem = k - ele;
        if(mp.find(rem)==mp.end()) return false;
        if(mp[ele]!=mp[rem]) return false;

    }
return true;
}
*/