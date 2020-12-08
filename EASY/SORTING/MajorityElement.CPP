#QUESTION

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ANSWER

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int majority =0, f=1;
      for(int i=1;i<nums.size();i++){
        if(nums[i]!= nums[majority])
          --f;
        else
          ++f;
        if( f==0){
          majority =i;
          f=1;
        }
      }
      return nums[majority];
    }
};
