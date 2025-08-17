class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        n = len(nums)
        check_list = [0]*n
        output=[]
        for i in nums:
            check_list[i-1] = check_list[i-1] + 1
        for index , value in enumerate(check_list):
            if(value>1):
                output.append(index+1)
        return output



        