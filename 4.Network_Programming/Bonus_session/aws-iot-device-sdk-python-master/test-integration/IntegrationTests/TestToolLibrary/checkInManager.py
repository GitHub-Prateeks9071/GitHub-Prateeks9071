# Class that is responsible for input/dependency verification
import sys


class checkInManager:

    def __init__(self, numberOfInputParameters):
        self._numberOfInputParameters = numberOfInputParameters
        self.mode = None
        self.customParameter = None

    def verify(self, args):
        # Check if we got the correct command line params
        if len(args) != self._numberOfInputParameters + 1:
            exit(4)
        self.mode = str(args[1])
        if self._numberOfInputParameters + 1 > 2:
            self.customParameter = int(args[2])
