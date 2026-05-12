class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        seen = dict()
        for i in range(len(nums)):
            num = nums[i]
            compliment = target - num

            if compliment in seen:
                return [seen[compliment], i]
            
            seen[num] = i

        # the inputs are guaranteed to have a solution
        return [0,0]

