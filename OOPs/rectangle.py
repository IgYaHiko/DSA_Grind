class Rectangle:
    def __init__(self, height, width):
            self.height = height
            self.width = width
    
    def rec_area(self):
          area = self.height * self.width
          print(f"Area of Rectangle: {area}")
    def cir_perimeter(self):
          perimeter =  2 * (1 + self.width)
          print(f"Perimeter: {perimeter}")

    
width = int(input("Enter Width: "))
height = int(input("Enter Height: "))
rectangle = Rectangle(height=height, width=width)
rectangle.rec_area()
rectangle.cir_perimeter()