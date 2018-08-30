class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int max=nums[0];
        int index=0;
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {max=nums[i];
            index=i;}
        }
        for(int& item:nums)
        {if(max!=item){
            if(max>=2*item){;}
            else{index=-1;}}
        }
        return index;
        }
};