class Engineer:
    def set(self, name, age):
        self.name = name
        self.age = age
    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)
engineer1 = Engineer()
engineer1.set("Alice", 30)
engineer1.display()

