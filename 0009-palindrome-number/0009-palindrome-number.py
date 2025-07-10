class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        n=x
        num = 0
        p=10
        if n<0:
            return False
        while n:
            num+=n%p
            n=n/p
            if n!=0:
                num*=10
            print(n)
        print(num,x)

        if x!=num:
            return False
        return True