#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'divisors' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def divisors(n):
    # Write your code here
    if n%2 == 1:
        return 0
    
    ans = 0
    n = int(n/2)
    for i in range(1, int(math.sqrt(n)+1)):
        if i**2 == n:
            ans += 1
        elif n % i == 0:
            ans += 2
    return ans

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = divisors(n)

        print(result)
        # fptr.write(str(result) + '\n')

    # fptr.close()
