class User:
    def __init__(self,userName, email,password):
        self.userName = userName
        self.email = email
        self.password = password
    def login(self,email,password):
        if self.email == email and self.password == password:
             print(f"User: {self.userName} is logged in Successfully")
        else:
             print(f"User: {self.userName} is Not logged in Successfully")
          
class Teacher(User):
     def teach(self):
         print(f"Teacher: {self.userName} is teaching")

class Student(User):
     def studying(self):
          print(f"Student: {self.userName} is Studying")
        
t1 = Teacher("Subhro","subhrokolay2@gmail.com","1234")
t1.login(email="subhrokolay2@gmail.com",password="1234")
t1.teach()
s1 = Student(userName="yahiko",email="yahiko@gmail.com", password="1234")
s1.login(email="yahiko@gmail.com", password="1234")
s1.studying()