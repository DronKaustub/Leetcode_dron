# class Solution(object):
#     def searchRange(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: List[int]
#         """
#         n=len(nums)
#         ans=[-1,-1]
#         start=0
#         end = len(nums)-1
#         mid = (end - start)/2 + start
#         while(end>=start):
#             if(target==nums[mid]):
#                 if(nums[mid+1]==target):
#                     ans[0]=nums[mid]
#                     ans[1]=nums[mid+1]
#                 elif(nums[mid-1]==target):
#                     ans[0]=nums[mid-1]
#                     ans[1]=nums[mid]
#                 return ans
#             elif(target>mid):
#                 start=mid
#             else:
#                 end=mid-1
#             mid = (end - start)/2 + start

#         return ans


class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        def binary_search(nums, target, find_first):
            left, right = 0, len(nums) - 1
            result = -1
            
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] == target:
                    result = mid
                    if find_first:
                        right = mid - 1  # Continue searching left for first position
                    else:
                        left = mid + 1   # Continue searching right for last position
                elif nums[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
                    
            return result
        
        # Find first and last positions
        first = binary_search(nums, target, True)
        last = binary_search(nums, target, False)
        
        return [first, last]