class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        out_list = [0]*n
        for i,j in enumerate(nums):
            out_list[(i+k)%n] = nums[i]
        nums[:] = out_list