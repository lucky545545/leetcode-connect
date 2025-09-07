class Solution:
    def sumZero(self, n: int) -> List[int]:
        out = []
        if(n%2 == 0):
            for i in range(-int(n/2), int(n/2)+1):
                if(i == 0):
                    continue
                out.append(i)
        else:
            for i in range(-int(n/2) , int(n/2)+1 ):
                out.append(i)
        return out