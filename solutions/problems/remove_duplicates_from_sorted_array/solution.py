class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count = 0
        for index , value in enumerate(nums):
            if( index == 0 or  nums[index] != nums[index-1]):
                nums[count] = nums[index]
                count = count + 1
        return count
        