
class Solution:
    def longestMountain(self, arr: List[int]) -> int:
        if len(arr) < 3:  
            return 0
        
        ret = 0
        n = len(arr)
        
        for i in range(1, n - 1):
            if arr[i - 1] < arr[i] > arr[i + 1]:  
                l, r = i, i
                while l > 0 and arr[l] > arr[l - 1]:
                    l -= 1
                while r < n - 1 and arr[r] > arr[r + 1]:
                    r += 1
                ret = max(ret, r - l + 1)
        
        return ret if ret >= 3 else 0 
