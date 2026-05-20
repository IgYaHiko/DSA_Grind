class Employee:
    def __init__(self, name, salary):
            self.name = name
            # private salary
            self.__salary = salary
    def get_salary(self):
          return self.__salary
    def set_salary(self,newSalary):
        if newSalary < 0:
            print("Can't be negative")
        else:
            self.__salary = newSalary
            print("Salary updated successfully")
        
          
emp = Employee(name="Subhro", salary=50000)
print(emp.get_salary())
emp.set_salary(newSalary=700000)
print(emp.get_salary())