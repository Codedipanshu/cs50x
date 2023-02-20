# TODO: cash

from cs50 import get_float

# get input
i = get_float("Change owed: ")

# check for condition
while i <= 0:
    i = get_float("Change owed: ")

# calculate total change
j = i * 100
a = j // 25
b = (j % 25) // 10
c = ((j % 25) % 10) // 5
d = (((j % 25) % 10) % 5) // 1

# print
print(f"{int(a + b + c + d)}")
