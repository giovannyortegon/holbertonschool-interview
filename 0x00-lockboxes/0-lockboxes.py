#!/usr/bin/python3
""" Determines if all the boxes can be opened """


def canUnlockAll(boxes):
    """ canUnlockAll - determines if all the boxes can be opened.
    boxes:  Input matrix boxes
    return: True if all the boxes can be opened
    """
    len_box = len(boxes)
    keys = []

    for i in range(1, len_box):
        for j in range(0, len_box-1):
            if len(boxes[0]) == 0:
                return False
            if i in boxes[j] and i not in keys:
                keys.append(i)

    if len(keys) == len_box - 1:
        return True
    else:
        return False
