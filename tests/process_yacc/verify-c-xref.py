#! /usr/bin/python3
#
# Work-in-progress...
#
# This little Python program will verify that a symbol is referenced
# at a particular place in a particular file by deciphering the
# provided Xrefs-file

import sys
import argparse

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Verify symbol exists in c-xrefactory symbol file")
    parser.add_argument('xreffile', help='the name of the c-xrefactory symbol file in which to verify ...')
    parser.add_argument('symbol', help='that the symbol is found...')
    parser.add_argument('file', help='in file...')
    parser.add_argument('line', type=int, help='on line...')
    parser.add_argument('column', type=int, help='in column')

    args = parser.parse_args()

    # Arguments are
    print('Xref={0}, symbol={1}, file={2}, line={3}, column={4}'
          .format(sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4], sys.argv[5]))
