# if flag is true
flag = True
count = 0

while flag:
    count += 1
    print("\nHello.\nYour name is Jihad Islam.")

    opinion = input("Do you want to print your name again? Type 'yes' or 'no'.\n")
    if opinion == "no":
        flag = False
        print(f"You have printed your name {count} times. Thank you.")


# if flag is false
flag = False

while not flag:
    print("\nHello.\nYour name is Jihad Islam.")

    opinion = input("Do you want to print your name again? Type 'yes' or 'no'.\n")
    if opinion == "no":
        flag = True