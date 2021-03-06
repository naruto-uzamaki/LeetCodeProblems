class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> idx;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                idx.push_back(i);
            }
        }
        
        unordered_set<int> res;
        for(int i=0;i<idx.size();i++){
            for(int j=max(0,idx[i]-k);j<=min(n-1,idx[i]+k);j++){
                res.insert(j);
            }
        }
        
        vector<int> sol(res.begin(),res.end());
        sort(sol.begin(),sol.end());
        return sol;
    }
};
