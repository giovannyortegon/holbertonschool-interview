#!/usr/bin/python3
""" valid UTF-8 encoding """


def validUTF8(data):
    """ validUTF8 - Valid elements of array

    data: array of numbers to valid

    Return:
        False or True
    """
    valid_len = 0
    mask1 = 1 << 7
    mask2 = 1 << 6

    for num in data:
        mask = 1 << 7
        if valid_len == 0:
            while mask & num:
                valid_len += 1
                mask = mask >> 1

            if valid_len == 0:
                continue

            if valid_len == 1 or valid_len > 4:
                return False
        else:
            if not (num & mask1 and not (num & mask2)):
                return False
        valid_len -= 1

    return valid_len == 0
