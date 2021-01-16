/* Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.

Example:
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units. */

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res=0,top=0,curr=0,n=heights.size();
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&heights[s.top()]>=heights[i])
            {
                top=s.top();  
                s.pop();
                curr=heights[top]*(s.empty()?i:i-s.top()-1);
                res=max(res,curr);
            }
            s.push(i);
        }
        while(!s.empty())
        {
            top=s.top();
            s.pop();
            curr=heights[top]*(s.empty()?n:n-s.top()-1);
            res=max(res,curr);
        }
        return res;
    }
};
