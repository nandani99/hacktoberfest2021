void sum(vector<vector<int>>&ans,vector<int>&A,int i,int B,vector<int>&curr){
    if(B==0){
        ans.push_back(curr);
        return;
    }
    if(B<0){
        return ;
    }
    if(i==A.size()){
        return;
    }
    curr.push_back(A[i]);
    sum(ans,A,i,B-A[i],curr);
    curr.pop_back();
    sum(ans,A,i+1,B,curr);
    return;
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>>ans;
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    vector<int>v;
    sum(ans,A,0,B,v);
    return ans;
}
