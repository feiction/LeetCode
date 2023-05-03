""""https://leetcode.com/problems/fizz-buzz/"""
class Solution:
    def fizzBuzz(self, n: int):
        outputs = []
        for num in range(1, n + 1):
            if num % 3 == 0 and num % 5 == 0:
                outputs.append("FizzBuzz")
            elif num % 3 == 0:
                outputs.append("Fizz")
            elif num % 5 == 0:
                outputs.append("Buzz")
            else:
                outputs.append(str(num))
        return outputs
