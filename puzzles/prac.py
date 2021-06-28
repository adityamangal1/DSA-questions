def isPower(x, y):
    if (x == 1):
        return (y == 1)
    pow = 1
    while (pow < y):
        pow = pow * x
    return (pow == y)


print(isPower(2, 8))
# pow  = 8