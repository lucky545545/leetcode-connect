class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        out = []
        for i in range(0, len(order)):
            if(order[i] in friends):
                out.append(order[i])
        return out
        