import random


# def guess(x):
#     randomNumber = random.randint(1, x)
#     guess = 0
#     while(guess != randomNumber):
#         guess = int(input(f"Guess a number between 1 and {x} "))
#         if(guess > randomNumber):
#             print("The guess is too high")
#         elif(guess < randomNumber):
#             print("The guess is too low")

#     print("Yay you have guessed the right number {}".format(randomNumber))


# def computer_guess(guess):
#     computer_given = random.randint(1, 50)
#     while(guess != computer_given):
#         if(guess > computer_given):
#             print(f"The chosen number {computer_given} is too low")
#             computer_given = random.randint(computer_given, 50)
#         elif(guess < computer_given):
#             print(f"The chosen number {computer_given} is too high")
#             computer_given = random.randint(1, computer_given)
#     print("The computer successfully guessed the number")


# guess = int(input("Enter the number you want computer to guess: "))
# computer_guess(guess)


def computer_guess(x):
    low = 1
    high = x
    feedback = ''
    while feedback != 'c':
        if low != high:
            guess = random.randint(low, high)
        else:
            guess = low
        feedback = input(
            f"The computer input {guess} is too high (H) or too low (L) or correct (c): ").lower()
        if feedback == 'h':
            high = guess-1
        elif feedback == 'l':
            low = guess+1
    print(f"Yay you have guess the right number {guess}")


computer_guess(10000)
