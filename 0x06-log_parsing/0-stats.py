#!/usr/bin/python3
""" Imports """
import sys


def main():
    """ Main Function """
    size = [0]
    status_code = {'200': 0, '301': 0, '400': 0, '401': 0,
                   '403': 0, '404': 0, '405': 0, '500': 0}

    def log_parsing(response):
        """ parsing function """
        status = response.split()
        code = status[7]
        size[0] += int(status[8])
        if code in status_code:
            status_code[code] += 1
        else:
            pass

    def print_all():
        """ Print Dictionary """
        print("File size: {}".format(size[0]))
        for key, value in status_code.items():
            if value != 0:
                print("{}: {}".format(key, value))

    count = 1
    try:
        for response in sys.stdin:
            log_parsing(response)
            if count == 10:
                print_all()
                count = 0
            count += 1
    except KeyboardInterrupt:
        print_all()


if __name__ == "__main__":
    main()
