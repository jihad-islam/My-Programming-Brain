result = 0


def add():
    global result  # global variable access er jonne global declare kore nite hobe.
    result = 1
    print(f"inside function {result}")


add()
print(f"outside function {result}")
