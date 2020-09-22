#!/usr/bin/env python3
""" valid UTF-8 encoding """


def Valid(num):
    """ Valid - Verify the two most relevant bits

    num:    numto valid

    Return:
        False or True
    """
    mask = 1 << 7
    mask1 = 1 << 8
    if num & mask or num & mask1:
        return False
    else:
        return True


def validUTF8(data):
    """ validUTF8 - Valid elements of array

    data: array of numbers to valid

    Return:
        False or True
    """
    data_len = len(data)
    valid_len = 0
    for n in data:
        num = Valid(n)
        if num:
            valid_len += 1

    if valid_len == data_len:
        return True
    else:
        return False
