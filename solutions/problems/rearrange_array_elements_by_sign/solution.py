class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos = []
        neg = []
        for i in range(0 , len(nums)):
            if(nums[i] > 0 ):
                pos.append(nums[i])
            elif(nums[i] < 0):
                neg.append(nums[i])
        for i in range(0,len(pos)):
            nums[2*i] = pos[i]
            nums[2*(i)+1] = neg[i]
        return nums

        