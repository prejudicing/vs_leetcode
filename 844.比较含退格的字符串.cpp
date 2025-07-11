/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 *
 * https://leetcode.cn/problems/backspace-string-compare/description/
 *
 * algorithms
 * Easy (48.07%)
 * Likes:    823
 * Dislikes: 0
 * Total Accepted:    289.7K
 * Total Submissions: 602.7K
 * Testcase Example:  '"ab#c"\n"ad#c"'
 *
 * 给定 s 和 t 两个字符串，当它们分别被输入到空白的文本编辑器后，如果两者相等，返回 true 。# 代表退格字符。
 * 
 * 注意：如果对空文本输入退格字符，文本继续为空。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：s = "ab#c", t = "ad#c"
 * 输出：true
 * 解释：s 和 t 都会变成 "ac"。
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：s = "ab##", t = "c#d#"
 * 输出：true
 * 解释：s 和 t 都会变成 ""。
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：s = "a#c", t = "b"
 * 输出：false
 * 解释：s 会变成 "c"，但 t 仍然是 "b"。
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= s.length, t.length <= 200
 * s 和 t 只含有小写字母以及字符 '#'
 * 
 * 
 * 
 * 
 * 进阶：
 * 
 * 
 * 你可以用 O(n) 的时间复杂度和 O(1) 的空间复杂度解决该问题吗？
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slow1=0,fast1=0;
        for(fast1;fast1<s.size();fast1++){
            if(s[fast1]!='#'){
                s[slow1++]=s[fast1];
            }
            if(s[fast1]=='#'&&slow1>0)
            {
                slow1--;
            }
        }
        cout<<"slow1:"<<slow1<<'\t';

        int slow2=0,fast2=0;
        for(fast2;fast2<t.size();fast2++){
            if(t[fast2]!='#'){
                t[slow2++]=t[fast2];
            }
            if(t[fast2]=='#'&&slow2>0){
                slow2--;
            }
        }
        cout<<"slow2:"<<slow2<<'\t';

        // int m=0;
        // while(s[m]!='#'){
        //     cout<<s[m++];
        // }
        // cout<<endl;
        // int n=0;
        // while(s[n]!='#'){
        //     cout<<s[n++];
        // }

        if(slow1!=slow2)
        return false;
        int i=0;
        while(i<slow1){
            if(s[i]!=t[i]){
                cout<<i;
                return false;
            }
            i++;
        }

        return true;
    }
};
// @lc code=end

