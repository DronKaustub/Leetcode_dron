class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
class Solution(object):
    def nextPermutation(self, nums):
        """
        Finds the next lexicographically greater permutation of nums.
        """
        n = len(nums)
        c = -1

        # Find the pivot (the last element where nums[i] < nums[i+1])
        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                c = i
                break

        if c == -1:
            # If no pivot, the list is in descending order, reverse it
            nums.reverse()
            return

        # Find the smallest element to the right of the pivot that's greater than the pivot
        for j in range(n - 1, c, -1):
            if nums[j] > nums[c]:
                nums[c], nums[j] = nums[j], nums[c]
                break

        # Reverse the sublist to the right of the pivot
        nums[c + 1:] = reversed(nums[c + 1:])