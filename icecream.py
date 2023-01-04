
class Solution:
    def findGoodPairs(self, a, n, k):
        # code here
        d={}
        for i in range(n):
            number=a[i]
            if number not in d:
                d[number]=[]
            d[number].append(i)
        ansd=0
        for ar in d.values():
            for i in range(len(ar)):
                lo,hi =i,len(ar)
                while lo+1<hi:
                    m=lo +(hi-lo)//2
                    if ar[m]-ar[i]>=k:
                        hi=m
                    else:
                        lo=m
                ansd+=len(ar)-hi
        return ansd
