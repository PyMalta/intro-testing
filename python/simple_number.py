class SimpleNumber:
    def __init__(self, num):
        if not isinstance(num, (float, int)):
            raise TypeError('Wrong type, value must be number')
        self.x = num

    def add(self, y):
        return self.x + y

    def multiply(self, y):
        return self.x * y
