class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        umap = {}
        for index,value in enumerate(nums):
            if target - value in umap and umap.get(target-value) != index:
                return [index,umap.get(target - value)]
            umap[value] = index
        return []
        