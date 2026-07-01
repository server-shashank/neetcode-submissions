class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        store={}
        dup=False
        for i in nums:
            store[i]=store.get(i,0) +1
            if store[i]>1:
                dup=True
        return dup