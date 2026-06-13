#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    arr_sum = sum(arr)
    min_num = arr_sum - arr[0]
    max_num = 0
    for num in arr:
        test_num = arr_sum - num
        if test_num < min_num:
            min_num = test_num
        if test_num > max_num:
            max_num = test_num
    
    print(f"{min_num} {max_num}")

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
