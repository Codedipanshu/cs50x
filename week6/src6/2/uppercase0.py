# Uppercase string one character at a time

from cs50 import get_string

before = get_string("Before: ")
print("After: ", end="")
for a in before:
    print(a.upper(), end="")
print()