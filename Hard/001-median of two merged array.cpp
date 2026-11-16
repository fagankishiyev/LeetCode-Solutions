/*
LeetCode #1 - Median of two sorted array
link:https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/2197230610/

input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/
#include <include.h>

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>mergedarr(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergedarr.begin());
        sort(mergedarr.begin(),mergedarr.end());
        if(mergedarr.size()%2==1)
        {
            return (mergedarr[mergedarr.size()/2]);
        }
        else
        {
            return(mergedarr[mergedarr.size()/2]+mergedarr[(mergedarr.size()/2)-1])/2;
        }

        
    }
};