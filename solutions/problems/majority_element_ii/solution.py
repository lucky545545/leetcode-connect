class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        dict_out = {}
        for i in nums:
            if(i in dict_out):
                dict_out[i] += 1
            else:
                dict_out[i] = 1
        list_out = []
        for i in dict_out:
            if(dict_out[i] > n/3 ):
                list_out.append(i)
        return list_out
        