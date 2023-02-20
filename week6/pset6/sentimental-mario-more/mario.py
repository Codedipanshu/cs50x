# TODO: mario-more

from cs50 import get_int

# prompt user for input
h = get_int("Height: ")

# check input for condition if not prompt again
while (h < 1 or h > 8):
    h = get_int("Height: ")

# print shape
for i in range(h):
    for j in range(h, i + 1, -1):
        print(" ", end="")
    for k in range(i + 1):
        print("#", end="")
    for l in range(2):
        print(" ", end="")
    for m in range(i + 1):
        print("#", end="")
    print()