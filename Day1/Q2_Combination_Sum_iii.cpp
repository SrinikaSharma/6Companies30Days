class Solution {
public:
    void check(vector<vector<int>>& ans,vector<int>& vec,int target,int k,int st){
        if(target<0 || vec.size()>k)     
            return;           
        if(target==0 && vec.size()==k)    
            ans.push_back(vec);
        for(int i=st;i<10;i++){
            vec.push_back(i);
            check(ans,vec,target-i,k,i+1);     
            vec.pop_back();                 
        }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>vec;
        check(ans,vec,n,k,1);
        return ans;
    }
};

// https://leetcode.com/problems/combination-sum-iii/description/
