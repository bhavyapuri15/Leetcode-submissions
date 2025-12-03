class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l=[]
        for i in range(len(nums)-1, -1, -1):
            if nums[i] == 0:
                l.append(nums[i])
                nums.pop(i)
        nums.extend(l)  
        print(nums)      