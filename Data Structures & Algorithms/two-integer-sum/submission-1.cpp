class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        for(int i=0; i<nums.size(); i++){
            indices[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++){
            int dif = target-nums[i];
            if(indices.count(dif)==1 && indices[dif]!=i)
                return {i,indices[dif]};
        }
        return {};
    }
};
