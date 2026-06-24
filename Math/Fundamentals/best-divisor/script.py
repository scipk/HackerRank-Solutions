#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    
    divisors = [i for i in range(1, n+1) if n % i == 0]

    best_divisor = 0
    sum_of_best_divisor = 0
    for divisor in divisors:
        sum_of_divisor = sum(int(digit) for digit in str(divisor))
        if sum_of_divisor > sum_of_best_divisor:
            best_divisor = divisor
            sum_of_best_divisor = sum_of_divisor

    print(best_divisor)