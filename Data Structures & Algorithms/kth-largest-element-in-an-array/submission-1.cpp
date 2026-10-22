class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> mPQ;


        for (int num : nums) {
            mPQ.push(num);
            if (mPQ.size() > k) {
                mPQ.pop();
            }
        }

        return mPQ.top();
    }
};
