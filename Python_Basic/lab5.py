end = 99
start = 0
def main3():
        computer = random.randint(0,99)
        guesstime = 0
        guess = eval(input("Enter your guess number: "))
        while guesstime < 100 :
                start = guess
                end = guess
                guess = eval(input("Enter your guess number: "))
                GuessNumber(guess, computer)
                guesstime += 1

def GuessNumber(guess, computer):
        if guess < computer :
                print("Enter between ", guess, " and ", end)
        elif guess > computer :
                print('Enter between ', start, " and ", guess)
        else:
                print("Correct :)")

main3()



