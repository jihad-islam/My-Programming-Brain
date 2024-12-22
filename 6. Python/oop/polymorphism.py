class vehicle:
    def __init__(self,Model,Brand, Component):
        self.Model = Model
        self.Brand = Brand
        self.Component = Component

class Plane(vehicle):
    pass


p1 = Plane("Boing", "ferari", "all component")


print(p1.Brand)