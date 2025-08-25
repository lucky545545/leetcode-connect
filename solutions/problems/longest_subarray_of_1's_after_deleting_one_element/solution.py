class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        counter = []
        count = 0
        maxi = -1
        count_0 = 0
        for i in range(0 , len(nums)):
            if(nums[i] == 0):
                counter.append(count)
                count = 0
                count_0 += 1
            else:
                count += 1
        counter.append(count)
        if(count_0 == 0):
            return len(nums)-1
        for j in range(0 , len(counter)-1):
            if(counter[j] + counter[j+1] > maxi):
                maxi = counter[j] + counter[j+1]
            else:
                continue
        return maxi
