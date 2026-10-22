class Solution {


public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // max heap approach 
        priority_queue<int> kPQ;

        for (int num : nums) {
            kPQ.push(num);
        }

        for (int i = 0; i < k - 1; ++i) {
            kPQ.pop();
        }

        return kPQ.top();
    }
};
