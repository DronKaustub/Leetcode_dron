class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num==1:
            return True
        start =0
        end = num
        mid = (start + (end-start)/2)
        while(end>start):
            print(mid*mid)
            if(mid*mid==num):
                return True
            elif(mid*mid>num):
                end=mid
            elif(mid*mid<num):
                start=mid+1
            mid = (start + (end-start)/2)
        return False