class Person:
    """Base class for all people in the school."""

    def __init__(self, name, age, address):
        self.name = name
        self.age = age
        self.address = address

    def display_info(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Address: {self.address}")

class Student(Person):
    """Represents a student in the school with results."""

    def __init__(self, name, age, address, student_id, grade):
        Person.__init__(self, name, age, address)
        self.student_id = student_id
        self.grade = grade
        self.results = {}  # Dictionary to store subject:marks

    def display_info(self):
        Person.display_info(self)
        print(f"Student ID: {self.student_id}")
        print(f"Grade: {self.grade}")
        if self.results:
            print("Results:")
            for subject, marks in self.results.items():
                print(f"  {subject}: {marks}")
        else:
            print("Results: Not available")

    def add_result(self, subject, marks):
        self.results[subject] = marks

    def calculate_average(self):
        if self.results:
            total_marks = sum(self.results.values())
            return total_marks / len(self.results)
        else:
            return 0.0

# Example Usage with user input:
name = input("Enter student name: ")
age = int(input("Enter student age: "))
address = input("Enter student address: ")
student_id = input("Enter student ID: ")
grade = int(input("Enter student grade: "))

student = Student(name, age, address, student_id, grade)

num_subjects = int(input("Enter the number of subjects: "))
for _ in range(num_subjects):
    subject = input("Enter subject name: ")
    marks = float(input(f"Enter marks for {subject}: "))
    student.add_result(subject, marks)

student.display_info()
average = student.calculate_average()
print(f"Average marks: {average:.2f}")
