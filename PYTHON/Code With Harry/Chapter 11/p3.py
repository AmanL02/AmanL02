from ast import increment_lineno
from mimetypes import init


class Employee:
    salary = 6000
    increment = 4000

    @property
    def totalSalary(self):
        self.totalSalary = self.salary + self.increment

    @totalSalary.setter
    def totalSalary(self, val):
        self.increment = val - self.salary 


e=Employee()
n=int(input("Enter the total salary: "))
e.totalSalary = n
print(e.salary)
print(e.increment)