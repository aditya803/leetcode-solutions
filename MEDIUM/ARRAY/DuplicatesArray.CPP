#QUESTION
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int> a;
        if(n==0) return nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
          if(nums[i]==nums[i+1]){
            a.push_back(nums[i]);
          }
        }
      return a;
    }
};
