import random

com_num = random.randint(1, 100)

print("Welcome to the Number Guessing Game!\nI'm thinking of a number between 1 to 100.")
difficulty = input("Choose a difficulty. Type 'easy' or 'hard': ")

if difficulty == "easy":
    print("You have 10 attempts remaining to guess the number.")
    life = 10
elif difficulty == "hard":
    print("You have 5 attempts remaining to guess the number.")
    life = 5

# life = 5
while True:
    life -= 1

    guess_number = int(input("Make a guess: "))

    if com_num == guess_number:
        print("correct")
        break

    elif com_num > guess_number:
        print("Too low.\nGuess again.")
        print(f"You have {life} attempts remaining to guess the number.")
        # print(f"com no: {com_num}")

    elif com_num < guess_number:
        print("Too high.\nGuess again.")
        print(f"You have {life} attempts remaining to guess the number.")
        # print(f"com no: {com_num}")

    if life == 0:
        print("you've run out guesses,you lose.")
        break
