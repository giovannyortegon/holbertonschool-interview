#!/usr/bin/python3
""" Minimum Operations """


def minOperations(n):
    """ minOperations

    n:  (int) number to operate
    Return
        ops: (int)number of operations.
    """
    swap = 0
    ops = 0
    add = 1

    if n <= 1 or type(n) is not int:
        return 0
    else:
        while add < n:
            if n % add == 0:
                swap = add
                add *= 2
                ops += 1
            else:
                add += swap
            ops += 1

        return ops
