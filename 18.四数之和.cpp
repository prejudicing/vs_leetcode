/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 *
 * https://leetcode.cn/problems/4sum/description/
 *
 * algorithms
 * Medium (36.82%)
 * Likes:    2098
 * Dislikes: 0
 * Total Accepted:    734K
 * Total Submissions: 2M
 * Testcase Example:  '[1,0,-1,0,-2,2]\n0'
 *
 * 给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a],
 * nums[b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）：
 * 
 * 
 * 0 <= a, b, c, d < n
 * a、b、c 和 d 互不相同
 * nums[a] + nums[b] + nums[c] + nums[d] == target
 * 
 * 
 * 你可以按 任意顺序 返回答案 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums = [1,0,-1,0,-2,2], target = 0
 * 输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums = [2,2,2,2,2], target = 8
 * 输出：[[2,2,2,2]]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= nums.length <= 200
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> results;
        for(int k=0;k<nums.size();k++){
            if(nums[k]>target&&target>0)
            break;
            if(k>0&&nums[k]==nums[k-1])
            continue;
            for(int i=k+1;i<nums.size();i++){
                if(nums[k]+nums[i]>target&&target>0)
                break;
                if(i>k+1&&nums[i]==nums[i-1])
                continue;
                int left=i+1,right=nums.size()-1;
                while(left<right){
                    long long sum=(long long)nums[k]+nums[i]+nums[left]+nums[right];
                    if(sum==target){
                        results.push_back(vector{nums[k],nums[i],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left<right&&nums[left]==nums[left-1])
                        left++;
                        while(left<right&&nums[right]==nums[right+1])
                        right--;
                    }
                    else if(sum>target){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
        }

        return results;
    }
};
// @lc code=end

