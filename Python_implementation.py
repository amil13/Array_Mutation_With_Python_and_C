
class Cactus(object):
    """This class mutates a given array"""

    def __init__(self, a, n):
        self.a = a  # array
        self.n = n  # length of array

        ###
        # Note: The length of the array can be coded to take up the value automatically
        #  by using n = len(a), instead of it being a user input
        # it is done this way to adhere to problem statement's requirements
        ###

        self.b = [None] * n  # Mutated array
        self.operation()

    def operation(self):

        if self.n == 1:  # Outlier case of length being n=1
            self.b = self.a
        else:
            for i in range(self.n):
                if i == 0:
                    self.b[i] = self.a[i] + self.a[i + 1]  # a[i - 1] = 0
                elif i == self.n - 1:
                    self.b[i] = self.a[i - 1] + self.a[i]  # a[i + 1] = 0
                else:
                    self.b[i] = self.a[i - 1] + self.a[i] + self.a[i + 1]
        return print("Mutated Array:" + str(self.b))


class GuaranteedConditions(object):
    """This class checks for the validity of the user inputs"""

    def __init__(self, a, n):
        self.a = a
        self.n = n
        self.flag = None

    def conditions(self):
        # Checking for correct user input n
        if len(self.a) != self.n \
                or not 1 <= self.n <= 10 ** 3:
            print("Incorrect Value of n")
            return False
        else:          
            # Checking for array element condition
            for element in self.a:
                if not -10 ** 3 <= element <= 10 ** 3:
                    return False   # If any element of the array fails the condition, the loop exits
                else:
                    self.flag = True
        return self.flag  # Iterate through each element to check the condition, and keep the flag True


def main():
    while True:
        array = list(map(int, input("\nEnter the comma separated numbers of your array without brackets: ").split(',')))
        length = int(input("Enter the size of the array: "))

        if not GuaranteedConditions(array, length).conditions():
            print("Invalid inputs")
        else:
            Cactus(array, length)
            print(f"Input Array: {array}")

        print("-------------------------")


if __name__ == "__main__":
    main()
