from math import sqrt


def checkPrime(numberToCheck):

    if numberToCheck == 1:
        return False

    for i in range(2, int(sqrt(numberToCheck)) + 1):

        if numberToCheck % i == 0:
            return False

    return True

if __name__ == "__main__":
    print("hii")
    print(checkPrime(5))
    print(int(sqrt(5)))
    # for i in range(2,2):
        # print(i)

