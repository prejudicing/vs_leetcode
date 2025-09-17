/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 *
 * https://leetcode.cn/problems/3sum/description/
 *
 * algorithms
 * Medium (39.82%)
 * Likes:    7658
 * Dislikes: 0
 * Total Accepted:    2.5M
 * Total Submissions: 6.3M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * 给你一个整数数组 nums ，判断是否存在三元组 [nums[i], nums[j], nums[k]] 满足 i != j、i != k 且 j !=
 * k ，同时还满足 nums[i] + nums[j] + nums[k] == 0 。请你返回所有和为 0 且不重复的三元组。
 * 
 * 注意：答案中不可以包含重复的三元组。
 * 
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [-1,0,1,2,-1,-4]
 * 输出：[[-1,-1,2],[-1,0,1]]
 * 解释：
 * nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 。
 * nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 。
 * nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 。
 * 不同的三元组是 [-1,0,1] 和 [-1,-1,2] 。
 * 注意，输出的顺序和三元组的顺序并不重要。
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [0,1,1]
 * 输出：[]
 * 解释：唯一可能的三元组和不为 0 。
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：nums = [0,0,0]
 * 输出：[[0,0,0]]
 * 解释：唯一可能的三元组和为 0 。
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 3 <= nums.length <= 3000
 * -10^5 <= nums[i] <= 10^5
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int cur=0;
        int left=cur+1,right=nums.size()-1;
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        for(int i:nums)
        cout<<i<<" ";
        cout<<endl;
        for(cur;cur<nums.size();cur++){
            left=cur+1;right=nums.size()-1;
            if(nums[cur]>0)
            return results;
            if(cur>0&&nums[cur]==nums[cur-1])
            continue;
            //cout<<"cur:"<<nums[cur]<<" ";

            while(left<right){
                //cout<<"left:"<<nums[left]<<" right"<<nums[right]<<" ";
                if(nums[cur]+nums[left]+nums[right]>0)
                right--;
                else if(nums[cur]+nums[left]+nums[right]<0)
                left++;
                else{
                    results.push_back(vector{nums[cur],nums[left],nums[right]});
                    right--;
                    left++;
                    
                    while(left<right&&nums[left]==nums[left-1])
                    left++;
                    while(left<right&&nums[right]==nums[right+1])
                    right--;
                }
                
            }
        }
        return results;
    }
};
// @lc code=end

