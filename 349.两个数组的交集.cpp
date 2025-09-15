/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 *
 * https://leetcode.cn/problems/intersection-of-two-arrays/description/
 *
 * algorithms
 * Easy (75.39%)
 * Likes:    995
 * Dislikes: 0
 * Total Accepted:    714.9K
 * Total Submissions: 948.3K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * 给定两个数组 nums1 和 nums2 ，返回 它们的 交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：nums1 = [1,2,2,1], nums2 = [2,2]
 * 输出：[2]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * 输出：[9,4]
 * 解释：[4,9] 也是可通过的
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= nums1.length, nums2.length <= 1000
 * 0 <= nums1[i], nums2[i] <= 1000
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // 暴力搜索m*n方法
        // set<int> results;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j])
        //         results.insert(nums1[i]);
        //     }
        // }        
        // return vector<int>(results.begin(),results.end());

        // 遍历3遍，m+n+1000
        // int lensum=nums1.size()+nums2.size();
        // vector<int> results1(1001,0);
        // for(int i=0;i<nums1.size();i++){
        //     if(results1[nums1[i]]==0)
        //     results1[nums1[i]]++;
        // }
        // vector<int> results2(1001,0);
        // for(int i=0;i<nums2.size();i++){
        //     if(results2[nums2[i]]==0)
        //     results2[nums2[i]]++;
        // }
        // vector<int> final;
        // for(int i=0;i<results1.size();i++){
        //     if(results1[i]==results2[i]&&results1[i]==1)
        //     final.push_back(i);
        // }
        // return final;

        // 用set的hash方式来解决
        unordered_set<int> temp(nums1.begin(),nums1.end());
        unordered_set<int> results;
        for(int i=0;i<nums2.size();i++)
        {
            if(temp.find(nums2[i])!=temp.end()){
                results.insert(nums2[i]);
            }
        }
        return vector<int>(results.begin(),results.end());
    }
};
// @lc code=end

