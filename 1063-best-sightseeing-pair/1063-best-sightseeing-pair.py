class Solution(object):
    def maxScoreSightseeingPair(self, values):
        """
        :type values: List[int]
        :rtype: int
        """
        # suma=0
        # sum1=0
        # n=len(values)
        # for i in range(0,n-1):
        #     for j in range(i+1,n):
        #         suma=values[i] + values[j] + i - j
        #         if sum1<suma:
        #            # print(suma)
        #             sum1=suma
            
        # return sum1


        max_so_far = values[0] + 0
        max_score = 0
        n = len(values)

        for j in range(1, n):
            current_score = max_so_far + values[j] - j
            max_score = max(max_score, current_score)
            max_so_far = max(max_so_far, values[j] + j)

        return max_score


