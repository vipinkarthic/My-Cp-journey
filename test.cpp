#define ll long long
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;
        
        // Precompute left minimum array
        vector<int> leftMin(n);
        leftMin[0] = nums[0];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i-1], nums[i]);
        }
        
        // Precompute right maximum array
        vector<int> rightMax(n);
        rightMax[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i+1], nums[i]);
        }
        
        ll ans = -LLONG_MAX;  // Start with the smallest possible long long value
        
        // Evaluate each index j as the middle element of the triplet
        for (int j = 1; j <= n - 2; j++) {
            ll diff = (ll)leftMin[j-1] - nums[j];
            ll candidate = diff * rightMax[j+1];
            ans = max(ans, candidate);
        }
        
        return ans < 0 ? 0 : ans;
    }
};
