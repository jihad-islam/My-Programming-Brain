"""
==========================================
ATM Machine Project & Constructor in Python OOP
==========================================

যেকোনো Software বা Project তৈরির আগে Class Diagram তৈরি করা ভালো [00:54:00]।
নিচে ATM Machine-এর একটি Markdown-based Class Diagram দেওয়া হলো:

+-----------------------------------+
|            AtmMachine             |  <-- ১. Class Name (PascalCase)
+-----------------------------------+
| - pin                             |  <-- ২. Data Property (Variables)
| - balance                         |
+-----------------------------------+
| + menu()                          |  <-- ৩. Functional Property (Methods)
| + create_pin()                    |
| + change_pin()                    |
| + check_balance()                 |
| + withdraw()                      |
+-----------------------------------+


==========================================
Constructor কী? (__init__)
==========================================
Constructor হলো class-এর ভেতরের একটি special function বা magic method। 
ভিডিওর ভাষায়, এর একটি "Superpower" আছে! [01:02:18]

Superpower-টি হলো: 
সাধারণ function বা method-কে আমাদের manually call করতে হয়, কিন্তু constructor-কে call করতে হয় না। 
যখনই আমরা class-এর কোনো object তৈরি করি, constructor নিজে নিজেই execute হয়ে যায় [01:03:57]। 

সাধারণত Data property (variable)-গুলোকে initialize করার জন্য constructor ব্যবহার করা হয়।
"""

class AtmMachine:
    # Constructor define করার নিয়ম:
    def __init__(self):
        # self মানে হলো এটি AtmMachine class-এর নিজস্ব property
        self.pin = ""          # শুরুতে পিন ফাঁকা থাকবে
        self.balance = 0       # শুরুতে ব্যালেন্স জিরো থাকবে
        
        # Constructor-এর superpower দেখার জন্য একটি print statement:
        print("আমি Constructor! Object তৈরি হলেই আমি একা একা execute হয়ে যাই!")
        
        # আমরা চাইলে মেনু অপশনটাও এখান থেকেই call করে দিতে পারি
        # self.menu()

    # Functional property বা Method
    def menu(self):
        user_input = input("""
        Hi! How can I help you?
        1. Enter 1 to create pin
        2. Enter 2 to change pin
        3. Enter 3 to check balance
        4. Enter 4 to withdraw
        5. Anything else to exit
        """)
        
        if user_input == '1':
            self.create_pin()
        elif user_input == '2':
            self.change_pin()
        elif user_input == '3':
            self.check_balance()
        elif user_input == '4':
            self.withdraw()
        else:
            print("Exiting...")

    # অন্যান্য method-গুলোর structure (Logic পরে add করা যাবে)
    def create_pin(self):
        print("Pin creation logic here...")
    
    def change_pin(self):
        print("Pin change logic here...")
        
    def check_balance(self):
        print("Balance check logic here...")
        
    def withdraw(self):
        print("Withdraw logic here...")


# === Object Creation ===
# নিচের লাইনটি run করলেই __init__ (Constructor) নিজে নিজেই call হয়ে যাবে।
my_atm = AtmMachine() 


"""
==========================================
সহজে মনে রাখার জন্য Extra Example
==========================================
ধরি, আমরা একটি 'Student' class বানাচ্ছি। 
একজন student-এর object তৈরি করার সাথেই তার নাম ও আইডি set হয়ে যাওয়া উচিত। 
এর জন্য আমরা constructor ব্যবহার করবো।
"""

class Student:
    def __init__(self, student_name):
        # Object তৈরি করার সময় যে নাম দেওয়া হবে, তা class-এর data property-তে save হবে
        self.name = student_name
        print(f"Student object created for {self.name}!")

# Object তৈরি করার সময়ই value pass করে দিচ্ছি, constructor সেটা নিজে থেকেই set করে নিবে।
student_1 = Student("Jihad") 
# Output আসবে: Student object created for Jihad!