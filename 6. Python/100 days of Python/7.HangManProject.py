# project: Hangman game

import random 

word_list =["ardvark","baboon","camel"]
chosen_word = random.choice(word_list)

lives = 6

print(f"The word is {chosen_word}")
length = len(chosen_word)

display =[]
for x in range(length): # etaw 0 to length obdhi loop cholbe
    # display.append("_")
    display += "_"
print(display)

end_of_game = False

# while end_of_game == False:
while not end_of_game:
    guess = input("Guess a letter: ").lower() # ami jodi capital letter input dei erporo lower() function ta input ke small letter e convert kore nibe.

    for x in range(length):
        if chosen_word[x] == guess:
            display[x] = guess
        # else:
        #     lives -= 1

    if guess not in chosen_word:
        lives -= 1
        if lives == 0:
            end_of_game = True 
            print("You Lose")

    print(display)

    if "_" not in display:
        end_of_game =  True
        print("You win.")