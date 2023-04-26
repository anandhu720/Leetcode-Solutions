class Solution:
    def addDigits(self, num: int) -> int:
        while True:
            cnt : int = 0
            newNum : int = 0
            while num != 0:
                newNum += num%10
                num //= 10
                cnt += 1
            if cnt <= 1:
                return newNum
            num = newNum
        return -1
        