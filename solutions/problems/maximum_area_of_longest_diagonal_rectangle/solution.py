from typing import List

class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        max_diag_sq = 0  # We will only store and compare the SQUARED diagonal
        max_area = 0

        # A cleaner way to loop through the dimensions
        for l, w in dimensions:
            # Calculate the square of the current diagonal once
            diag_sq = l**2 + w**2

            # If the current diagonal is longer than the max we've seen
            if diag_sq > max_diag_sq:
                max_diag_sq = diag_sq  # Update the max squared diagonal
                max_area = l * w       # This is the new max area
            
            # If the diagonals are the same length (a tie)
            elif diag_sq == max_diag_sq:
                # We only update the area if the new one is larger
                max_area = max(max_area, l * w)
                
        return max_area