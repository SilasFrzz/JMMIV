//Made by CButtrs(Silas F) 2019-2021
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

void dead();
void end_3();
void end_1();
void street_4(char cop_1);
void car();
void street_3(int num);
void noexit();
void cockpit();
void exit_();
void rstrnt(char cop_1);
void mcds();
void alien(int num);
void broken_foot();
void fight_2(char weaponch1, int num);
void street_2();
void fight_1();
void street_1();



char weaponch1{};
char cop_1{};
int num{1};


	
	
	
	
	void dead(){
		
		cout<<endl<<"\nYOU HAVE DIED..."<<endl;
		
	}
	
	void end_3(){
	cout<<"\nAs you sit there in your victory pose a UFO lands and the SPACE POLICE come out"<<endl;
    cout<<"they say that you are under arrest and that you will be put in SPACE JAIL"<<endl;
    cout<<"just as you are about to be arrested Herb comes to save you"<<endl;
    cout<<"he shoots lasers and the cops run off"<<endl;
    cout<<"you thank him and ask him where the Space Cows are"<<endl;
    cout<<"he tells you they are in Canada and you both fly there"<<endl;
    cout<<"you make it there and find the one and only JOHN COW"<<endl;
    cout<<"he greets you and tells you that he was waiting for you"<<endl;
    cout<<"he gives you a Space Milktruck and he fly off to do galactic milk deliveries"<<endl;    
    cout<<"\nTHE END"<<endl;
    cout<<"\nyou got ending number 3""The Galactic Milk Man"""<<endl;

	}
	
	void end_1(){
	cout<<"\nyou walk home and eat dinner with John Milkman Wife, John Milkman Child I, John Milkman Child II, and John Milkman Dog"<<endl;
    cout<<"you become a hero and everyone loves you"<<endl;
	cout<<"you get a statue made of and it was cool"<<endl;
    cout<<"\nTHE END"<<endl;
    cout<<"\nYou got ending number 1 ""The True Milk Man"""<<endl;
	}
	
	
	
	
	void street_4(char cop_1){
		
		char jmm{};
		
		
	cout<<"\n====================================================="<<endl;
	cout<<"                       STREET IV                      "<<endl;
	cout<<"====================================================="<<endl;
	
	cout<<"you arrive at the final street for the day but before you can do anything you see something in the distance"<<endl;
	
	cout<<"you look on in confusion as an unknown figure walks up to you"<<endl;
	cout<<"he greets you and reveals himself to be none other than JOHN MILKMAN I and he is here to kill you after you took his title"<<endl;
	cout<<"he pulls out his Super Cow Sword in one hand and his Supreme Milk Cannon with the other"<<endl;
	cout<<"he fires rapidly at you but you duck behind the truck and dodge the attack"<<endl;
	cout<<"you sit and ponder what to do next"<<endl;
	cout<<"you look at what you have to fight back. Cow Sword, Milk Cannon, Run(C/M/R): ";
	
	do{
	cin>>jmm;
	
	if (jmm == 'c' || jmm == 'C'){
		cout<<"\nyou pull out your Cow Sword and jump into action"<<endl;
		cout<<"you rush at John Milkman I and attempt to stab him, but he rolls out of the way and kicks you"<<endl;
		cout<<"you slowly get up and dodge an incomming blast from the Supreme Milk Cannon"<<endl;
		cout<<"you realize what you can do to defeat him"<<endl;
		cout<<"you run back to the first street and take that dudes insanely large hammer"<<endl;
		cout<<"you rush back to the scene and bonk John Milkman I in the head and he stumbles to the ground"<<endl;
		cout<<"when he gets up he forgets that he was John Milkman and now thinks he is John Man"<<endl;
		cout<<"he drops his weapons and walks away"<<endl;
		cout<<"you take the weapons and become ==JOHN MILKMAN V=="<<endl;
		if (cop_1 == 'n' || cop_1 == 'N'){
			end_3();
			
		}else{
			end_1();
		}
		}
	
	if (jmm == 'm' || jmm == 'M'){
		cout<<"\nyou blast him in the face with a rotton milk ball"<<endl;
		cout<<"he dodges it and rushes at you"<<endl;
		cout<<"he collides with you and you collapse to the ground"<<endl;
		cout<<"as you sit there you realize something"<<endl;
		cout<<"you whip out your Cow Sword and slice away at a small tree"<<endl;
		cout<<"as soon as you do this a pack of DogWood Dogs come running in"<<endl;
		cout<<"you toss the tree at John Milkman I and the dogs chase him"<<endl;
		cout<<"he drops his weapons and runs away"<<endl;
		cout<<"you grab the weapons and declare yourself ==JOHN MILKMAN V=="<<endl;
		if (cop_1 == 'n' || cop_1 == 'N'){
			end_3();
			
		}else{
			end_1();
		}
		
		
		}
	
	if (jmm == 'r' || jmm == 'R'){
		cout<<"you run and you run and run until you cannot run anymore"<<endl;
		cout<<"you collapse to the floor and see John Milkman waling towards you"<<endl;
		cout<<"you frowns at you and tells you that you are a disgrace to the John Milkman line"<<endl;
		cout<<"he pulls out his Supreme Milk Cannon and fires one last shot"<<endl;
		cout<<"\n     YOU     ARE     DEAD"<<endl;
		cout<<"\nyou got ending number 2:"<<endl;
		cout<<"=========================="<<endl;
		cout<<"  NOT THE TRUE MILK-MAN   "<<endl;
		cout<<"=========================="<<endl;
		dead();
	}else{
		cout<<"\nPlease select a valid option"<<endl;
	}
	}while(true);
	}

	





void car(){
	string wtdn{};
	
	cout<<"what do you do? run over the ghost or just sit there (RO/S): ";
	do{
		getline(cin,wtdn);
		if (wtdn == "RO" || wtdn == "ro"){
			cout<<"\nyou run the ghost over and he dies"<<endl;
			street_4(cop_1);
		}if (wtdn == "s" || wtdn == "S"){
			cout<<"you just sit there thinking that ghosts aren't real"<<endl;
			cout<<"you never get to find out as a giant hammer from the sky crushes you and your car"<<endl;
			dead();
		}else{
			cout<<"\nPlease select a valid option"<<endl;
			wtdn.clear();
		}
		
		
		
	}while(true);
}



void street_3(int num){
	char ghost{};
	
	cout<<"\n====================================================="<<endl;
	cout<<"                       STREET III                      "<<endl;
	cout<<"====================================================="<<endl;
	
	cout<<"\nyou arrive at the next street"<<endl;
	cout<<"you notice that you only have one more street after this one"<<endl;
	cout<<"as you drive down the street you see something in the distance"<<endl;
	cout<<"it looks very menacing"<<endl;
	cout<<"you try to turn around and drive away"<<endl;
	cout<<"as you drive away you start to slow down, the air grows cold and the Sun goes down"<<endl;
	cout<<"you've come to the conclusion that you are being haunted by none other than JOHN GHOST"<<endl;
	cout<<"you panic for a moment but then remember your past (summer of 2016) "<<endl;
	cout<<"you remember that in the summer of 2016 all you watched were ghost hunting shows and (obviously) the 2016 reboot of Ghost Busters "<<endl;
	cout<<"you slowly step out of the vehicle and pull out your Specter Detecter 36KXL Deluxe Edition "<<endl;
	cout<<"as you pull out the Specter Detecter 36KXL Deluxe Edition, the ghost kicks you and you fall over"<<endl;
	cout<<"what do you do next? try to get up and grab the Specter Detecter 36KXL Deluxe Edition or try to run back in the car (G/R): "<<endl;
	do{	
	cin>>ghost;
	
	switch(ghost){
		
		case 'g':
		case 'G':
		cout<<"\nyou attempt to grab your Specter Detecter 36KXL Deluxe Edition and blast the ghost"<<endl;
		cout<<"you succeed and the ghost vanishes"<<endl;
		street_4(cop_1);
		
		case 'r':
		case 'R':
		cout<<"you scramble to your car and think about what to do next"<<endl;
		car();
		
		default:
		cout<<"\nPlease select a valid option"<<endl;
	}
	
	if (ghost == 'g' || ghost == 'G'){
		cout<<"you attempt to grab your Specter Detecter 36KXL Deluxe Edition and blast the ghost"<<endl;
		cout<<"you succeed and the ghost vanishes"<<endl;
		cout<<"You drive off to the final street."<<endl;
		++num;
		street_4(cop_1);
	}
	
	}while(num < 2);
	--num;
}


void noexit(){
	cout<<"\nyou decide not to steal his keys"<<endl;
	cout<<"you hide and wait out the battle while eating your meal"<<endl;
	cout<<"you hear Bingus yell,""you will never get me!"",and he runs off to his ship and leaves"<<endl;
	cout<<"the cops ask who you are and why you were with him"<<endl;
	cout<<"you explain who you are and your story"<<endl;
	cout<<"the cops decide to take you back home after they wipe your memory of this event"<<endl;
	cout<<"as they are about to do it a man throws a smoke bomb at them and yells for you to run"<<endl;
	cout<<"you run and catch up to the man"<<endl;
	cout<<"he tells you that his name is Herb and that you are in trouble"<<endl;
	cout<<"the man takes you back to Earth using his ship and gives you a ||TOY GUN|| and tells you to use it to protect yourself against the cops"<<endl;
	cout<<"he waves goodbye and flies off"<<endl;
    street_3(num);
}





void cockpit(){
	cout<<"you enter the cockpit and go up to the console to input the code."<<endl;
	cout<<"After inputing the code, the ship asks you where you want to go."<<endl;
	cout<<"you reply with Earth and it flies off to Earth"<<endl;
	cout<<"you arrive at the spot where you last were and get off the ship"<<endl;
	cout<<"Before the ship leaves, you snap a picture to show off on Twitter."<<endl;
	cout<<"The ship flies off and you go on to the next street"<<endl;
	street_3(num);
	
}




void exit_(){
	int choice{};
	
	cout<<"\nyou run out to the ship and insert the keys. the door opens and you rush inside"<<endl;
    cout<<"when you enter you make your way to the cockpit"<<endl;
    cout<<"you notice that to engage in flight you need to enter a code"<<endl;
	cout<<"you see 2 other rooms inside the ship, which will you search? (1/2) "<<endl;
	
	do{
		cin>>choice;
		switch(choice){
			case 1:
			cout<<"\nyou enter the room and see nothing of interest, it is just a kitchen"<<endl;
			cout<<"you are about to leave the room when you notice a sticky-note attached to the fridge"<<endl;
			cout<<"you see the code: 42450214 "<<endl;
			
			case 2:
			cout<<"you enter the room and find absolutely nothing, its empty"<<endl;
			cout<<"you try the other room and see a sticky note on the fridge that has the code: 42450214 "<<endl;
			
			
			default:
			cout<<"\nPlease select a valid option"<<endl;
		}
		
	}while(true);
}










void rstrnt(char cop_1){
	
	cout<<"\nYou sit down with your food and Bingus begins to tell you about Pluto II."<<endl;
	cout<<"In the midst of him telling you about this strange planet, he breifly mentions that he is a wanted criminal, but you don't really notice."<<endl;
	cout<<"While you are eating, you hear a loud sound...ITS THE COPS!"<<endl;
	cout<<"The cops barge in and instantly spot Bingus and begin firing at him with their Super Guns."<<endl;
	cout<<"Bingus draws his GUN III and begins to blast away(both are missing all of their shots)."<<endl;
	cout<<"\nYou look around and see Bingus's keys lying on the table, do you take them (Y/N): ";
	do{
	cin>>cop_1;
	
	switch(cop_1){
		case 'y':
		case 'Y':
		cout<<"\nYou decide to steal his keys and run for the exit."<<endl;
		exit_();
		
		case 'n':
		case 'N':
		cout<<"\nYou think that stealing is wrong and decide not to take the keys."<<endl;
		noexit();
		
		default:
		cout<<"\nPlease select a valid option"<<endl;
	}
	
	
	
	}while(true);
}




void mcds(){
	
	string order{};
		
	cout<<"\nYou arrive at MC Donalds."<<endl;
	cout<<"You enter the establishment and decide to order some food. What will you order? Your options are: Burger(B), Nugget(N), or Fries(F): ";
	do{
	getline(cin,order);
	
	if (order == "b" || order == "B"){
		cout<<"\nYou decide to order a burger. Your food is handed to you and you take it and sit down with Bingus."<<endl;
		rstrnt(cop_1);
	}if (order == "n" || order == "N"){
		cout<<"\nYou decide to order some chicken nuggets. Your food is handed to you and you take it and sit down with Bingus."<<endl;
		rstrnt(cop_1);
	}if (order == "f" || order == "F"){
		cout<<"\nYou decide to order just fries because you are on a diet and read on Facebook that MC Donalds french fries are very good for you."<<endl;
		cout<<"Your food is handed to you and you take it and sit down with Bingus."<<endl;
		rstrnt(cop_1);
	}if (order == "bk" || order == "BK"){
		cout<<"\nYou say that you prefer Burger King. The cashier hears this and pulls a comically large lever that drops you into the great void of space."<<endl;
		dead();
	}else{
		cout<<"\nPlease select a valid option"<<endl;
		order.clear();
	}
	
	}while(true);
}












void alien(int num){
	char space{};
	
	cout<<"\nyou look up and see a giant flying saucer!"<<endl;
    cout<<"the UFO flies around and then slowly lowers to the ground"<<endl;
    cout<<"the UFO lands and a door opens up"<<endl;
    cout<<"a small yellow man(about two feet tall) walks out and greets you"<<endl;
    cout<<"hello"", he says, ""I am Bingus from the lands of Pluto 2 in the Andromeda galaxy"<<endl;
    cout<<"you look at him closely and see that he is wearing a StarWars The Phantom Menace t-shirt and cargo shorts and is wearing flip-flops on his feet and a backwards cap"<<endl;
    cout<<"it is also important to note that he has purple sunglasses"<<endl;
    cout<<"do you want to go to space? its pretty cool"", he asks"<<endl;
    
	do{
		cout<<"\nDo you go with him? (y/n): ";
		cin>>space;
		
		switch (space){
			case 'y':
			case 'Y':
			cout<<"\nYou decide to go to space with him."<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\nYou arrive in space and Bingus takes you to the galactic MC Donalds."<<endl;
			mcds();
			
			case 'n':
			case 'N':
			cout<<"\nyou decline his offer possibly suspecting him to want to kidnap you like he did with the dog"<<endl;
			cout<<"you decide to get in your damaged truck and leave to the next street"<<endl;
			street_3(num);
			
			default:
			cout<<"\nPlease select a valid option"<<endl;
			
		}
	}while (num > 2);

}













void broken_foot(){
	cout<<"\nyou attempt to run but your foot is broken and you tumble to the ground"<<endl;
    cout<<"before you can be attacked by the dog a giant light beams down on the dog and it dissapears"<<endl;
	alien(num);
}




void fight_2(char weaponch1, int num){
	char dog{};
	char dman{};
	
	do{
	cin>>dog;
	
	
		if(dog == 'f' || dog == 'F'){
			cout<<"\nyou attack the dog"<<endl;
			cout<<"the dog bites you but you dodge and kick him"<<endl;
			cout<<"the dog understands that you are a superior being and runs away"<<endl;
		
		}if (dog == 'r' || dog == 'R'){
			if (weaponch1 == 'c' || weaponch1 == 'C')
				broken_foot();
				else{
				cout<<"\nYou attempt to run"<<endl;
				cout<<"you climb up the tree and wait for it to run...it starts to devour the tree"<<endl;
				cout<<"you hear a man shouting, what do you do? (call for help or wait) (C/W): ";				
				do{
				cin>>dman;
					
					switch(dman){
						case 'c':
						case 'C':
						cout<<"\nyou hear a man shouting from a distance....it is your best friend John Scientist"<<endl;
						cout<<"John identifies the dog as a dogwood dog who will devour humans and trees for food"<<endl;
						cout<<" he tosses you a ""dog repelant"" and tells you to spray it on yourself"<<endl;
						cout<<"you spray it and the dog runs off"<<endl;
						cout<<"back to work"<<endl;
						street_3(num);
						
						case 'w':
						case 'W':
						cout<<"\nyou decide to wait...suddenly the tree begins to fall...you fall on the dog and it flies away in fear"<<endl;
						cout<<"back to work"<<endl;
						street_3(num);
						
						
						default:
						cout<<"\nPlease select a valid option"<<endl;
					}
					
					
				}while(num < 2);
			

			
	}	
	}
	}while(num < 2);
}











void street_2(){
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"====================================================="<<endl;
	cout<<"                       STREET II                      "<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\nyou arrive at ""Street 2"" and begin to deliver"<<endl;
	cout<<"you spot a dog running towards you"<<endl;
	cout<<"the dog rips open your truck door and you climb out"<<endl;
	cout<<"\nwhat will you do? run or fight? (R/F): ";
	fight_2(weaponch1, num);
}





void fight_1(){
	
	
	do{
	
	
	
	cout<<"What weapon will you use? (Milk Cannon or Cow Sword)(M/C): ";
	cin>>weaponch1;
	
	
		switch(weaponch1){
			
			case 'M':
			case 'm':
			cout<<"\nyou pull out the Milk Cannon and fire at the man"<<endl;
			cout<<"he dodges the first shot and charges at you"<<endl;
			cout<<"You manage to fire another one and it hits him in the chest and sends him flying backwards"<<endl;
			cout<<"you see this as a successful delivery"<<endl;
			++num;
			break;
			
			case 'C':
			case 'c':
			cout<<"\nyou unsheath your sword and strike him in the shin"<<endl;
			cout<<"you quickly grabs his hammer and slams you in the left foor"<<endl;//foot broke
			cout<<"you have broken your foot"<<endl;
			cout<<"you manage to shove a carton of milk in his mouth and then run away"<<endl;
			cout<<"another successful delivery"<<endl;
			++num;
			break;
			
			default:
			cout<<"\nPlease select a valid option"<<endl;
			
		}
	}while (num < 2);
	--num;
	street_2();
}











void street_1(){
	cout<<"====================================================="<<endl;
	cout<<"                       STREET I                      "<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\nYou arrive at ""Street 1"" and begin to go down the road"<<endl;
	cout<<"you deliver milk to 4 of the 5 houses but upon knocking on the door of the fifth house a man with a large hammer comes out"<<endl;
	cout<<"he tells you that you took his place as milkman and that he seeks revenge"<<endl;
	cout<<"you cant run fast enough to get away"<<endl;
	cout<<endl;
	cout<<"you decide to fight the man"<<endl;
	fight_1();
		
}







int main(){
	
	cout<<"Your name is John Milkman and you must deliver milk to the whole city"<<endl;
	cout<<"\nwelcome to..."<<endl;
	cout<<endl;
	cout<<"\n=============================================================="<<endl;
	cout<<" JOHN MILKMAN IV(he had a head injury and forgot the other 3)"<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"                      -A game by Silas F-                     "<<endl;
	cout<<"=============================================================="<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	street_1();
	
	
	
	return 0;
}