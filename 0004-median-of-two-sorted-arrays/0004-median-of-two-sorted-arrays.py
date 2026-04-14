class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1.extend(nums2)
        nums1.sort()
        x=len(nums1)//2
        if len(nums1)%2==0:
            return float((nums1[x-1]+nums1[x])/2)

        else:
            return float(nums1[x])
