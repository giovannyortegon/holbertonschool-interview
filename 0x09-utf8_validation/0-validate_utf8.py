#!/usr/bin/env python3
""" valid UTF-8 encoding """


def validUTF8(data):
    """ validUTF8 - Valid elements of array

    data: array of numbers to valid

    Return:
        False or True
    """
    data_len = len(data)
    valid_len = 0
    mask = 1 << 7
    mask1 = 1 << 8

    for num in data:
        if num & mask or num & mask1:
            continue
        else:
            valid_len += 1

    if valid_len == data_len:
        return True
    else:
        return False
