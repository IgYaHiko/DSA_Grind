class Student:

    def  __init__(self,name,age,marks):
        self.name = name
        self.age = age
        self.marks = marks
    def show(self):
        print(f"Name is {self.name}")
        print(f"{self.name} age is {self.age}")
        print(f"{self.name} marks is {self.marks}")
    def  is_passed(self):
        if(self.marks > 40):
            print(f"{self.name} is Passed")
        else:
            print(f"{self.name} is Failed")
s1 = Student(
    name="Subhro",
    age=21,
    marks=90
)
s2 = Student(
    name="Avik",
    age=22,
    marks=31
)
s1.show()
s1.is_passed()
s2.show()
s2.is_passed()