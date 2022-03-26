class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        left, right = 0, len(letters) - 1
        
        if target < letters[left] or target >= letters[right]:
            return letters[left]
        
        while left <= right:
            mid = (right + left) // 2
            
            if target < letters[mid]:
                right = mid - 1
            if target >= letters[mid]:
                left = mid + 1
                
        return letters[left]
        
        