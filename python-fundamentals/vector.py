class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        if isinstance(other, Vector):
            return Vector(self.x + other.x, self.y + other.y)
        return NotImplemented

    def __radd__(self, other):
        return self.__add__(other)

    def __repr__(self):
        return f'Vector({self.x}, {self.y})' 