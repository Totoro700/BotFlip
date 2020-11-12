import time, sys, random, math


info = []
coins =  0
paper = 0


def text(msg):
    msg = str(msg)
    for i in msg:
        sys.stdout.write(i)
        sys.stdout.flush()
        time.sleep(0.003)
    print('')


def printOut():
    for j in info:
        text(j)

text('PyBot | v0.0.1a')


while True:
    acx = input('')
    if acx == 'help':
        text('Bot commands:')
        text('help - Opens the Bot Command list')
        text('coolPrint - Prints something')
        text('regularPrint - Regularly prints something')
        text('storeData - Stores some data you need to remember')
        text('colData - Returns all the data you stored')
        text('play - Play to get a chance to win coins')
        text('hack - N/A')
        text('coins - Returns how much coins you have')
        text('paper - Return how much paper you have')
        text('currentCP - Returns how much coins and paper do you have')
        text('store - Opens the store')
        text('sell - Choose somethings you want to sell')
        text('andom - Returns a random number ')
        text('notes | !credits - Open the notes and credits')
        text('reset - Resets(deletes) all your coins and paper')
        text('exit - Exits this bot')
    elif acx == '!coolPrint':
        text('Okay, what should we print?')
        acy = input('')
        text(acy)
    elif acx == '!regularPrint':
        text('Okay, what should we print?')
        acy = input('')
        print(acy)
    elif acx == 'exit':
        text('Data you entered(coins, paper and others) will not be saved! Are you sure you want to exit? Y = Exit | N = Cancel')
        exitInput = input('')
        if exitInput == 'Y' or exitInput == 'y':
            text('Exiting . . .')
            exit()
        elif exitInput == 'N' or exitInput == 'n':
            continue
        else:
            text('That\'s not a valid answer')
            continue
    elif acx == 'Hello' or acx == 'hello' or acx == 'Hello!' or acx == 'hello!' or acx == 'hi' or acx == 'Hi' or acx == 'hi!' or acx == 'Hi!':
        text('Hi! Type "!help" for a list of commands')
    elif acx == 'storeData':
        text('What do you want to store?')
        info.append(str(input('')))
    elif acx == '!colData':
        text('Collecting data . . .')
        printOut()
    elif acx == 'play':
        text('To get coins, answer this question:')
        text('Join(not add) these two numbers:')
        numO = str(random.uniform(3, 50))
        numT = str(random.uniform(3, 13))
        ans = numO+numT
        text(numO)
        text('And')
        text(numT)
        text('For exmaple, if it says 19.254 and 3.1235 then you would answer like: 19.2543.1235  \n   Order matters!')
        text('What\'s the answer?')
        uAns = str(input(''))
        if uAns == ans:
            coins = coins + 1
            text('Correct!')
            text('You have '+str(coins)+' coin(s) now!')
            continue
        else:
            text('Incorrect!')
            coins = coins - 1
            text('You have '+str(coins)+' coin(s) left!')
            continue
    elif acx == 'coins':
        text('You have '+str(coins)+' coin(s)')
    elif acx == 'paper':
        text('You have '+str(paper)+' paper(s)')
    elif acx == 'store':
        text('You can buy a paper for 5 coins')
        text('How much papers do you want to buy?')
        numPaper = int(input(''))
        if coins > (numPaper + 1) * 5:
            coins = coins - numPaper * 5
            paper = paper + numPaper
            text('You now have '+str(paper)+' paper(s)')
        else:
            text('You don\'t have enough money!')
            continue
    elif acx == 'hack':
        text('Type the password:')
        password = str(input(''))
        if password == 'PyBot | #qwertyuiop123 | Python':
            text('Entered')
            coins = coins + 99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999 * 9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
            paper = paper + 99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999 * 9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
        else:
            text('That is not the password')
            continue
    elif acx == 'notes' or acx == 'credits':
        text('Credits | Notes')
        text('N/A')
        continue
    elif acx == 'sell':
        if paper > 0:
            text('For every paper you sell, you get 3 coins')
            text('How much papers do you want to sell?')
            numSell = int(input(''))
            if numSell > paper:
                text('You don\'t have enough paper')
                continue
            else:
                paper = paper - numSell
                coins = coins + numSell * 3
                text('You now have '+str(paper)+' paper(s)')
                text('You now have '+str(coins)+' coin(s)')
        else:
            text('You don\'t have anything to sell')
    elif acx == 'reset':
        text('Are you sure you want to reset? This can not be undone. Y = Reset Now | N = Cancel')
        resetQ = input('')
        if resetQ == 'Y' or resetQ == 'y':
            coins = 0
            paper = 0
            continue
        elif resetQ == 'n' or resetQ == 'N':
            continue
        else:
            text('That\'s not a valid answer, continuing')
            continue
    elif acx == 'currentCP':
        text('Coins : '+str(coins)+' | Paper : '+str(paper))
    elif acx == 'random':
        text('Random number start')
        numStartRan = int(input(''))
        text('Random number end')
        numEndRan  = int(input(''))
        text(random.uniform(numStartRan, numEndRan))
    else:
        continue
