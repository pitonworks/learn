class Shape:
    def setcolour(self, colour):
        self.colour = colour

class Circle(Shape):
    def setradius(self, radius):
        self.radius = radius
    def area(self):
        return 3.14 * self.radius * self.radius
    
c = Circle()
c.setcolour("Red")
c.setradius(5.0)
print(c.area())