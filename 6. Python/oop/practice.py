class mobile:
    def __init__(self, brand, model, features):
        self.brand=brand
        self.model=model
        self.features=features

class samsung(mobile):
    pass

s1 = samsung("Samsung", "S24", "104mp Camera,Big Display")

print(s1.brand, s1.model, s1.features)
