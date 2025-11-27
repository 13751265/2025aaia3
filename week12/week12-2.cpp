//week12-2.cpp
//找可構成三角形三邊長,加起來最大,兩邊和大於第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());//先(有效率的)排序
        //先練習倒過來的迴圈,把大到小印出來
        //for(int i=nums.size()-1;i>=0;i--){
            //cout<<nums[i]<<" ";
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;//找不到答案ˋ,return 0
    }
};
