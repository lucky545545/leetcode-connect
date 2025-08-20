class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        total_subarrays = 0
        consecutive_zeros = 0

        for num in nums:
            if num == 0:
                consecutive_zeros += 1
            else:
                total_subarrays += (consecutive_zeros * (consecutive_zeros + 1)) // 2
                consecutive_zeros = 0
        if consecutive_zeros > 0:
            total_subarrays += (consecutive_zeros * (consecutive_zeros + 1)) // 2
            
        return total_subarrays
