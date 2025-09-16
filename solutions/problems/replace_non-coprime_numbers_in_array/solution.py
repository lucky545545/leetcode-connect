import math

class Solution:
    def replaceNonCoprimes(self, nums: List[int]) -> List[int]:
        res = []  # This list will act as our stack
        
        for num in nums:
            # The current number we are trying to add to our result
            current_num = num
            
            # Keep merging with the top of the stack as long as they are not coprime
            # The `while res` part checks if the stack is not empty
            while res and math.gcd(current_num, res[-1]) > 1:
                # Pop the last element from the stack
                last_element = res.pop()
                # Merge by finding the LCM and update our current number
                current_num = math.lcm(current_num, last_element)
            
            # After all possible merges, add the final resulting number to the stack
            res.append(current_num)
            
        return res