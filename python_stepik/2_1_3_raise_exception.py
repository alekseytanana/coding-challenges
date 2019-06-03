class NonPositiveError(Exception):
    pass


class PositiveList(list):
    def append(self, x):
        if x <= 0:
            raise NonPositiveError("The number is non-positive")
        else:
            super().append(x)    #list.append(self, x)