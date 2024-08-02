import random

'''
1 for roke
-1 for peper
0 for secer 

'''
# Generate computer's choice
computer = random.choice([0, -1, 1])

# Get user's choice
youstr = input("enter you'r choise: ")
youdec = {"r": 1, "p":-1, "s": 0}
reversdec = {1:"r", -1:"p", 0:"s"}

# Mapping of user input to numeric values
you= youdec[youstr]

# Print out choices
print(f"you chose {reversdec[you]}\ncomputer choise {reversdec[computer]}")

# Determine winner
if (you==computer):
    print("tie")
else:
    if (you==1 and computer==-1):
        print("you losse!")
    elif (you==0 and computer==-1):
        print("you win")
    elif (you==1 and computer==0):
        print("you win")
    elif (you==-1 and computer==0):
        print("you losse!")
    elif (you==0 and computer==1):
        print("you losse!")
    elif (you==-1 and computer==1):
        print("you win")
    else:
        print("somthing wrong!")

