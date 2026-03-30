"""
==========================================
Class এবং Object - Python OOP Concept
==========================================

Class কী?
Class হচ্ছে একটি blueprint বা ছাঁচ [00:35:22]। 
পৃথিবীতে বা real world-এর যেকোনো entity-কে আমরা programming-এ Class হিসেবে define করতে পারি। 

একটি Class-এর প্রধানত ২টি property থাকে: [00:35:29]
১. Data property: Constructor-এর ভেতরে আমরা যেসব variable রাখি (যেমন: কোনো কিছুর নাম, দাম বা সাইজ)।
২. Functional property: Class-এর ভেতরে তৈরি করা function-গুলো, যেগুলোকে OOP-এর ভাষায় method বলা হয় (যেমন: কোনো কাজ করা)।

Object কী?
Class বা ওই blueprint-এর ওপর ভিত্তি করে আমরা বাস্তবে যা তৈরি করি, সেটাই হলো Object।
Python-এ আমরা যা-ই define করি, সবই কোনো না কোনো Class-এর Object [00:39:36]।
"""

# ==========================================
# Video-তে দেখানো Real World Examples
# ==========================================

class Mobile:
    pass

# Mobile যদি Class হয়, তবে Samsung এবং iPhone হলো সেই Class-এর আলাদা আলাদা Object [00:44:08]।
samsung = Mobile()
iphone = Mobile()


class Car:
    pass

# Car যদি Class হয়, তবে BMW বা Audi হলো তার Object [00:44:48]।
bmw = Car()
audi = Car()


"""
==========================================
আরো সহজে বোঝার জন্য কিছু Extra Examples
==========================================
"""

# Example 1: সাইকেল
# মনে করুন 'Bicycle' হচ্ছে একটি blueprint। সব সাইকেলেরই একটি brand এবং model থাকে। 
class Bicycle:
    def __init__(self, brand, model): # Data property
        self.brand = brand
        self.model = model

# এখন আমরা ওই blueprint থেকে আসল Object তৈরি করছি:
my_bike = Bicycle("Veloce", "Outrage")


# Example 2: রান্নার রেসিপি
# 'Recipe' হলো আমাদের Class। এর ভেতরে আমরা dish-এর নাম এবং method রাখবো।
class Recipe:
    def __init__(self, name):
        self.name = name
    
    def cook(self): # Functional property বা Method
        print(f"Now cooking {self.name}!")

# Recipe Class-এর আলাদা আলাদা Object তৈরি করা হলো:
lunch_item = Recipe("Fried Rice")
dinner_item = Recipe("Chicken Roast")

# Object দিয়ে method call করা:
lunch_item.cook() # Output: Now cooking Fried Rice!


"""
==========================================
Python Inbuilt Classes Example
==========================================
Python-এর list, string, integer সবই আসলে class এবং এগুলোর value হলো object।
"""

my_list = [1, 2, 3] # এটি 'list' class-এর একটি object.    -> variable: my_list, class: list, object: [1,2,3]
my_string = "Django" # এটি 'str' class-এর একটি object     -> variable: my_string, class: str, object: "Django"

# my_list.upper() দিলে error আসবে। 
# কারণ upper() হলো string class-এর method, list-এর নয়। 
# Method সবসময় তার নির্দিষ্ট class-এর object-এর সাথেই কাজ করে।