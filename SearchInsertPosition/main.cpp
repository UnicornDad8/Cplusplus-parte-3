/*
---------------------------------------------------------------
Search Insert Position (Interview Question)
---------------------------------------------------------------
Given a sorted array of distinct integers and a target 
value, return the index if the target is found. If not, 
return the index where it would be if it were inserted 
in order.

You must write an algorithm with O(log n) runtime complexity.
---------------------------------------------------------------
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
---------------------------------------------------------------
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
---------------------------------------------------------------
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while(left < right) {
            int middle = left + (right - left) / 2;

            if(nums[middle] > target) 
                right = middle;
            else if (nums[middle] < target)
                left = middle + 1;
            else
                return middle;
        }

        return right;
    }
};

int main() {
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    Solution solution1;
    
    cout << solution1.searchInsert(nums1, target1) << endl;
    cout << "\n\n";
    
    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    Solution solution2;
    
    cout << solution2.searchInsert(nums2, target2) << endl;
    cout << "\n\n";
    
    vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    Solution solution3;
    
    cout << solution3.searchInsert(nums3, target3) << endl;
    cout << "\n";

    return 0;
}