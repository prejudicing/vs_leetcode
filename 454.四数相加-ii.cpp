/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 *
 * https://leetcode.cn/problems/4sum-ii/description/
 *
 * algorithms
 * Medium (65.35%)
 * Likes:    1140
 * Dislikes: 0
 * Total Accepted:    369.3K
 * Total Submissions: 564.4K
 * Testcase Example:  '[1,2]\n[-2,-1]\n[-1,2]\n[0,2]'
 *
 * 给你四个整数数组 nums1、nums2、nums3 和 nums4 ，数组长度都是 n ，请你计算有多少个元组 (i, j, k, l)
 * 能满足：
 * 
 * 
 * 0 <= i, j, k, l < n
 * nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
 * 输出：2
 * 解释：
 * 两个元组如下：
 * 1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) +
 * (-1) + 2 = 0
 * 2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) +
 * (-1) + 0 = 0
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
 * 输出：1
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * n == nums1.length
 * n == nums2.length
 * n == nums3.length
 * n == nums4.length
 * 1 <= n <= 200
 * -2^28 <= nums1[i], nums2[i], nums3[i], nums4[i] <= 2^28
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    // 超时
    //     int count=0;
    //     for(int i=0;i<nums1.size();i++){
    //         for(int j=0;j<nums2.size();j++){
    //             for(int m=0;m<nums3.size();m++){
    //                 for(int n=0;n<nums4.size();n++){
    //                     if(nums1[i]+nums2[j]+nums3[m]+nums4[n]==0)
    //                     count++;
    //                 }
    //             }
    //         }
    //     }
    //     return count;
    // }

 
    //  经典解法
        int count=0;
        unordered_map <int,int> temp1,temp2;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                // int sum=nums1[i]+nums2[j];
                // auto m=temp1.find(sum);
                // if(m!=temp1.end()){
                //     m->second++;
                // }
                // else
                // temp1.insert({sum,1});
                temp1[nums1[i]+nums2[j]]++;
            }
        }

        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                int sum=nums3[i]+nums4[j];
                auto m=temp2.find(sum);
                if(m!=temp2.end()){
                    m->second++;
                }
                else
                temp2.insert({sum,1});
            }
        }
        
        for(auto m:temp1){
            auto target=temp2.find(-m.first);
            if(target!=temp2.end())
            count+=target->second*m.second;
        }
        return count;
    }
};
// @lc code=end

