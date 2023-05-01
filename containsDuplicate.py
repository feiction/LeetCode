# https://leetcode.com/problems/contains-duplicate/
def containsDuplicate(self, nums: List[int]) -> bool:
    num_count = set()
    for num in nums:
        if num in num_count:
            return True
        else:
            num_count.add(num)
    return False
