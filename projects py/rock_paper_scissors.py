import random


def play():
    player = 0
    computer = 1

    while(player != computer):
        computer = random.choice(['r', 'p', 's'])
        player = input("Enter r p or s: ")
        print(f"Player choose {player} and computer choose {computer}")

        if player == 'r' and computer == 'p':
            print("Computer won the game!!")
            break
        elif player == 'r' and computer == 's':
            print("Player won the game!!")
            break

        elif player == 'p' and computer == 's':
            print("Computer won the game!!")
            break

        elif player == 'p' and computer == 'r':
            print("Player won the game!!")
            break

        elif player == 's' and computer == 'r':
            print("Computer won the game!!")
            break

        elif player == 's' and computer == 'p':
            print("Player won the game!!")
            break
    if(player == computer):
        print(
            f"The game was tied because both computer and person choose {computer}")
play()
