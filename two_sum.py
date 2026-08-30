class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0
        for element in nums:
            j = i+1
            while j < len(nums):
                if (element + nums[j]) == target:
                    return [i,j]
                else:
                    j += 1
            i += 1

        