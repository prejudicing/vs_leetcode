/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 *
 * https://leetcode.cn/problems/spiral-matrix-ii/description/
 *
 * algorithms
 * Medium (70.61%)
 * Likes:    1471
 * Dislikes: 0
 * Total Accepted:    558.7K
 * Total Submissions: 791.7K
 * Testcase Example:  '3'
 *
 * 给你一个正整数 n ，生成一个包含 1 到 n^2 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：n = 3
 * 输出：[[1,2,3],[8,9,4],[7,6,5]]
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：n = 1
 * 输出：[[1]]
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=1;
        int k=n/2;
        int i=0,j=n-1;
        vector<vector<int>> results(n, vector<int>(n));
        while(k--){
            for(int x=i;x<j;x++){
                results[i][x]=num++;
            }
            for(int x=i;x<j;x++){
                results[x][j]=num++;
            }
            for(int x=j;x>i;x--){
                results[j][x]=num++;
            }
            for(int x=j;x>i;x--){
                results[x][i]=num++;
            }
            i++;
            j--;
        }
        if(n%2==1)
        results[n/2][n/2]=n*n;
        return results;
    }
};
// @lc code=end

