# dictionary
'''
1. dictionary = {key : value}
2. dictionary te list er moto kono index nai. dictionary te key diye value re call korte hoy.

'''

movie_dictionary = {
    "Dark": "Thriller tv series but for adults.",
    "Stranger": "It is also a thriller tv series but it is for child.",
    "Harry Porter": "This is I wanna see."
}

print(movie_dictionary["Harry Porter"])

# adding a value in dictionary
movie_dictionary["The fault in out stars"] = "This is one of my favourite romantic movies."

print(movie_dictionary)

# create an empty dictionary
empty_dictionary = {}

# existing dictionary kew empty dictionary kora jabe
# movie_dictionary = {} 

# loop through a dictionary

for x in movie_dictionary:
    print(x)  # just key gula print hobe
    print(movie_dictionary[x])  # key diye ekhn value print kortesi

# exercise:
student_scores = {
    "Harry": 81,
    "Ron": 78,
    "Hermione": 99,
    "Draco": 74,
    "Neville": 62,
}

student_grades = {}

for name in student_scores:
    score = student_scores[name]

    if score > 90:
        student_grades[name] = "outstanding"
    elif score > 80:
        student_grades[name] = "Exceeds Exceptations"
    elif score > 700:
        student_grades[name] = "Acceptable"
    else:
        student_grades[name] = "Fail"

print(student_grades)

###     Nesting     ###

#normal dictionary
capitals = {
    "Bangladesh": "Dhaka",
    "Turosko": "Istanbul",
}

# nesting a list in a dictionary
travel_log = {
    "Bangladesh": ["Dhaka", "Chottogram", "Sajek", "Rangamati"],
    "France": ["Paris", "Lille", "Dijon"],
}

# nesting a dictionary in a dictionary
travel_log = {
    "Bangladesh": {"cities_visited": ["Dhaka", "Gaibandha", "Naraynganj", "Rangpur"], "total_visited": 12},

    "India": {"cities_visited": ["Delhi", "Murshidabad", "Kolkata", "Chennai"], "total_visited": 4}
}

# nesting dictionary in a list
travel_log = [
    {
        "Country": "Bangladesh",
        "cities_visited": ["Dhaka", "Gaibandha", "Naraynganj", "Rangpur"],
        "total_visited": 12
    },

    {
        "Country": "India",
        "cities_visited": ["Delhi", "Kolkata", "Hydrabad", "Kashmir"],
        "total_visited": 4
    },
]

# coding exercise:
travel_log = [
    {
        "country": "France",
        "visits": 12,
        "cities": ["Paris", "Lille", "Dijon"]
    },

    {
        "Country": "Germany",
        "Visits": 5,
        "cities": ["Berlin", "Hamburg", "Stuttgart"]
    },
]


def add_new_country(name, times_visited, cities_visited):
    new_dictionary = {}
    new_dictionary["country"] = name
    new_dictionary["visits"] = times_visited
    new_dictionary["cities"] = cities_visited
    travel_log.append(new_dictionary)


country = input()
visits = int(input())
list_of_cities = eval(input())

add_new_country(country, visits, list_of_cities)

print(f"I have been visited {travel_log[2]['country']} {travel_log[2]['visits']} times.")
print(f"My favourite city was {travel_log[2]['cities'][0]}.")

'''
input:
Brazil
2
["Sao Paulo", "Rio de Janeiro"]

'''

# project: blind auction
auction = {}


# highest = 0

def finding_highest_bidder(auction):
    highest = 0
    winner = ""
    for x in auction:
        if auction[x] > highest:
            highest = auction[x]
            winner = x
    print(f"The winner is {winner} with the bid of {highest}$.")


flag = True
while flag:
    name = input("What's your name?: ")
    amount = int(input("What's your bid?: $"))
    auction[name] = amount

    opinion = input("Are there any other bidders? Type 'y' for yes and 'n' for no.\n").lower()
    if opinion == "n":
        flag = False

finding_highest_bidder(auction)
print(auction)
# print(highest)
