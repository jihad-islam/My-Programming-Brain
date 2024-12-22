from art import logo, vs
from game_data import data
import random


def result(guess, a, b):
    if a > b:
        return guess == "a"
    else:
        return guess == "b"


print(logo)

data1 = random.choice(data)
data2 = random.choice(data)
if data1 == data2:
    data2 = random.choice(data)

print(f"Compare A: {data1["name"]}, a {data1["description"]}, from {data1["country"]}")
print(vs)
print(f"Against B: {data2["name"]}, a {data2["description"]}, from {data2["country"]}")

guess = input("Who has more followers? Type 'A' or 'B': ").lower()

is_correct = result(guess, data1["follower_count"], data2["follower_count"])

if is_correct:
    print("Correct")
else:
    print("Wrong")
