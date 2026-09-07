#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    total_nums = len(arr)
    total_pos = 0
    total_neg = 0
    total_zer = 0
    for num in arr:
        if num > 0:
            total_pos += 1
        elif num < 0:
            total_neg += 1
        else:
            total_zer += 1
    
    print(f"{total_pos / total_nums:.6f}")
    print(f"{total_neg / total_nums:.6f}")
    print(f"{total_zer / total_nums:.6f}")

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
