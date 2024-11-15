// Find the Index of the First Occurrence in a String
// -------------------------------------------------------
// Given two strings needle and haystack, return the index
// of the first occurrence of needle in haystack, or -1 if
// needle is not part of haystack.
// -------------------------------------------------------
// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// -------------------------------------------------------
// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we
// return -1.

#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        int findFirstOccurence(string haystack, string needle) {
            int m = static_cast<int>(haystack.size()), n = static_cast<int>(needle.size());
            
            for (int i = 0; i <= m - n; i++) {
                if (haystack.substr(i, n) == needle) {
                    return i;
                }
            }
            
            return -1;
        }
};

int main() {
    Solution solution1;
    Solution solution2;
    
    cout << solution1.findFirstOccurence("sadbutsad", "sad") << endl;
    cout << solution2.findFirstOccurence("leetcode", "leeto") << endl;
    
    return 0;
}
