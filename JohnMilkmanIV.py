import math
def Intro():
    print("Your name is John Milkman and you must deliver milk to the whole city")
    print("welcome to...")
    print()
    print("JOHN MILKMAN IV(he had a head injury and forgot the other 3)")
    print("a game by CButtrs")
    print()
    print()
    print()
    print()
    street1()
                

def street1():
    print()
    print('You arrive at "Street 1" and begin to go down the road')
    print("you deliver milk to 4 of the 5 houses but upon knocking on the door of the fifth house a man with a large hammer comes out")
    print("he tells you that you took his place as milkman and that he seeks revenge")
    print("you cant run fast enough to get away")
    fight1()

def fight1():
    print()
    print("you decide to fight the man")
    global weaponch1
    weaponch1 = input(' What weapon will you use? (Milk Cannon or Cow Sword)(MC/CS)')
    if weaponch1.lower() == 'mc':
        print(" you pull out the Milk Cannon and fire at the man")
        print("he dodges the first shot and charges at you")
        print("You manage to fire another one and it hits him in the chest and sends him flying backwards")
        print("you see this as a successful delivery")
        transition1()
        
    if weaponch1.lower() == 'cs':
        print("you unsheath your sword and strike him in the shin")
        print("you quickly grabs his hammer and slams you in the left foor")
        print("you have broken your foot")
        global foot
        foot = 'broken'
        print("you manage to shove a carton of milk in his mouth and then run away")
        print("another successful delivery")
        transition1()
        
    else:
        print("Please choose a valid answer")
        fight1()
    
def run1():
    print()
    print('you run from the man and get in your truck')
    hammer = 'alive'
    transition1()

def street2():
    global weaponch1
    print()
    print("you arrive at ""Street 2"" and begin to deliver")
    print("you spot a dog running towards you")
    print("the dog rips open your truck door and you climb out")
    fight2 = input('what will you do? run or fight? (R/F) ')
    if fight2.lower() == 'r':
        if weaponch1.lower() == 'cs':
            alien()
        else:
            print("you attemt to run")
            tree()
    if fight2.lower() == 'f':
        print("you attack the dog")
        print("the dog bites you but you dodge and kick him")
        print("the dog understands that you are a superior being and runs away")
        street3()
    else:
        print("choose a valid answer")
        street2()
def broken_foot():
    print()
    print("you attempt to run but your foot is broken and you tumble to the ground")
    print("before you can be attacked by the dog a giant light beams down on the dog and it dissapears")
    alien()

def tree():
    print()
    print("you climb up the tree and wait for it to run...it starts to devour the tree")
    global choice2
    choice2 = input('you hear a man shouting, what do you do? (call for help or wait) (C/W)')
    if choice2.lower() == 'c':
        js()
    if choice2.lower() == 'w':
        wait()
    else:
        print("please choose a valid answer")
        tree()

def js():
    print()
    print("you hear a man shouting from a distance....it is your best friend John Scientist")
    print("John identifies the dog as a dogwood dog who will devour humans and trees for food")
    print(' he tosses you a "dog repelant" and tells you to spray it on yourself')
    print("you spray it and the dog runs off")
    print("back to work")
    street3()

def wait():
    print()
    print("you decide to wait...suddenly the tree begins to fall...you fall on the dog and it flies away in fear")
    print("back to work")
    print()
    street3()


def transition1():
    print()
    print("you drive off to the next street")
    print()
    print()
    print()
    street2()

def alien():
    print()
    print("you look up and see a giant flying saucer!")
    print("the UFO flies around and then slowly lowers to the ground")
    print("the UFO lands and a door opens up")
    print("a small yellow man(about two feet tall) walks out and greets you")
    print(' "hello", he says, "I am Bingus from the lands of Pluto 2 in the Andromeda galaxy"')
    print("you look at him closely and see that he is wearing a StarWars The Phantom Menace t-shirt and cargo shorts and is wearing flip-flops on his feet and a backwards cap")
    print("it is also important to note that he has purple sunglasses")
    print(' "do you want to go to space? its pretty cool", he asks')
    spæce = input("do you go with him? (y/n) ")
    if spæce.lower() == 'y':
        space()
    if spæce.lower() == 'n':
        nospace()
    else:
        print("please choose a valid answer")
        alien()

def space():
    print()
    print("you decide to go to space with the alien")
    print()
    print()
    print()
    print("you arrive in space and Bingus takes you to the galactic MC Donalds")
    mcds()

def nospace():
    print()
    print("you decline his offer possibly suspecting him to want to kidnap you like he did with the dog")
    print("you decide to get in your damaged truck and leave to the next street")
    street3()

def mcds():
    print()
    print("you arrive at MC Donalds")
    print()
    print("what will you order? (burg, nugg, potato)")
    order = input("B/N/P/BK ")
    if order.lower() == 'bk':
        gameoverbk()
    if order.lower() == 'b':
        print("you decide to order a burger and you sit down with Bingus")
        rstrnt()
    if order.lower() == 'n':
        print("you decide to order chicken nuggets and you sit down with Bingus")
        rstrnt()
    if order.lower() == 'p':
        print("you decide to order just fries since you are on a diet and you heard on facebook that Mc Donalds french fries are very healthy")
        print("you then sit down with Bingus")
        rstrnt()
    else:
        print("thats not on the menu")
        mcds()

def gameoverbk():
    print()
    print("you say that you prefer Burger King and the waiter quickly calls the police")
    print("the police arrive and instead of arresting you just shoot you")
    print("    YOU ARE  ▄▄▄▄   ▄▄▄    ▄▄    ▄▄▄▄   ")
    print("             ▌   ▌  █     █  █   ▌   ▌  ")
    print("             ▌   ▌  █▀▀   █▀▀█   ▌   ▌  ")
    print("             ▌   ▌  █     █  █   ▌   ▌  ")
    print("             ▀▀▀▀   ▀▀▀   ▀  ▀   ▀▀▀▀   ")
    exit
    
def rstrnt():
    print()
    print("you sit down with your meal and he tells you about Pluto 2")
    print("he also briefly mentions that he is a wanted criminal but you ignore that")
    print("while you are eating you hear a loud sound")
    print("its the cops")
    print("the cops pull out their super guns and shoot at bingus")
    print("Bingus pulls out his GUN III and begins to fire rapidly")
    print()
    global cop_1
    cop_1 = input("you look around and see Bingus's keys, do you take them and get into his ship? y/n ")
    if cop_1.lower() == 'y':
        print("you steal his keys and decide to run for the exit")
        _exit()
    if cop_1.lower() == 'n':
        print("you think that stealing is wrong")
        noexit()

def _exit():
    print()
    print("you run out to the ship and insert the keys. the door opens and you rush inside")
    print("when you enter you make your way to the cockpit")
    print("you notice that to engage in flight you need to enter a code")
    chooise = input("you see 2 other rooms inside the ship, which will you search? (1/2) ")
    if chooise.lower() == '1':
        print("you enter the room and see nothing of interest, it is just a kitchen")
        print("you are about to leave the room when you notice a sticky-note attached to the fridge")
        print("you see the code: 42450214 ")
        cockpit()
    if chooise.lower() == '2':
        print("you enter the room and find absolutely nothing, its empty")
        print("you try the other room and see a sticky note on the fridge that has the code: 42450214 ")
        cockpit()
    else:
        print("pick a valid answer")
        _exit()

def cockpit():
    print()
    code = input("you enter the cockpit and go up to the console to input the code: ")
    if code.lower() == '42450214':
        print("you input the code and the ship asks you where to go")
        print("you reply Earth and it flies off to Earth")
        print("you arrive at the spot where you last were and get off the ship")
        print("but before you leave you take a picture of it to show your friends")
        print("the ship flies off to space")
        print()
        street3()
    if code.lower() == '69420':
        print("nice")
        exit

def noexit():
    print()
    print("you decide not to steal his keys")
    print("you hide and wait out the battle while eating your meal")
    print('you hear Bingus yell, "you will never get me!", and he runs off to his ship and leaves')
    print("the cops ask who you are and why you were with him")
    print("you explain who you are and your story")
    print("the cops decide to take you back home after they wipe your memory of this event")
    print("as they are about to do it a man throws a smoke bomb at them and yells for you to run")
    print("you run and catch up to the man")
    print("he tells you that his name is Herb and that you are in trouble")
    print("the man takes you back to Earth using his ship and gives you a GUN and tells you to use it to protect yourself against the cops")
    print("he waves goodbye and flies off")
    street3()

def street3():
    print()
    print("you arrive at the next street")
    print("you notice that you only have one more street after this one")
    print("as you drive down the street you see something in the distance")
    print("it looks very menacing")
    print("you try to turn around and drive away")
    print("as you drive away you start to slow down, the air grows cold and the Sun goes down")
    print("you've come to the conclusion that you are being haunted by none other than JOHN GHOST")
    print("you panic for a moment but then remember your past (summer of 2016) ")
    print("you remember that in the summer of 2016 all you watched were ghost hunting shows and (obviously) the 2016 reboot of Ghost Busters ")
    print("you slowly step out of the vehicle and pull out your Specter Detecter 36KXL Deluxe Edition©®™ ")
    print("as you pull out the Specter Detecter 36KXL Deluxe Edition©®™, the ghost kicks you and you fall over")
    ghost = input("what do you do next? try to get up and grab the Specter Detecter 36KXL Deluxe Edition©®™ or try to run back in the car (G/R) ")
    if ghost.lower() == 'g':
        print("you attempt to grab your Specter Detecter 36KXL Deluxe Edition©®™ and blast the ghost")
        print("you succeed and the ghost vanishes")
        Finalstreet()
    if ghost.lower() == 'r':
        print("you scramble to your car and think about what to do next")
        car()
    else:
        print("please choose a valid answer")
        street3()


def car():
    print()
    wtdn = input("what do you do? run over the ghost or just sit there (RO/S) ")
    if wtdn.lower() == 'ro':
        print("you run the ghost over and he dies")
        Finalstreet()
    if wtdn.lower() == 's':
        print("you just sit there thinking that ghosts aren't real")
        print("you never get to find out as a giant hammer from the sky crushes you and your car")
        print("    YOU ARE  ▄▄▄▄   ▄▄▄    ▄▄    ▄▄▄▄   ")
        print("             ▌   ▌  █     █  █   ▌   ▌  ")
        print("             ▌   ▌  █▀▀   █▀▀█   ▌   ▌  ")
        print("             ▌   ▌  █     █  █   ▌   ▌  ")
        print("             ▀▀▀▀   ▀▀▀   ▀  ▀   ▀▀▀▀   ")
        exit()

    
    

def Finalstreet():
    print("you arrive at the final street for the day but before you can do anything you see something in the distance")
    print()
    JOHNMILKMAN()

def Finalstreethammer():
    print("you look on in horror as THE PREVIOUS MILK MAN FROM EARLIER(the one with the hammer) marches towards you")
    print('he walks up and says, "Ive returned, time to die" ')
  
def Finalstreetdog():
    print("you look on in horror as THE DOGWOOD DOG runs towards you, he is NOT messing around this time")
    
def FinalstreetBingus():
    print("you look on in horror as BINGUS THE ALIEN walks towards you")
    print("you aren't sure you can get out of this one")
   
def Finalstreetcop():
    print("you look on in horror as THE SPACE POLICE drive towards you")
    print("you really hoped that the fake name would work")
    
def JOHNMILKMAN():
    print()
    print("you look on in confusion as an unknown figure walks up to you")
    print("you greets you and reveals himself to be none other than JOHN MILKMAN I and he is here to kill you after you took his title")
    print("you pulls out his Super Cow Sword in one hand and his Supreme Milk Cannon with the other")
    print("he fires rapidly at you but you duck behind the truck and dodge the attack")
    print("you sit and ponder what to do next")
    finalchoice = input("you look at what you have to fight back (cs/mc/run ")
    if finalchoice.lower() == 'cs':
        print("you pull out your Cow Sword and jump into action")
        jmcs()
    if finalchoice.lower() == 'mc':
        print("you roll from out of the cover and start blasting away")
        jmmc()
    if finalchoice.lower() == 'run':
        print("you run as fast as you can")
        end2()
    else:
        print("please choose a valid answer")
        print()
        JOHNMILKMAN()

def end2():
    print()
    print("you run and you run and run until you cannot run anymore")
    print("you collapse to the floor and see John Milkman waling towards you")
    print("you frowns at you and tells you that you are a disgrace to the John Milkman line")
    print("he pulls out his Supreme Milk Cannon and fires one last shot")
    print("    YOU ARE  ▄▄▄▄   ▄▄▄    ▄▄    ▄▄▄▄   ")
    print("             ▌   ▌  █     █  █   ▌   ▌  ")
    print("             ▌   ▌  █▀▀   █▀▀█   ▌   ▌  ")
    print("             ▌   ▌  █     █  █   ▌   ▌  ")
    print("             ▀▀▀▀   ▀▀▀   ▀  ▀   ▀▀▀▀   ")
    print()
    print('you got ending number 2 "Not The True Milk Man"')
    print()
    again = input("go again? (y/n) ")
    if again.lower() == 'y':
        Intro()
    else:
        exit()

def jmcs():
    print()
    print("you rush at John Milkman I and attempt to stab him, but he rolls out of the way and kicks you")
    print("you slowly get up and dodge an incomming blast from the Supreme Milk Cannon")
    print("you realize what you can do to defeat him")
    print("you run back to the first street and take that dudes insanely large hammer")
    print("you rush back to the scene and bonk John Milkman I in the head and he stumbles to the ground")
    print("when he gets up he forgets that he was John Milkman and now thinks he is John Man")
    print("he drops his weapons and walks away")
    print("you take the weapons and become JOHN MILKMAN V")
    print()
    global cop_1
    if cop_1.lower() == 'n':
        end3()
    else:
        end1()

def end1():
    print("you walk home and eat dinner with John Milkman Wife, John Milkman Child I, John Milkman Child II, and John Milkman Dog")
    print("you become a hero and everyone loves you")
    print("you get a statue made of and it was cool")
    print()
    print("THE END")
    print()
    print('you got ending number 1 "The True Milk Man"')
    print()
    again = input("go again? (y/n) ")
    if again.lower() == 'y':
        Intro()
    else:
        exit()

def end3():
    print()
    print("as you sit there in your victory pose a UFO lands and the SPACE POLICE come out")
    print("they say that you are under arrest and that you will be put in SPACE JAIL")
    print("just as you are about to be arrested Herb comes to save you")
    print("he shoots lasers and the cops run off")
    print("you thank him and ask him where the Space Cows are")
    print("he tells you they are in Canada and you both fly there")
    print()
    print("you make it there and find the one and only JOHN COW")
    print("he greets you and tells you that he was waiting for you")
    print("he gives you a Space Milktruck and he fly off to do galactic milk deliveries")
    print()
    print("THE END")
    print('you got ending number 3 "The Galactic Milk Man"')
    print()
    again = input("go again? (y/n) ")
    if again.lower() == 'y':
        Intro()
    else:
        exit()

def jmmc():
    print()
    print("you blast him in the face with a rotton milk ball")
    print("he dodges it and rushes at you")
    print("he collides with you and you collapse to the ground")
    print("as you sit there you realize something")
    print("you whip out your Cow Sword and slice away at a small tree")
    print("as soon as you do this a pack of DogWood Dogs come running in")
    print("you toss the tree at John Milkman I and the dogs chase him")
    print("he drops his weapons and runs away")
    print("you grab the weapons and declare yourself JOHN MILKMAN V")
    print()
    global cop_1
    if cop_1.lower() == 'n':
        end3()
    else:
        end1()

    

    


   

        

    
Intro()
