class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>& nums,int target,int start,vector<int>& current){
        if(target==0)
        {
            ans.push_back(current);
            return;
        }

        if(target<0){
            return;
        }

        for(int i=start;i<nums.size();i++)
        {
            current.push_back(nums[i]);

            backtrack(nums,target-nums[i],i,current);
            current.pop_back();
        }
    }


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> current;

        backtrack(nums,target,0,current);
        return ans;
        
    }
};
