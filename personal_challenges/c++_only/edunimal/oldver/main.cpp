#include <iostream>
#include <string>
#include <limits>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void titledunimal(){
	string title="EDUnimals";
	int console_width=40;
	int lenT=title.length();
//	for(int i=0;i<0;i++) cout<<" ";
	cout<<setw((console_width/2)+lenT/2)<<left<<title<<endl;
}

void teleport(){
	for(int g=0;g<12;g++) cout<<endl;
	for(int i=0;i<66;i++) cout<<" ";	
	cout<<"               *********"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"           ***           ***"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"        **                  **"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"       *       **********     *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"      *      *           *     *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"     *      *    ****     *     *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"    *      *    *    *     *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"    *     *    *      *     *"<<endl;
	for(int i=0;i<67;i++) cout<<" ";
	cout<<"Teleporting to the world of EDUnimals..."<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"    *     *    *       *     *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"    *      *     **   *      *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"     *      *        *      *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"      *      *      *      *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"       *      ******      *"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"        **              **"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"          ***        ***"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
	cout<<"             *********"<<endl;
}

void eduDog(){
	string head="  ___";
	string face="(|. .|)";
	string nose=" ((Y))";
	string feet=" ()_()_/";
	int lenH=head.length();
	int lenF=face.length();
	int lenN=nose.length();
	int lenFT=feet.length();
    int console_width = 40;
	for(int i=0;i<80;i++) cout<<" ";
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
	for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenH/2)<<left<<head<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenN/2)<<left<<nose<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

void eduCat(){
    string head=" ^___^";
    string face="(='x'=)";
    string feet=" ()_()_/";
	int console_width=40;
	int lenH=head.length();
	int lenF=face.length();
	int lenFT=feet.length();
	for(int i=0;i<80;i++) cout<<" ";	
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenH/2)<<left<<head<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

void eduBird(){
	string head=" ___";
	string face="('v')";
	string body="((_))";
	string feet=" ^ ^";
    int console_width=40;
    int lenH=head.length();
    int lenF=face.length();
    int lenB=body.length();
    int lenFT=feet.length();
	for(int i=0;i<80;i++) cout<<" ";
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
    for(int i=0;i<80;i++) cout<<" ";
	cout<<setw((console_width/2)+lenH/2)<<left<<head<<endl;
	for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenB/2)<<left<<body<<endl;
    for(int i=0;i<80;i++) cout<<" ";
	cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

void eduBunny(){
	string ear="() ()";
	string face="('x')";
	string feet="c()()";
	int console_width=40;
	int lenE=ear.length();
	int lenF=face.length();
	int lenFT=feet.length();
    for(int i=0;i<80;i++) cout<<" ";
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
    for(int i=0;i<80;i++) cout<<" ";
	cout<<setw((console_width/2)+lenE/2)<<left<<ear<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

void eduMouse(){
	string ear="(o)_(o)";
	string face="(='x'=)";
	string feet=" () ()";
    int console_width=40;
    int lenE=ear.length();
    int lenF=face.length();
    int lenFT=feet.length();
	for(int i=0;i<80;i++) cout<<" ";
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenE/2)<<left<<ear<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

void eduPig(){
	string ear=" ^---^";
	string face="( 'o')";
	string feet="( uu )";
	int console_width=40;
	int lenE=ear.length();
	int lenF=face.length();
	int lenFT=feet.length();
    for(int i=0;i<80;i++) cout<<" ";
    titledunimal();
    for(int g=0;g<17;g++) cout<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenE/2)<<left<<ear<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenF/2)<<left<<face<<endl;
    for(int i=0;i<80;i++) cout<<" ";
    cout<<setw((console_width/2)+lenFT/2)<<left<<feet<<"\n"<<endl;
}

//void eduFish(){
//    string bigB=" O";
//    string smallB=" o ___";
//    string body=" '(')=)3";
//    string ground="^^^^^^^^^";
//	int console_width=40;
//	int lenBB=bigB.length();
//	int lenSB=smallB.length();
//	int lenB=body.length();
//	int lenG=ground.length();
//	for(int i=0;i<80;i++) cout<<" ";
//    titledunimal();
//    for(int g=0;g<17;g++) cout<<endl;
//    for(int i=0;i<80;i++) cout<<" ";
//    cout<<setw((console_width/2)+lenBB/2)<<left<<bigB<<endl;
//    for(int i=0;i<80;i++) cout<<" ";
//    cout<<setw((console_width/2)+lenSB/2)<<left<<smallB<<endl;
//    for(int i=0;i<80;i++) cout<<" ";
//    cout<<setw((console_width/2)+lenB/2)<<left<<body<<endl;
//	for(int i=0;i<80;i++) cout<<" ";
//    cout<<setw((console_width/2)+lenG/2)<<left<<ground<<endl;
//}

int main()
{
    system ("COLOR F3");
    int choiceAnimal;
    string instruct="INSTRUCTIONS: Press enter to continue or to skip a question.";
    string answer;
    string eduname;
    string username;
    string question;
    string ans;
    string wholeans;
	for(int i=0;i<57;i++) cout<<" ";
    int console_width = 40;
    int len=instruct.length();
    int lenN=eduname.length();
    cout<<setw((console_width/2)+len/2)<<left<<instruct<<endl;
    cin.ignore();
	system("CLS");
    for(int i=0;i<50;i++) cout<<" ";
    cout<<"Welcome to the world of EDUnimals where your science problems can be solved."<<endl;
    cin.ignore();
	teleport();
	do{
    cin.ignore();
    system("CLS");
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOOOOOOO       OOO     OOO                  OOOO                                     OOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOOOOOOOO      OOO     OOO                  OOOO                                     OOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOO         OOO     OO     OOO     OOO                  OOOO                                     OOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOO         OOO     OOO    OOO     OOO    OOO                  OOO                               OOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOO     OOO    OOO     OOO    OOOOOOOOOO    OOOO   OOOOOOOOOOOOOOOOO    OOOOOOOOO    OOOO   OOOOOOOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOO     OOO    OOO     OOO    OOOOOOOOOO    OOOO   OOOOOOOOOOOOOOOOO    OOOOOOOOO    OOOO   OO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOO         OOO     OOO    OOO     OOO    OOO    OOO    OOOO   OOO    OOO    OOO    OOO   OOO    OOOO   OOOOOOOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOO         OOO     OO     OOO     OOO    OOO    OOO    OOOO   OOO    OOO    OOO    OOOOOOOOO    OOOO   OOOOOOOOO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOOOOOOOO       OOOOOOOOO     OOO    OOO    OOOO   OOO    OOO    OOO    OOOOOOOOO    OOOO          OO"<<endl;
    for(int i=0;i<30;i++) cout<<" ";
    cout<<"OOOOOOOO    OOOOOOOO         OOOOOOO      OOO    OOO    OOOO   OOO    OOO    OOO    OOO   OOO    OOOO   OOOOOOOOO\n"<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<"  ___                ___                            "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<"(|. .|)    ^___^    ('v')  () ()  (o)_(o)   ^---^   "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<" ((Y))    (='x'=)   ((_))  ('x')  (='x'=)  ( 'o')   "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<" ()_()_/   ()_()_/   ^ ^   c()()   () ()   ( uu )  \n"<<endl;
    cin.ignore();
    //Choosing EDU-Animal part
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"Enter the number of your chosen EDU-Animal:\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"1.EDU-Dog (Respiratory and Circulatory System)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"2.EDU-Cat (Biodiversity)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"3.EDU-Bird (Volcanoes)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"4.EDU-Bunny (Climate)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"5.EDU-Mouse (Stars and Constellations)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cout<<"6.EDU-Pig (Work, Power and Energy)\n"<<endl;
    for(int i=0;i<62;i++) cout<<" ";
    cin>>choiceAnimal;
    system("CLS");
    switch (choiceAnimal)
    {
    case 1:
        eduDog();
        cin.ignore();
        for(int i=0;i<48;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Dog and I know a lot about respiratory and circulatory system."<<endl;
        cin.ignore();
        system("CLS");
        eduDog();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now EDU-Master, please give me a name."<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduDog();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Arf! Arf! "<<eduname<<" is a great name."<<endl;
        cin.ignore();
        system("CLS");
        eduDog();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now let's move on to the teaching part."<<endl;
        cin.ignore();
        system("CLS");
        eduDog();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"For starters, What is your name?"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduDog();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Good day! "<<username<<"! I'll be your EDU-pet."<<endl;
        cin.ignore();
        do{        	
        system("CLS");
        eduDog();
        for(int i=0;i<57;i++) cout<<" ";
        cout<<"Please say the word/s you want to know something about ."<<endl;
        for(int i=0;i<57;i++) cout<<" ";
        getline(cin,question);
         if(question=="Trachea" || question=="trachea"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<50;i++) cout<<" ";
        	cout<<"Trachea is the empty tube that serves as passageway of air into the lungs."<<endl;
		}
		else if(question=="Bronchi" || question=="bronchi"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<50;i++) cout<<" ";
        	cout<<"Bronchi are the two branching tubes that connect the trachea to the lungs."<<endl;
    	}
    	else if(question=="Bronchioles" || question=="bronchioles"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<58;i++) cout<<" ";
        	cout<<"Bronchioles are the hairlike tubes that connect to the alveoli."<<endl;
    	}
    	else if(question=="Alveoli" || question=="alveoli"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"Alveoli are the airsacs that allow gas exchange in the lungs."<<endl;
    	}
    	else if(question=="Inhaling" || question=="inhaling"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Inhaling moves the diaphragm down and expands the chest cavity and the diaphragm muscle contracts. Simultaneously, the ribs move up and increase the size of the chest cavity."<<endl;
    	}
    	else if(question=="Exhaling" || question=="exhaling"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Exhaling makes the diaphragm and ribs return to their original place and the diaphragm muscle relaxes. The chest cavity returns to its original size."<<endl;
    	}
    	else if(question=="Heart" || question=="heart"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Heart pumps the blood throughout the body.The heart is a hollow muscular organ, about the size of your fist, which is located in the center of your chest between the lungs.It has four chambers with specific tasks to do: two ventricles and two atria."<<endl; 
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"The atria are the receiving chambers of the heart, accepting blood from the body (right atrium) and from the lungs (left atrium).The ventricles are the pumping chambers, moving blood to the lungs (right ventricle) and into the body (left ventricle). The upper chamber is the atrium that receives blood coming in from the veins. The lower chamber is the ventricle that forces the blood out into the arteries." <<endl;
		}
    	else if(question=="Blood Vessel" || question=="blood vessel" || question=="Blood vessel"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<61;i++) cout<<" ";
        	cout<<"Blood vessel carries the blood throughout the body."<<endl;
    	}
    	else if(question=="Arteries" || question=="arteries"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Arteries carry oxygenated blood away from the heart to the cells, tissues and organs of the body."<<endl;
    	}
    	else if(question=="Veins" || question=="veins"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<62;i++) cout<<" ";
        	cout<<"Veins carry deoxygenated blood to the heart."<<endl;
    	}
    	else if(question=="Capillaries" || question=="capillaries"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Capillaries are the smallest blood vessels in the body, connecting the smallest arteries to the smallest veins. The actual site where gases and nutrients are exchanged."<<endl;
    	}
    	else if(question=="Blood" || question=="blood"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"Blood carries the materials throughout the body."<<endl;
    	}
    	else if(question=="Pulmonary Circulation" || question=="pulmonary circulation" || question=="Pulmonary circulation"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<38;i++) cout<<" ";
        	cout<<"Pulmonary Circulation is the movement of blood from the heart, to the lungs, and back to the heart."<<endl;
    	}
    	else if(question=="Coronary Circulation" || question=="coronary circulation" || question=="Coronary circulation"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<46;i++) cout<<" ";
        	cout<<"Coronary Circulation is the movement of blood through the tissues of the heart."<<endl;
    	}
    	else if(question=="Systemic Circulation" || question=="systemic circulation" || question=="Systemic circulation"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<33;i++) cout<<" ";
        	cout<<"Systemic Circulation is the movement of blood from the heart to the rest of the body, excluding the lungs."<<endl;
    	}
    	else if(question=="Valve" || question=="valve"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<20;i++) cout<<" ";
        	cout<<"The valves are like one-way doors that keep the blood moving in only one direction. Valves control movement of blood into the heart chambers and out to the aorta and the pulmonary artery."<<endl;
    	}
    	else if(question=="Heart Rate" || question=="heart rate" || question=="Heart rate"){
        	system("CLS");
        	eduDog();
        	for(int i=0;i<35;i++) cout<<" ";
        	cout<<"Your heart rate or pulse is the number of times your heart beats in a minute (BPM or beats per minute)."<<endl;
    	}else{
    		system("CLS");
        	eduDog();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		} 	
    cin.ignore();
    system("CLS");
    eduDog();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
	break;
    case 2:
        eduCat();
        cin.ignore();
        for(int i=0;i<64;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Cat and biodersty is my thing."<<endl;
        cin.ignore();
        system("CLS");
        eduCat();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Please give me a name, EDU-Master"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduCat();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Meow~~ "<<eduname<<" is a great name."<<endl;
        cin.ignore();
        system("CLS");
        eduCat();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now let's go to the tutoring."<<endl;
        cin.ignore();
        system("CLS");
        eduCat();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"By the way, What is your name?"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduCat();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Nyaaa! "<<username<<"! I'll be your EDU-pet."<<endl;
        cin.ignore();
        do{
        system("CLS");
        eduCat();
        for(int i=0;i<64;i++) cout<<" ";	
		cout<<"Please ask me anything about biodiversity."<<endl;
        for(int i=0;i<64;i++) cout<<" ";
        getline(cin,question);
        if(question=="Species Diversity" || question=="species diversity" || question=="Species diversity"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<16;i++) cout<<" ";
        	cout<<"Species Diversity pertains to the variety, as well as relative abundance, of species, as well as relative abundance, of species within a region."<<endl;
		}
		else if(question=="Genetic Diversity" || question=="genetic diversity" || question=="Genetic diversity"){
			system("CLS");
        	eduCat();
			for(int i=0;i<20;i++) cout<<" ";
        	cout<<"Genetic Diversity pertains to the variation of genes within a species, the difference in the genetic makeup (genotype) between distinct species, or the variability in the genetic makeup of a given species. Genetic diversity exists as a result of the variations in the sequence of the four base-pairs which are the components of nucleic acids."<<endl;
		}
		else if(question=="Ecosystem Diversity" || question=="ecosystem diversity" || question=="Ecosystem diversity"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Ecosystem Diversity is the variation among groups of organisms in different physical settings, species composition, physical conditions, physical structures and activities. Different settings favor different communities of species. The terrestrial environment has been classified into a number of ecosystems: desert, tropical rain forest, grassland, while the aquatic environment is classified into wetlands, mangroves, coral reefs, etc."<<endl;
		}
		else if(question=="Evolution" || question=="evolution"){
			system("CLS");
			eduCat ();
			for(int i=0;i<11;i++) cout<<" ";	
			cout<<"Evolution refers to some sort of development. In a biological context, evolution can be construed as the sequence of events depicting the gradual progression of changes in the genetic composition of a biological population over successive generations. Or, it may also pertain to the genetic change itself over time. Evolution may also pertain to the change in the genetic composition of biological populations over successive generations."<<endl;
		}
		else if(question=="Biodiversity Loss" || question=="biodiversity loss" || question=="Biodiversity loss"){
        	system("CLS");
        	eduCat();
			for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Biodiversity Loss is one of the pressing issues of our time and is actually a worldwide concern. Scientists can determine that biodiversity is being lost if there are extinction of species, loss of specific habitats, and a decrease of loss in the genetic variations within species continue to occur."<<endl;
		}
		else if(question=="Extinction" || question=="extinction"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<19;i++) cout<<" ";
        	cout<<"Extinction means that the last individual belonging to a particular species is gone forever. Extinction happens when there is the specific truth that no single individual of that species is left to reproduce."<<endl;
			cout<<"\n";
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"Natural Causes of Extinction"<<endl;
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"*Extreme Heating and Cooling of the Earth"<<endl;
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"*Changes in Landscape"<<endl;
			for(int i=0;i<20;i++) cout<<" ";		
			cout<<"*Changes in Landscape"<<endl;
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"*Disease/Epidemic"<<endl;
			for(int i=0;i<20;i++) cout<<" ";
			cout<<"*Meteoric Impact/Cosmic Radiation"<<endl;
		}
		else if(question=="Habitat" || question=="habitat"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<61;i++) cout<<" ";
        	cout<<"Habitat is the place where the organisms live."<<endl;
        }
        else if(question=="Loss of Specific Habitats" || question=="loss of specific habitats" || question=="Loss of specific habitats"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"All species have specific basic needs. It provides the necessary elements of life- food, shelter, etc. To have a better estimate of species diversity, scientists take into account the size of the area and the number of species a habitat can accommodate. Records show that about 17 million hectares of tropical forests are being cleared annually and 50% of the virgin forest have been lost to mining and logging. With this rate, it is estimated that 10% to 25% of the tropical species will be extinct at the end of the 21st century. Substantial portions of wetlands were lost in various parts of the world. Wetlands are habitats of waterfowls and are valuable breeding and nursery grounds of about 90% of marine species. As wetlands disappear, several different kinds of organisms are affected."<<endl;
        }
        else if(question=="Loss of Genetic Variations Within Species" || question=="loss of genetic variations within species" || question=="Loss of genetic variations within species"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Genetic variaion plays an important role in the survival and ability of the species to adapt to changing environments. The higher the genetic variation is among the species, the greater the chance of the species to survive. Species with less genetic variations are at a greater risk of being eliminated because of their inability to cope with the changing environment."<<endl;
        }
        else if(question=="Man-made Causes of Extinction" || question=="man-made causes of extinction" || question=="Man-made causes of extinction"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"Man-made Causes of Extinction"<<endl;
        	cout<<"\n";
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"*Habitat Destruction"<<endl;
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"*Commercial Hunting/Harvesting and Hunting for Sports"<<endl;
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"*Introduction of Alien, Exotic, or Non-native Species"<<endl;
        	for(int i=0;i<60;i++) cout<<" ";
        	cout<<"*Pollution Caused by Human"<<endl;
        }
//        else if(question=="Impacts of Extinction" || question=="impacts of extinction" || question=="Impacts of extinction"){
//        	system("CLS");
//        	eduCat();
//        	for(int i=0;i<11;i++) cout<<" ";
//        	cout<<"Impacts of Extinction"<<endl;
        
        else if(question=="Biodiversity" || question=="biodiversity"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Biodiversity is the basic component of all ecosystems in the world. It fundamentally provides people of their basic needs in order to live. Biodiversity also provides a wide range of valuable services that promote the well being of people."<<endl;
        }
        else if(question=="Limiting Factors" || question=="limiting factors" || question=="Limiting factors"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Anything that limits the size of a population like certain environmental conditions are called limiting factors. Limiting factors keep a population from increasing in size and help balance an ecosystem."<<endl;
        }
        else if(question=="Carrying Capacity" || question=="carrying capacity" || question=="Carrying capacity"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"The maximum population size an environment can support is called its carrying capacity. The carrying capacity is affected by changes in the environment."<<endl;
        }
        else if(question=="Endangered Species" || question=="endangered species" || question=="Endangered species"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"When a species population becomes so low that only a few remain, the species is considered endangered and will possibly become extinct."<<endl;
        }
        else if(question=="Threatened Species" || question=="threatened species" || question=="Threatened species"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<34;i++) cout<<" ";
        	cout<<"There is a particular species that declines so fast that it becomes endangered and is said to be threatened."<<endl;
        }
        else if(question=="Population" || question=="population"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<40;i++) cout<<" ";
        	cout <<"A population is a group of living things within a certain area that are all of the same species." <<endl;
        }
        else if(question=="Adaptation" || question=="adaptation"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Adaptation is the ability of the organisms to respons to changes in the environment. For the organisms to survive, they must have structure, physiology, and behavior that would enable them to meet the requirements of the new environment."<<endl;
        }
        else if(question=="Structural Adaptation" || question=="structural adaptation" || question=="Structural adaptation"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Structural Adaptation is the ability of the organisms to respons to changes in the environment. For the organisms to survive, they must have structure, physiology, and behavior that would enable them to meet the requirements of the new environment."<<endl;
        }
        else if(question=="Physiological Adaptation" || question=="physiological adaptation" || question=="Physiological adaptation"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Physiological Adaptation is any function which an organism exhibits as a direct response to an environmental change. Humans perspire when the environmental temperature gets higher than usual. Sweating is an evaporative cooling process. Camels can travel long distances in the desert even in the absence of water because certain metabolic process changes the fats in their hump into water. Running can cause an increase in heartbeat and breathing rates. The skin darkens when we swim and do recreational activities in places exposed to the sun. The darkening of the skin protects the underlying tissues from dehydration."<<endl; 
        }
        else if(question=="Behavioral Adaptation" || question=="behavioral adaptation" || question=="Behavioral adaptation"){
        	system("CLS");
        	eduCat();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Behavioral Adaptation is any activity that is instinctive or, which an organism has learned of has become conditioned of doing, for protection to the environmental change. The opossum plays dead when it spots a predator, birds migrate to other places dusing winter season to look for a place with better climate, to hibernate during winter season and to estivate during summer by large animals."<<endl;
        }else{
        	system("CLS");
        	eduCat();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		}
    cin.ignore();
    system("CLS");
    eduCat();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
    break;
    case 3:
        eduBird();
        cin.ignore();
        for(int i=0;i<61;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Bird and volcanoes are my favorite."<<endl;
        cin.ignore();
        system("CLS");
        eduBird();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"EDU-Master, please give me a name."<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduBird();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Chirp! Chirp! "<<eduname<<" is a great name."<<endl;
        cin.ignore();
        system("CLS");
        eduBird();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now let's move on to the teaching part."<<endl;
        cin.ignore();
        system("CLS");
        eduBird();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Anyway, What is your name?"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduBird();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Hey! EDU-Master "<<username<<"! I'll be your EDU-pet."<<endl;
        cin.ignore();
        do{
        system("CLS");
        eduBird();
        for(int i=0;i<57;i++) cout<<" ";
        cout<<"Please say the word that you to know about volcanoes."<<endl;
        for(int i=0;i<57;i++) cout<<" ";
        getline(cin,question);
        if(question=="Volcano" || question=="volcano" || question=="Volcanoes" || question=="volcanoes"){
        	system("CLS");
        	eduBird();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Volcano is a rupture in the crust of a planetary-mass object, such as Earth, that allows hot lava, volcanic ash, and gases to escape from a magma chamber below the surface."<<endl;
        }
        else if(question=="Active Volcano" || question=="active volcano" || question=="Active volcano" || question=="Active Volcanoes" || question=="active volcanoes" || question=="Active volcanoes"){
        	system("CLS");
        	eduBird();
        	for(int i=0;i<40;i++) cout<<" ";
        	cout<<"Active Volcano is a volcano that has had at least one eruption during the past 10,000 years."<<endl;
        }
        else if(question=="Inactive Volcano" || question=="inactive volcano" || question=="Inactive volcano" || question=="Inactive Volcanoes" || question=="inactive volcanoes" || question=="Inactive volcanoes"){
        	system("CLS");
        	eduBird();
        	for(int i=0;i<40;i++) cout<<" ";
        	cout<<"Inactive Volcano is one that could erupt but has not erupted for more than 10,000 years."<<endl;
        }
        else if(question=="Types of Volcanoes" || question=="types of volcanoes" ||question=="Types of volcanoes"){
        	system("CLS");
        	eduBird();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Shield Volcanoes are characterized by broad, gently sloping flanks and a dome shape that resembles an ancient warrior's shield. These volcanoes are built almost entirely of layers of solidified basaltic lava flows. "<<endl;
			for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Composite Volcanoes are built from more than one type of material. Composite volcanoes are characterized by alternating layers of material such as ash and cinders, blocks and lava deposited by past eruptions."<<endl;
			for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Cinder Cone Volcanoes are the simplest type of volcano. They occur when particles and blobs of lava are ejected from a volcanic vent. The lava is blown violently into the air, and the pieces rain down around the vent."<<endl;		
		}
		else if(question=="PHIVOLCS" || question=="phivolcs"){
			system("CLS");
			eduBird();
			for(int i=0;i<52;i++) cout<<" ";	
			cout<<"PHIVOLCS means Philippine Institute of Volcanology and Seismology."<<endl;
		}

		else if(question=="Number of Volcanoes in the Philippines" || question=="number of volcanoes in the philippnes" || question=="Number of volcanoes in the philippines"){
			system("CLS");
			eduBird();
			for(int i=0;i<20;i++) cout<<" ";	
			cout<<"According to PHIVOLCS,our country has more than a hundred volcanoes as of 2013. Twenty-three are active while the rest are inactive." <<endl;
		}

		else if(question=="Crater" || question=="crater"){
			system("CLS");
			eduBird();
			for(int i=0;i<20;i++) cout<<" ";	
			cout<<"A crater is a funnel-shaped opening at the top of a volcano." <<endl; 
}

else if(question=="Caldera" || question=="caldera"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"A caldera is formed when a part of the wall collapses following an explosive eruption." <<endl;
}

else if(question=="Viscosity" || question=="viscosity"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Viscosity is the property of the materials resistance to flow. It is also described as the liquids thickness and stickiness. The more viscous and thicker the material is, the greater is its resistance to flow." <<endl;

}

else if(question=="Phreatic" || question=="phreatic"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Also known as hydrothermal is a stream-driven eruption as the hot rocks come in contact with water. It is short?lived, characterized by ash columns but may be an onset of a larger eruption." <<endl;
}

else if(question=="Phreatomagmatic" || question=="phreatomagmatic"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It is a violent eruption due to the contact between water and magma. As a result, a large column of very fine ash and high-speed and sideway emission of pyroclastics called base surges are observed." <<endl;
}

else if(question=="Strombolian" || question=="strombolian"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It is a periodic weak to violent eruption characterized by fountain lava, just like the Irazu Volcano in Costa Rica." <<endl;
}

else if(question=="Vulcanian" || question=="vulcanian"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It is characterized by tall eruption columns that reach up to 20 km high with pyroclastic flow and ashfall tephra." <<endl;
}

else if(question=="Plinian" || question=="plinian"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It is an excessively explosive type of eruption of gas and pyroclastics." <<endl;
}


else if(question=="Geothermal Energy" || question=="geothermal energy"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"The heat from the Earths interior is a source of energy called geothermal energy. The heat of the Earth warms up water which is trapped in rock formations beneath its surface. Geothermal energy is generated in two ways: geothermal power plants and geothermal heat pumps" <<endl; 
}

else if(question=="Geothermal Power Plants" || question=="geothermal power plants" || question=="Geothermal power plants"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"In geothermal power plants, the heat from deep inside the Earth is used to produce steam to generate electricity." <<endl;
}

else if(question=="Geothermal Heat Pumps" || question=="geothermal heat pumps" || question=="Geothermal heat pump"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"In geothermal heat pumps it uses the heat coming from close to the Earths surface to heat water or provide heat for buildings." <<endl;
}

else if(question=="Positive Effects Of Volcanic Eruption" || question=="positive effects of volcanic eruption" || question=="Positive effects of volcanic eruption"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It cools down the Earth's surface. It can fertilize the soil." <<endl;
}

else if(question=="Negative Effects Of Volcanic Eruption" || question=="negative effects of volcanic eruption" || question=="Negative effects of volcanic eruption"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"It can cause loss of lives and properties. As the lava flows or pyroclastic materials are ejected in the air, they can destroy anything in their way." <<endl;
}

else if(question=="Ash" || question=="ash"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Ash are fragments of rocks; fine-grained lava." <<endl;
}

else if(question=="Lava" || question=="lava"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Lava is a magma that has been ejected out of a volcano." <<endl;
}

else if(question=="Magma" || question=="magma"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Magma is a molten rock inside the Earth." <<endl;
}

else if(question=="Silica" || question=="silica"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Silica is a compound of silicon (SiO2)." <<endl;
}

else if(question=="Slope" || question=="slope"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Slope is a degree of slant; inclination." <<endl;
}
else if(question=="Summit" || question=="summit"){
	system("CLS");
	eduBird();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Summit is the peak or highest point of a volcano." <<endl;
}else{
			system("CLS");
        	eduBird();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		}
	cin.ignore();
    system("CLS");
    eduBird();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
	break;
    case 4:
        eduBunny();
        cin.ignore();
        for(int i=0;i<58;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Bunny and I love things about climate."<<endl;
        cin.ignore();
        system("CLS");
        eduBunny();
        for(int i=0;i<60;i++) cout<<" ";
        cout<<"I need a name, EDU-Master, please give me one."<<endl;
        for(int i=0;i<60;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduBunny();
        for(int i=0;i<60;i++) cout<<" ";
        cout<<"Munch! Munch! Munch! "<<eduname<<" is a great name."<<endl;
        cin.ignore();
        system("CLS");
        eduBunny();
        for(int i=0;i<60;i++) cout<<" ";
        cout<<"EDU-Master, It's so cold! Lemme teach you about climate."<<endl;
        cin.ignore();
        system("CLS");
        eduBunny();
        for(int i=0;i<73;i++) cout<<" ";
        cout<<"What is your name?"<<endl;
        for(int i=0;i<73;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduBunny();
        for(int i=0;i<68;i++) cout<<" ";
        cout<<"Good Day! "<<username<<"! I'll be your EDU-pet."<<endl;
        cin.ignore();
        do{
        system("CLS");
        eduBunny();
		for(int i=0;i<55;i++) cout<<" ";
        cout<<"Please say the word you want to know something about climate."<<endl;
        for(int i=0;i<55;i++) cout<<" ";
        getline(cin,question);
    	
		if(question=="Topography" || question=="topography"){
			system("CLS");
			eduBunny();
			for(int i=0;i<20;i++) cout<<" ";	
			cout<<"Topography is another factor that affects the climate of a certain place. Topography is the surface features of an area." <<endl;
		}
else if(question=="Windward Side" || question=="windward side"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"The area in which the wind blows is called the windward side. Here, the wind is blocked by the mountain, forcing it to move upward. As it moves up, the water vapor condenses and forms clouds. This will result in precipitation on the windward side. "<<endl;
}

else if(question=="Leeward Side" || question=="leeward side"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"The air moves down towards the opposite region called leeward side. The cold air mass starts to absorb heat and becomes warm and dry. As a result, the area near the leeward side becomes dry and has less precipitation. The dry region on the leeward side is called rain shadow. Vegetation in this region includes desert plants and grassland."<<endl;
}

else if(question=="Warm Currents" || question=="warm currents"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Warm currents that move from the equator towards the poles carry warm water."<<endl;
}

else if(question=="Cold Currents" || question=="cold currents"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Cold currents that travel from the poles towards the equator carry cold water and the air becomes colder."<<endl;
}

else if(question=="Fossil Fuels" || question=="fossil fuels" || question=="Fossil fuels"){
	system("CLS");
	eduBunny();
	for(int i=0;i<60;i++) cout<<" ";	
	cout<<"Burning of fossil fuels is one of the main sources of carbon."<<endl;
}

else if(question=="El Nino" || question=="el nino" || question=="El nino"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<" El Nino is an abnormal and lengthy warming in the eastern part of the Pacific Ocean. This natural phenomenon occurs at irregular intervals of two to seven years and lasts for nine months or two years at most. Usually, it starts at the end of the year or during the Christmas season that is why it is termed as El Niño which refers to the Christ child. El Niño will most likely bring severe drought. It is believed that it causes stronger thunderstorm disturbance and massive storms. It also causes the decrease in the population of some species." <<endl;
}

else if(question=="La Nina" || question=="la nina" || question=="La nina"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"La Nina is the opposite climatic disturbance to El Nino. This natural phenomenon may, but does not always, follow El Nino events. It may last for nine to twelve months but in some cases, it lasts for two years. This event is triggered by the cooling of the eastern part of the Pacific Ocean that is why it is sometimes called Cold Pacific. La Ninas effects are the opposite of El Nino." <<endl;
}

else if(question=="Climate" || question=="climate"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Climate is the overall atmospheric condition of a place for a period of 30 years or more. Climate is influenced by latitude, altitude, distance from bodies of water, ocean currents, and topography." <<endl;
}

else if(question=="Coriolis Effect" || question=="coriolis effect" || question=="Coriolis effect"){
	system("CLS");
	eduBunny();
	for(int i=0;i<61;i++) cout<<" ";	
	cout<<"Coriolis Effect deflects the ocean currents."<<endl;
}

else if(question=="Altitude" || question=="altitude"){
	system("CLS");
	eduBunny();
	for(int i=0;i<40;i++) cout<<" ";	
	cout<<"Altitude is the height above sea level. Air temperature decreases when altitude increases."<<endl;
}

else if(question=="Climate Change" || question=="climate change"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Climate change is a long term shifting of global weather pattern."<<endl;
}

else if(question=="Fauna" || question=="fauna"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Fauna is all the living animals in a given area."<<endl;
}

else if(question=="Flora" || question=="flora"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Flora is all the plants in a given area." <<endl;
}

else if(question=="Greenhouse effect" || question=="greenhouse effect"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Greenhouse effect is the increase of global temperature due to some atmospheric gases." <<endl;
}

else if(question=="Gyre" || question=="gyre"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Gyre is the circular patterns formed by surface currents." <<endl;
}

else if(question=="Latitude" || question=="Latitude"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Latitude is an imaginary line that is parallel to the equator."<<endl;
}

else if(question=="Longitude" || question=="longitude"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Longitude is an imaginary line that extends from north pole to south pole."<<endl;
}

else if(question=="Mitigation" || question=="mitigation "){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Mitigation is a manner of modifying something to become useful." <<endl;
}

else if(question=="Precipitation" || question=="precipitation"){
	system("CLS");
	eduBunny();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Precipitation forms when water vapor condenses and falls to the ground as rain, snow, hail or sleet. " <<endl;
}

else if(question=="Temperature" || question=="temperature"){
	system("CLS");
	eduBunny();
	for(int i=0;i<56;i++) cout<<" ";	
	cout<<"Temperature refers to the hotness or coldness of an object." <<endl;
}else{
			system("CLS");
        	eduBunny();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		}
	cin.ignore();
    system("CLS");
    eduBunny();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
    break;
    case 5:
        eduMouse();
        cin.ignore();
        for(int i=0;i<53;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Mouse and I like staring at stars and constellations."<<endl;
        cin.ignore();
        system("CLS");
        eduMouse();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"A name! EDU-Master, I want one."<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduMouse();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Tsrp! Tsrp! "<<eduname<<" is a great name."<<endl;
        cin.ignore();
        system("CLS");
        eduMouse();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now let's study about stars and constellations."<<endl;
        cin.ignore();
        system("CLS");
        eduMouse();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Aside from that, EDU-Master, What is your name?"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduMouse();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Hey! "<<username<<"! I'll be your EDU-pet for today."<<endl;
        cin.ignore();
        do{
        system("CLS");
        eduMouse();
		for(int i=0;i<46;i++) cout<<" ";
        cout<<"Please tell me the name of the star or the constellation you want to know"<<endl;
        for(int i=0;i<46;i++) cout<<" ";
        getline(cin,question);
        if(question=="Constellation" || question=="constellation"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"A group of stars forming a recognizable pattern that is traditionally named after its apparent form or identified with a mythological figure. Modern astronomers divide the sky into eighty-eight constellations with defined boundaries."<<endl;
        }
        else if(question=="Stars" || question=="stars"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Stars is a luminous ball of gas, mostly hydrogen and helium, held together by its own gravity. Nuclear fusion reactions in its core support the star against gravity and produce photons and heat, as well as small amounts of heavier elements."<<endl;
        }
        else if(question=="Andromeda" || question=="andromeda"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Andromeda is one of the Greek constellations. It was named after Andromeda, the daughter of Cassiopeia and Cepheus in Greek mythology, who was chained and left for the sea monster Cetus to eat, and then saved by Perseus. Andromeda was sacrificed to Cetus to appease the gods and stop the monster from ravaging her land. Cetus was sent by the god Poseidon after Cassiopeia had boasted that she was more beautiful than the nymphs." << endl;
        }
        else if(question=="Antlia" || question=="antlia"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Antlia is one of the constellations created by the French astronomer Nicolas Louis de Lacaille in the 18th century. He originally named it Antlia Pneumatica, or Machine Pneumatique in French, in honour of French physicist Denis Papins invention, the air pump." << endl;
        }
        else if(question=="Apus" || question=="apus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Apus represents a bird of paradise. The constellations name means no feet in Greek, referring to a western misconception of a bird-of-paradise as one not having feet. The constellation was created and named by the Dutch astronomer and cartographer Petrus Plancius in the late 16th century." << endl;	
        }
        else if(question=="Aquarius" || question=="aquarius"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Aquarius is one of the 44 Greek constellations. It is usually associated with Ganymede, the cup-carrier to the Olympian gods.In the myth, Ganymede was the son of King Tros, known for giving Troy its name. Ganymede was the most beautiful boy alive and Zeus was so infatuated with him that he took the form of an eagle and abducted the boy. In some versions of the myth, Zeus sent an eagle, represented by the constellation Aquila, to fetch Ganymede and bring him to Olympus." << endl;
        }
        else if(question=="Aquila" || question=="aquila"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Aquila constellation is sometimes associated with the eagle that held Zeus thunderbolts in Greek mythology and other times with the eagle that abducted Ganymede and brought him to Olympus." << endl;
        }
        else if(question=="Ara" || question=="ara"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Ara is associated with the altar on which the gods formed an alliance before going to war with the Titans in Greek mythology. The gods were led by Zeus and the Titans by Atlas. In honour of the gods victory, Zeus placed the altar in the sky. In various depictions of the constellation, the Milky Way usually represents the smoke rising from the altar." << endl;
        }
        else if(question=="Aries" || question=="aries"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Aries is identified as a winged ram with a Golden Fleece, sent by the nymph Nephele to save her son Phrixus after his father, King Athamas of Boeotia, had been given a false prophecy that he had to sacrifice his son to ward off famine. Phrixus and his sister Helle climbed on the ram and were carried toward Colchis on the shore of the Black Sea. Helle lost her grip and fell into the Dardanelles on the way. The Greeks named the channel separating Europe and Asia the Hellerospont in her memory. The Golden Fleece was later the object of the Argonauts quest to Colchis." << endl;
        }
        else if(question=="Boötes" || question=="boötes"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Boötes is one of the ancient Greek constellations. The constellations name means the oxen-driver and Boötes is usually identified as the ploughman who drove the oxen represented by Ursa Major. The constellation is also sometimes associated with Arctophylax, or the Bear Keeper, also referring to Ursa Major, the Big Bear." << endl;
        }
        else if(question=="Caelum" || question=="caelum"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Caelum is one of the constellations created by Nicolas Louis de Lacaille. He originally named it Caelum Scalptorium (or les Burins in French), which means the engravers chisel in Latin." << endl;
        }
        else if(question=="Camelopardalis" || question=="camelopardalis"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Camelopardalis means the giraffe, and is a combination of the Greek words for the camel and the leopard. The Greeks came up with the name because the giraffe reminded them of the camel because of its long neck, and had spots like a leopard." << endl;
        }
        else if(question=="Cancer" || question=="cancer"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Cancer represents Karkinos, a crab sent by Hera to distract Heracles when he was fighting the Lemean Hydra as part of his Twelve Labours. Heracles kicked the crab so hard that it flew all the way into the sky, where it became a constellation. In a different version of the myth, Heracles crushed the crab underfoot and Hera placed it into the sky." << endl;
        }
        else if(question=="Canes Venatici" || question=="canes venatici" || question=="Canes Venatici"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Canes Venatici was created by the Polish astronomer Johannes Hevelius in the 17th century. It represents two hunting dogs led by Boötes, the Herdsman, following the Great Bear (Ursa Major)." << endl;
        }
        else if(question=="Canis Major" || question=="canis major" || question=="Canis major"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Canis Major is one of the Greek constellations. It represents the bigger dog following the mythical hunter Orion in pursuit of a hare, represented by Lepus constellation. The constellation is also sometimes associated with Laelaps, the fastest dog in the world, given to Europa by Zeus as a present." << endl;
        }
        else if(question=="Canis Minor" || question=="canis minor" || question=="Canis minor"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Canis Minor represents the smaller dog following Orion. The constellation is also sometimes associated with Maera, the dog that belonged to Icarius, the unlucky wine-maker who was killed by his friends and is represented by Boötes constellation. The dog was said to have jumped off a cliff out of grief after Icarius was killed." << endl;
        }
        else if(question=="Capricornus" || question=="capricornus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Capricornus is one of the ancient constellations first catalogued by Ptolemy in the 2nd century. The constellations name means the goat. Capricornus is usually taken to represent the Greek forest deity Pan, who had the horns and legs of a goat. It is also sometimes identified as Amalthea, the goat that suckled the infant Zeus." << endl;
        }
        else if(question=="Carina" || question=="carina"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Carina was one of the three constellations that formed Argo Navis, a large constellation that represented the ship on which Jason and the Argonauts sailed to Colchis to get the Golden Fleece." << endl;
        }
        else if(question=="Cassiopeia" || question=="cassiopeia"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Cassiopeia constellation represents the boastful queen Cassiopeia, wife of Cepheus and mother of Andromeda in Greek mythology. Cassiopeia claimed that she was more beautiful than the Nereids, and the nymphs asked the sea god Poseidon to punish the queen for her vanity. Poseidon sent the sea monster Cetus to ravage the queens land. King Cepheus asked an oracle for help and was told that he had to sacrifice his daughter Andromeda to appease Poseidon. The king and queen left their daughter chained to a rock, but Andromeda was saved from the monster by Perseus. Cassiopeia and Cepheus were placed into the sky by Poseidon. It is said that Cassiopeia spends six months every year upside down in the sky as punishment for her boastfulness." << endl;
        }
        else if(question=="Centaurus" || question=="centaurus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Centaurus constellation represents the half-man, half-horse hybrid creature from Greek mythology. It is usually associated with Chiron, the wise centaur who mentored Heracles, Theseus, Achilles, Jason, and other famous Greek heroes." << endl;
        }
        else if(question=="Cepheus" || question=="cepheus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Cepheus constellation represents King Cepheus of Aethiopia (a region that contained parts of present-day Egypt, Jordan and Israel), husband of Cassiopeia and father of Andromeda." << endl;
        }
        else if(question=="Cetus" || question=="cetus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Cetus constellation represents the sea monster sent by Poseidon to ravage King Cepheus land after his wife Cassiopeia had boasted that she was more beautiful than the Nereids." << endl;
        }
        else if(question=="Chamaeleon" || question=="chamaeleon"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Chamaeleon constellation was created by Dutch explorers in the 16th century. It was named after the chameleon, a type of lizard that can change colour to match the environment." << endl;
        }
        else if(question=="Circinus" || question=="circinus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Circinus is one of the constellations created by Nicolas Louis de Lacaille in the 18th century. He named it after the drafting tool used for drawing circles. The constellation does not represent the mariners compass like Pyxis constellation does, but is usually depicted as a pair of dividing compasses used to measure distances." << endl;
        }
        else if(question=="Columba" || question=="columba"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout<<"Columba constellation represents the dove. It was introduced by Petrus Plancius in the 16th century and originally named Columba Noachi, or Noahs Dove, in reference to the dove that signalled to Noah that the Great Flood was receding." << endl;
        }
        else if(question=="Coma Berenices" || question=="coma berenices" || question=="Coma berenices"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Coma Berenices constellation was named after Queen Berenice II of Egypt. Berenice swore to Aphrodite that she would cut off her long blonde hair if the goddess brought her husband, Ptolemy III Euergetes, back home safely from a dangerous mission against the Seleucids, who had killed the kings sister during the Third Syrian War. When Ptolemy returned, the queen fulfilled her promise and placed her hair in Aphrodites temple. The hair disappeared the next day, which made the king angry. To calm him down, Conon, the court astronomer, told him that the goddess was so pleased with Berenices hair that she placed it into the sky." << endl;
        }
        else if(question=="Corona Australis" || question=="corona australis" || question=="Corona australis"){
        	system("CLS");
        	eduMouse();
			for(int i=0;i<11;i++) cout<<" ";
        	cout << "Corona Australis is one of the Greek constellations. The Greeks saw it not as a crown, but as a wreath associated with the centaur represented by Sagittarius constellation. The constellation is also sometimes associated with the crown that Dionysus placed in the sky after freeing his mother Semele from Hades." << endl;
        }
        else if(question=="Corona Borealis" || question=="corona borealis" || question=="Corona borealis"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
        	cout << "Corona Borealis, or the Northern Crown, represents the crown worn by the Cretan princess Ariadne at her wedding. After helping Theseus defeat the Minotaur and find his way out of the labyrinth, Ariadne sailed off with the hero, but was abandoned by him on the island of Naxos. Dionysus saw her weeping there and fell in love. The two were later married. At the wedding, Ariadne wore a crown made by the god Hephaestus, and threw it into the sky after the ceremony. It is said that the jewels turned into stars which now form the constellation Corona Borealis." << endl;
        }
        else if(question=="Corvus" || question=="corvus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Corvus is another Greek constellation. It represents the crow (or raven), the sacred bird of the god Apollo. In the myth, Apollo tells the raven to watch over his pregnant lover Coronis. After a while, Coronis loses interest in the god and falls in love with a human man. When the bird reports the affair to Apollo, the god becomes so angry that the raven did not stop the affair that he curses it, scorching the ravens feathers and turning them black. (The bird had originally had white feathers.) Coronis son, the healer Asclepius, is represented by Ophiuchus constellation. In a different tale, Apollo sends the raven to fetch him some water in a cup, represented by Crater constellation, and the bird gets distracted by a fig tree and stops to feast. Later, the raven blames its tardiness on a water snake (represented by Hydra constellation), but the god is so angry that he casts all three  the raven, the water snake, and the cup (Crater)  into the sky. Apollo also casts a curse on the bird, turning its feathers black, and making the raven eternally thirsty. This, according to the tale, is why ravens and crows have such raspy voices." << endl;
        }
        else if(question=="Crater" || question=="crater"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Crater represents the cup of Apollo, usually drawn as a two-handed chalice." << endl;
        }
        else if(question=="Crux" || question=="crux"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Crux constellation is associated with many myths and stories across different cultures. Greeks could see the constellation before it dropped below the horizon for most of the northern hemisphere, and some saw significance in the celestial cross disappearing from the sky and linked it to the crucifixion of Christ. By the year 400 AD, the cross could not be seen from most of Europe, and Europeans did not rediscover the constellation until the late 15th century." << endl;
        }
        else if(question=="Cygnus" || question=="cygnus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Cygnus constellation is most commonly associated with the myth of Leda, the Spartan queen who gave birth to two sets of twins  the mortal Clytemnestra and Castor and the immortal Pollux and Helen  after being seduced by Zeus, who came to her in the form of a swan. The mortal children were fathered by Ledas husband Tyndareus and the immortal ones by Zeus. Castor and Pollux are associated with Gemini constellation." << endl;
        }
        else if(question=="Delphinus" || question=="delphinus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Delphinus is one of the Greek constellations. It is associated with Poseidons messenger, the dolphin that helped the god find the nymph Amphitrite, whom he later married. In a different myth, Delphinus is the dolphin that saved the life of the poet Arion. The god Apollo placed it into the sky next to Lyra constellation, which in this version of the myth represents Arions lyre." << endl;
        }
        else if(question=="Dorado" || question=="dorado"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Dorado is one of the constellations created by Dutch explorers in the 16th century. It represents the dolphinfish." << endl;
        }
        else if(question=="Draco" || question=="draco"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Draco constellation represents the dragon Ladon, the mythical creature with a hundred heads that guarded the gardens of the Hesperides in Greek mythology. Heracles killed the dragon with his poisoned arrows as part of his Twelve Labours. In Roman legend, Draco is associated with one of the Giant Titans who warred with Zeus and other Olympian gods for a decade. The Titan was killed by Minerva in battle and thrown into the sky, where it froze around the North Pole." << endl;
        }
        else if(question=="Equuleus" || question=="equuleus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Equuleus constellation is usually associated with Hippe, the daughter of the centaur Chiron. Hippe was seduced by Aeolus and became pregnant with his child, but was too ashamed to tell her father about the pregnancy. She hid from Chiron in the mountains and, when he came looking for her, she prayed to the gods that he didnt find her. The gods granted her wish and turned her into a mare, represented by Equuleus constellation. Hippe is said to still be hiding from Chiron, with only her head showing behind Pegasus constellation." << endl;
        }
        else if(question=="Eridanus" || question=="eridanus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Eridanus is the ancient Greek name for the river Po in Italy. In mythology, Eridanus is usually associated with the story of Phaëton, the son of the Sun god Helios who begged his father to let him drive his chariot across the sky. Helios agreed to this and Phaëton mounted the chariot. However, since he was an inexperienced driver, he soon lost control of the horses and the chariot plunged close to Earth, setting lands on fire and turning Libya into a desert. Zeus had to prevent further disaster and he struck the young man down with a thunderbolt. Phaëton fell into the river Eridanus and his father did not drive his chariot for days after his sons death, leaving the world in darkness." << endl;
        }
        else if(question=="Fornax" || question=="fornax"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Fornax is one of the southern constellations created by Lacaille in the 18th century. It was originally named Fornax Chemica, after the chemical furnace, a small heater used in chemical experiments." << endl;
        }
        else if(question=="Gemini" || question=="gemini"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Gemini constellation was named after the mythical twins Castor and Polydeuces. Two of the constellations brightest stars carry the twins names." << endl;
        }
        else if(question=="Grus" || question=="grus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Grus constellation was introduced by the Dutch astronomer Petrus Plancius in the late 16th century. It is one of the constellations named after exotic animals, created by Dutch navigators during their expedition to the East Indies. The constellation represents the crane." << endl;
        }
        else if(question=="Hercules" || question=="hercules"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Hercules constellation was named after Heracles, the legendary hero from Greek mythology. It is one of the oldest constellations in the sky, dating back to Sumerian times." << endl;
        }
        else if(question=="Horologium" || question=="horologium"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Horologium is another one of Lacailles constellations. Its original name was Horologium Oscillitorium, or the pendulum clock. Lacaille named the constellation after the pendulum clock to honour its inventor, Christiaan Huygens." << endl;
        }
        else if(question=="Hydra" || question=="hydra"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Hydra, the monster from the myth of Heracles Twelve Labours. It is one of the Greek constellations, first documented by Ptolemy in the 2nd century." << endl;
        }
        else if(question=="Hydrus" || question=="hydrus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Hydrus is not associated with any myths. It is one of the constellations introduced by Petrus Plancius in the late 16th century. It represents the sea snakes that Dutch explorers would have seen on their journeys to the East Indies." << endl;
        }
        else if(question=="Hydrus" || question=="hydrus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Hydrus is not associated with any myths. It is one of the constellations introduced by Petrus Plancius in the late 16th century. It represents the sea snakes that Dutch explorers would have seen on their journeys to the East Indies." << endl;
        }
        else if(question=="Indus" || question=="indus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Indus is another constellation introduced by Plancius. It represents the Indian. Since Dutch explorers encountered many indigenous peoples on their expeditions, it is unclear if the constellations name refers to a native of the East Indies, Madagascar, or South Africa." << endl;
        }
        else if(question=="Lacerta" || question=="lacerta"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Lacerta is one of the constellations created by the Polish astronomer Johannes Hevelius in the 17th century. It is not associated with any myths." << endl;
        }
        else if(question=="Leo" || question=="leo"){
        	system("CLS");
        	eduMouse();;
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Leo constellation is associated with the Nemean lion in Greek mythology, the beast killed by Heracles as part of his Twelve Labours." << endl;	
        }
        else if(question=="Leo Minor" || question=="leo minor"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Leo Minor is one of the constellations introduced by Hevelius in the 17th century. There are no stories associated with it." << endl;
        }
        else if(question=="Lepus" || question=="lepus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Lepus is one of the Greek constellations, first catalogued by Ptolemy in the 2nd century. It is not associated with any particular stories from Greek mythology, but is often depicted as a hare chased by the hunter Orion and his two dogs, Canis Major and Canis Minor." << endl;
        }
        else if(question=="Libra" || question=="libra"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Libra means the weighing scales in Latin, and the constellation represents the scales of justice held by Dike, the Greek goddess of justice, associated with Virgo constellation." << endl;
        }
        else if(question=="Lupus" || question=="lupus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Lupus is a very old constellation, first catalogued by Ptolemy. It was not associated with the wolf until the Renaissance times. The Greeks called the constellation Therium, which means wild animal, and the Romans knew it as Bestia, the beast. The stars of Lupus used to be part of Centaurus constellation, and they represented an animal sacrificed by the centaur. The centaur was holding the animal toward an altar, represented by Ara constellation." << endl;
        }
        else if(question=="Lynx" || question=="lynx"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Lynx is one of the constellations introduced by Johannes Hevelius. It represents the lynx. Hevelius gave it this name because it is a faint constellation and it takes the eyesight of a lynx to see it." << endl;
        }
        else if(question=="Lyra" || question=="lyra"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Lyra constellation represents the lyre of Orpheus, the Greek poet and musician who died at the hands of the Bacchantes." << endl;
        }
        else if(question=="Mensa" || question=="mensa"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Mensa means the table in Latin. The constellation was created by Nicolas Louis de Lacaille in the 18th century. He originally named it Mons Mensae, which is the Latin name for Table Mountain in South Africa. Lacaille spent a couple of years there mapping the southern skies." << endl;
        }
        else if(question=="Mensa" || question=="mensa"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Mensa means the table in Latin. The constellation was created by Nicolas Louis de Lacaille in the 18th century. He originally named it Mons Mensae, which is the Latin name for Table Mountain in South Africa. Lacaille spent a couple of years there mapping the southern skies." << endl;
        }
        else if(question=="Microscopium" || question=="microscopium"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Microscopium is one of Lacailles constellations. He named it after an early type of compound microscope, one that was widely used in the 18th century." << endl;
        }
        else if(question=="Monoceros" || question=="monoceros"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Monoceros means the unicorn in Latin. The constellation was created by the Dutch astronomer, cartographer, and clergyman Petrus Plancius in 1612. He named it after the unicorn because the mythical animal appears several times in the Old Testament." << endl;
        }
        else if(question=="Musca" || question=="musca"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Musca is one of the constellations introduced by Dutch explorers in the 16th century. It represents the fly." << endl;
        }
        else if(question=="Norma" || question=="norma"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Norma constellation represents the draughtsmans set-square and rule, or a carpenters square, one used by carpenters on exploratory vessels. It was created by Nicolas Louis de Lacaille in the 18th century." << endl;
        }
        else if(question=="Octans" || question=="octans"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Octans constellation represents the reflecting octant, the precursor to the modern sextant. It was created by Nicolas Louis de Lacaille in 1752." << endl;
        }
        else if(question=="Ophiuchus" || question=="ophiuchus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Ophiuchus is another Greek constellation. It represents Asclepius, the famous healer in Greek mythology, and is usually depicted as a man holding a serpent, represented by the constellation Serpens. Asclepius is said to have learned how to bring people back from the dead when he saw one snake bringing healing herbs to another." << endl;
        }
        else if(question=="Orion" || question=="orion"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Orion constellation represents the mythical hunter Orion, son of the sea god Poseidon and the Cretan princess Euryale. It is one of the oldest constellations known, also associated with the Sumerian myth of Gilgamesh." << endl;
        }
        else if(question=="Pavo" || question=="pavo"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Pavo constellation was introduced by Petrus Plancius in the 16th century. It represents the Java green peacock that Dutch navigators probably encountered while exploring the East Indies." << endl;
        }
        else if(question=="Pegasus" || question=="pegasus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Pegasus represents the white winged horse from Greek mythology. The horse was said to have sprung from the neck of the Gorgon Medusa when Perseus beheaded her." << endl;
        }
        else if(question=="Perseus" || question=="perseus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Perseus constellation represents the Greek hero Perseus. It is one of the six constellations associated with Perseus and was originally catalogued by Ptolemy in the 2nd century." << endl;
        }
        else if(question=="Phoenix" || question=="phoenix"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Phoenix represents the mythical firebird, sacred across many cultures and mythologies. Phoenix was one of the southern constellations introduced by Dutch explorers in the late 16th century." << endl;
        }
        else if(question=="Pictor" || question=="pictor"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Pictor means the painter in Latin. The constellation, created by Lacaille in the 17th century, was originally named le Chevalet et la Palette, or the easel and palette, and the name was later Latinized to Equuleus Pictoris, or the painters easel, and eventually shortened to Pictor." << endl;
        }
        else if(question=="Pisces" || question=="pisces"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Pisces is one of the zodiac constellations, first catalogued by Ptolemy along with the other Greek constellations. It is associated with a story about the goddess Aphrodite and her son Eros transforming into fish to escape the monster Typhon." << endl;
        }
        else if(question=="Piscis Austrinus" || question=="piscis austrinus" || question=="Piscis austrinus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Piscis Austrinus is one of the ancient constellations, dating back to Babylonian times. In Greek mythology, it represents the Great Fish and is usually depicted as swallowing the water poured by Aquarius." << endl;
        }
        else if(question=="Puppis" || question=="puppis"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Puppis represents the stern of the Argo Navis, the ship on which the Argonauts sailed to get the Golden Fleece. The ship used to be represented by a single larger constellation, which was split into three smaller ones in the 18th century." << endl;
        }
        else if(question=="Pyxis" || question=="pyxis"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Pyxis constellation represents the mariners compass. It was created by Nicolas Louis de Lacaille, who originally named it Pyxis Nautica." << endl;
        }
        else if(question=="Reticulum" || question=="reticulum"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Reticulum represents the reticle. The constellation was named by Nicolas Louis de Lacaille, who gave it the name le Réticule Rhomboide to commemorate the reticle in his telescope, which he used during his trip to South Africa, where he spent some time mapping the southern skies in the 1750s. The constellation was created in 1621 by Isaac Habrecht II, who originally named it Rhombus." << endl;
        }
        else if(question=="Sagitta" || question=="sagitta"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Sagitta is one of the Greek constellations. It represents the arrow that Heracles used to kill the eagle that gnawed on Prometheus liver." << endl;
        }
        else if(question=="Sagittarius" || question=="sagittarius"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Sagittarius constellation represents a centaur aiming an arrow toward Antares, the bright star that marks the scorpions heart. It is also frequently associated with Crotus, the son of Pan, who invented archery and lived on Mount Helicon. Crotus was said to have two feet and a satyrs tail. Sagittarius is also sometimes wrongly associated with the centaur Chiron, represented by Centaurus constellation." << endl;
        }
        else if(question=="Scorpius" || question=="scorpius"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Scorpius is one of the Greek constellations, first catalogued by Ptolemy. It represents the scorpion that killed the mythical hunter Orion. Orion is still said to be fleeing from the scorpion, and this is why the two constellations can never be seen in the sky at the same time: Orion sets just as Scorpius rises." << endl;
        }
        else if(question=="Sculptor" || question=="sculptor"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Sculptor constellation represents the sculptors studio. It was created by Lacaille in the 18th century and originally named lAtelier du Sculpteur." << endl;
        }
        else if(question=="Scutum" || question=="scutum"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Scutum was created by Johannes Hevelius in the 17th century. He named the constellation Scutum Sobiescianum, or the Shield of Sobieski, to honour the victory of the Polish King Jan III Sobieski in the Battle of Vienna in 1683. The name was later shortened to Scutum, the shield." << endl;
        }
        else if(question=="Serpens" || question=="serpens"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Serpens is usually associated with the snake held by the healer Asclepius, represented by the constellation Ophiuchus." << endl;
        }
        else if(question=="Sextans" || question=="sextans"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Sextans is one of the constellations introduced by the Polish astronomer Johannes Hevelius. It represents the astronomical sextant. Hevelius named the constellation after the sextant he used to measure star positions. The constellations original name was Sextans Uraniae, but it was later shortened to simply Sextant." << endl;
        }
        else if(question=="Taurus" || question=="taurus"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Taurus is one of the oldest constellations known. It was first catalogued by Ptolemy in the 2nd century.In Greek mythology, Taurus represents the god Zeus, who in one tale transformed himself into a bull in order to seduce and abduct Europa, the beautiful daughter of the Phoenician King Agenor. In a different myth, the constellation is associated with the nymph Io, who was also seduced by Zeus. When the two were almost caught by Zeus wife Hera, the god transformed Io into a heifer to protect her." << endl;
        }
        else if(question=="Telescopium" || question=="telescopium"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Telescopium is one of the constellations created by Nicolas Louis de Lacaille that were named after various instruments. The constellation represents an aerial telescope, a type of refractor." << endl;
        }
        else if(question=="Triangulum" || question=="triangulum"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Triangulum, or the triangle, is one of the Greek constellations, first catalogued by Ptolemy in the 2nd century. The Greeks called the constellation Deltoton because its shape resembled the Greek letter delta." << endl;
        }
        else if(question=="Triangulum Australe" || question=="triangulum australe" || question=="Triangulum australe"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Triangulum Australe means the southern triangle in Latin. The constellation was created by the Dutch cartographer Petrus Plancius from observations of Dutch navigators in the late 16th century. Like most southern constellations, it is not associated with any myths." << endl;
        }
        else if(question=="Tucana" || question=="tucana"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Tucana is one of the southern constellations created by Dutch explorers in the late 16th century. It was named after the toucan, a type of bird found in South America." << endl;
        }
        else if(question=="Ursa Major" || question=="ursa major" || question=="Ursa major"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Ursa Major, the great bear in Latin, is associated with many different myths in many cultures, and represents a bear in many of the legends it is associated with across the globe. It is one of the most ancient constellations in the sky. In Greek mythology, it is most commonly taken to represent Callisto, a nymph Zeus fell in love with, whom his wife Hera turned into a bear. Sometimes the constellation is also associated with Adrasteia, a nymph who took care of Zeus when he was very young." << endl;
        }
        else if(question=="Ursa Minor" || question=="ursa minor" || question=="Ursa minor"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Ursa Minor is another Greek constellation. It is usually associated with either Arcas, the son of Zeus and the nymph Callisto, or with Ida, one of the nymphs who took care of Zeus on Crete, where his mother Rhea had hidden him from his father because Cronus, fearful of an old prophecy that said he would be overthrown by one of his children, swallowed five of his older children after they were born." << endl;
        }
        else if(question=="Vela" || question=="vela"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Vela means the sails in Latin. It is one of the three constellations that used to form the larger constellation Argo Navis, which represented the ship of the Argonauts." << endl;
        }
        else if(question=="Virgo" || question=="virgo"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Virgo is one of the Greek constellations. It is associated with Dike, the Greek goddess of justice, holding the scales of justice represented by the neighbouring constellation Libra." << endl;
        }
        else if(question=="Volans" || question=="volans"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Volans constellation represents the flying fish, a type of fish found in tropical waters that can jump out of the water and glide through the air. It is one of the southern constellations introduced by Dutch navigators in the 16th century." << endl;
        }
        else if(question=="Vulpecula" || question=="vulpecula"){
        	system("CLS");
        	eduMouse();
        	for(int i=0;i<11;i++) cout<<" ";
			cout << "Vulpecula constellation was created and named by the Polish astronomer Johannes Hevelius in the 17th century. It represents a little fox holding a goose in its jaws. Hevelius originally named it Vulpecula et Anser, which means the little fox with the goose in Latin. He said that the constellation represented a fox carrying a goose to Cerberus, the dog that guarded the entrance to the Underworld in Greek mythology." << endl;
        } 
		else if(question=="Polaris" || question=="polaris"){
		system("CLS");
		eduMouse();
		for(int i=0;i<20;i++) cout<<" ";	
		cout<<"Also known as the North Star (as well as the Pole Star, Lodestar, and sometimes Guiding Star), Polaris is the 45th brightest star in the night sky. It is very close to the north celestial pole, which is why it has been used as a navigational tool in the northern hemisphere for centuries. Scientifically speaking, this star is known as Alpha Ursae Minoris because it is the alpha star in the constellation Ursa Minor (the Little Bear). The reason why it is so bright in the sky is due to a combination of its luminosity and distance  at 6.8 light years, it is one of Earths nearest neighbors. And in truth, it is actually getting closer. For the next 60,000 years or so, astronomers expect that it will continue to approach our Solar System; at which point, it will begin to recede again." <<endl;
		}
		else if(question=="Alpha Centauri System" || question=="alpha centauri system" || question=="Alpha centauri system"){
		system("CLS");
		eduMouse();
		for(int i=0;i<20;i++) cout<<" ";	
		cout<<"Also known as Rigel Kent or Toliman, Alpha Centauri is the brightest star in the southern constellation of Centaurus and the third brightest star in the night sky. It is also the closest star system to Earth, at just a shade over four light-years. But much like Sirius and Polaris, it is actually a multistar system, consisting of Alpha Centauri A, B, and Proxima Centauri (aka. Centauri C). Based on their spectral classifications, Alpha Centauri A is a main sequence white dwarf with roughly 110% of the mass and 151.9% the luminosity of our Sun. Alpha Centauri B is an orange subgiant with 90.7% of the Suns mass and 44.5% of its luminosity. Proxima Centauri, the smallest of the three, is a red dwarf roughly 0.12 times the mass of our Sun, and which is the closest of the three to our Solar System."<<endl;
		}
		else if(question=="Betelgeuse" || question=="betelgeuse"){
		system("CLS");
		eduMouse();
		for(int i=0;i<20;i++) cout<<" ";	
		cout<<"Pronounced Beetle-juice and this bright red supergiant is roughly 65 light-year from Earth. Also known as Alpha Orionis, it is nevertheless easy to spot in the Orion constellation since it is one of the largest and most luminous stars in the night sky. What excites astronomers about Betelgeuse is it will one day go supernova, which is sure to be a spectacular event that people on Earth will be able to see. However, the exact date of when that might happen remains unknown."<<endl;
		}
		else if(question=="Rigel" || question=="rigel"){
		system("CLS");
		eduMouse();
		for(int i=0;i<20;i++) cout<<" ";	
		cout<<"Also known as Beta Orionis, and located between 700 and 900 light years away, Rigel is the brightest star in the constellation Orion and the seventh brightest star in the night sky. Here too, what appears to be a blue supergiant is actually a multistar system. The primary star (Rigel A) is a blue-white supergiant that is 21 times more massive than our sun, and shines with approximately 120,000 times the luminosity. Rigel B is itself a binary system, consisting of two main sequence blue-white subdwarf stars. Rigel B is the more massive of the pair, weighing in at 2.5 Solar masses versus Rigel Cs 1.9. Rigel has been recognized as being a binary since at least 1831 when German astronomer F.G.W. Struve first measured it. A fourth star in the system has been proposed, but it is generally considered that this is a misinterpretation of the main stars variability. Rigel A is a young star, being only 10 million years old. And given its size, it is expected to go supernova when it reaches the end of its life. "<<endl;
	}
	else if(question=="Vega" || question=="vega"){
	system("CLS");
	eduMouse();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Vega is another bright blue star that anchors the otherwise faint Lyra constellation (the Harp). Along with Deneb (from Cygnus) and Altair (from Aquila), it is a part of the Summer Triangle in the Northern hemisphere. It is also the brightest star in the constellation Lyra, the fifth brightest star in the night sky and the second brightest star in the northern celestial hemisphere (after Arcturus). Characterized as a white dwarf star, Vega is roughly 2.1 times as massive as our Sun. Together with Arcturus and Sirius, it is one of the most luminous stars in the Suns neighborhood. It is a relatively close star at only 25 light-years from Earth. Vega was the first star other than the Sun to be photographed and the first to have its spectrum recorded. "<<endl;
	}
	else if(question=="Pleiades" || question=="pleiades"){
	system("CLS");
	eduMouse();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Also known as the Seven Sisters, Messier 45 or M45, Pleiades is actually an open star cluster located in the constellation of Taurus. At an average distance of 444 light years from our Sun, it is one of the nearest star clusters to Earth, and the most visible to the naked eye. Though the seven largest stars are the most apparent, the cluster actually consists of over 1,000 confirmed members (along with several unconfirmed binaries). The core radius of the cluster is about 8 light years across, while it measures some 43 light years at the outer edges. It is dominated by young, hot blue stars, though brown dwarfs  which are just a fraction of the Suns mass  are believed to account for 25% of its member stars. "<<endl;
	}

else if(question=="Antares" || question=="antares"){
	system("CLS");
	eduMouse();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Also known as Alpha Scorpii, Antares is a red supergiant and one of the largest and most luminous observable stars in the nighttime sky. Its name  which is Greek for rival to Mars (aka. Ares)  refers to its reddish appearance, which resembles Mars in some respects. Its location is also close to the ecliptic, the imaginary band in the sky where the planets, Moon and Sun move. This supergiant is estimated to be 17 times more massive, 850 times larger in terms of diameter, and 10,000 times more luminous than our Sun. Hence why it can be seen with the naked eye, despite being approximately 550 light-years from Earth. The most recent estimates place its age at 12 million years. Antares is the seventeenth brightest star that can be seen with the naked eye and the brightest star in the constellation Scorpius. "<<endl;
}

else if(question=="Canopus" || question=="canopus"){
	system("CLS");
	eduMouse();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Also known as Alpha Carinae, this white giant is the brightest star in the southern constellation of Carina and the second brightest star in the nighttime sky. Located over 300 light-years away from Earth, this star is named after the mythological Canopus, the navigator for king Menelaus of Sparta in The Iliad. Thought it was not visible to the ancient Greeks and Romans, the star was known to the ancient Egyptians, as well as the Navajo, Chinese and ancient Indo-Aryan people. In Vedic literature, Canopus is associated with Agastya, a revered sage who is believed to have lived during the 6th or 7th century BCE. To the Chinese, Canopus was known as the Star of the Old Man, and was charted by astronomer Yi Xing in 724 CE. "<<endl;
}else{
			system("CLS");
        	eduMouse();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		}
	cin.ignore();
    system("CLS");
    eduMouse();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
        break;
    case 6:
        eduPig();
        cin.ignore();
        for(int i=0;i<54;i++) cout<<" ";
        cout<<"Hi! I'm EDU-Pig and work, power, and energy is where I excel."<<endl;
        cin.ignore();
        system("CLS");
        eduPig();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"How about giving me a name, EDU-Master."<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,eduname);
        system("CLS");
        eduPig();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Oink! Oink! "<<eduname<<" is a great name. I like it!"<<endl;
        cin.ignore();
        system("CLS");
        eduPig();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Now let's study about work, power, and energy."<<endl;
        cin.ignore();
        system("CLS");
        eduPig();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"But first what is your name, EDU-Master?"<<endl;
        for(int i=0;i<66;i++) cout<<" ";
        getline(cin,username);
        system("CLS");
        eduPig();
        for(int i=0;i<66;i++) cout<<" ";
        cout<<"Hello! "<<username<<"! This time I'll be your EDU-pet."<<endl;
        cin.ignore();
        do{
        system("CLS");
        eduPig();
		for(int i=0;i<47;i++) cout<<" ";
        cout<<"Please ask me the word that you want to know about work, power, and energy."<<endl;
        for(int i=0;i<47;i++) cout<<" ";
        getline(cin,question);
    if(question=="Power" || question=="power"){
	system("CLS");
	eduPig();
	for(int i=0;i<28;i++) cout<<" ";	
	cout<<"Power is the rate of doing work or of transferring heat, i.e. the amount of energy transferred or converted per unit time."<<endl;
}

else if(question=="Work" || question=="work"){
	system("CLS");
	eduPig();
	for(int i=0;i<30;i++) cout<<" ";	
	cout<<"Force is said to do work if, when acting, there is a displacement of the point of application in the direction of the force." <<endl;
}

else if(question=="Force" || question=="force"){
	system("CLS");
	eduPig();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Force is any interaction that, when unopposed, will change the motion of an object. A force can cause an object with mass to change its velocity to accelerate." <<endl;
}

else if(question=="Momentum" || question=="momentum"){
	system("CLS");
	eduPig();
	for(int i=0;i<40;i++) cout<<" ";	
	cout<<"Momentum is a physics term; it refers to the quantity of motion that an object has." <<endl;
}

else if(question=="Momentum Vector" || question=="momentum vector" || question=="Momentum vector"){
	system("CLS");
	eduPig();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Momentum is a vector quantity. For a particle with mass, the momentum equals mass times velocity, and velocity is a vectorquantity while mass is a scalar quantity. A scalar multiplied by a vector is a vector. A moving body would be a particle with a mass." <<endl;
}

else if(question=="Momentum Conservation" || question=="momentum conservation" || question=="Momentum conservation"){
	system("CLS");
	eduPig();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Conservation of momentum is a fundamental law of physics which states that the momentum of a system is constant if there are no external forces acting on the system. It is embodied in Newton's first law (the law of inertia)." <<endl;
}

else if(question=="Energy" || question=="energy"){
	system("CLS");
	eduPig();
	for(int i=0;i<20;i++) cout<<" ";	
	cout<<"Energy is the capacity for doing work. It may exist in potential, kinetic, thermal, electrical, chemical, nuclear, or other various forms." <<endl;
}


else if(question=="Formula for work" || question=="formula for work" || question=="Formula For Work"){
	system("CLS");
	eduPig();
	for(int i=0;i<50;i++) cout<<" ";	
	cout<<"Work = Force  Displacement  Cosine(theta)" <<endl;
}

else if(question=="Formula for power" || question=="formula for power" || question=="Formula For Power"){
	system("CLS");
	eduPig();
	for(int i=0;i<50;i++) cout<<" ";	
	cout<<"Power = Work / time" <<endl;
}else{
			system("CLS");
        	eduPig();
    		for(int i=0;i<46;i++) cout<<" ";
    		cout<<"Sorry I don't know what your asking. Try retyping or ask another EDU-nimal."<<endl;
		} 
	cin.ignore();
    system("CLS");
    eduPig();	
    for(int i=0;i<66;i++) cout<<" ";
    cout<<"Do you want to ask some more?"<<endl;
    for(int i=0;i<66;i++) cout<<" ";
	cout<<"Yes or No?"<<endl;
	for(int i=0;i<66;i++) cout<<" ";
    getline(cin,ans);
	}while(ans=="Yes" || ans=="yes");
	break;
//    case 7:
//    	eduFish();
//		cin.ignore();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"Hi! I'm EDU-Fish and I know a bit about ecosystem."<<endl;
//        cin.ignore();
//        system("CLS");
//        eduFish();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"How about giving me a name, EDU-Master."<<endl;
//        for(int i=0;i<66;i++) cout<<" ";
//        getline(cin,eduname);
//        system("CLS");
//        eduFish();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"Blurp! Blop! "<<eduname<<" is a great name. I like it!"<<endl;
//        cin.ignore();
//        system("CLS");
//        eduFish();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"Now let's study about work, power, and energy."<<endl;
//        cin.ignore();
//        system("CLS");
//        eduFish();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"What is your name, EDU-Master?"<<endl;
//        for(int i=0;i<66;i++) cout<<" ";
//        getline(cin,username);
//        system("CLS");
//        eduFish();
//        for(int i=0;i<66;i++) cout<<" ";
//        cout<<"Hallo! "<<username<<"! This time I'll be your EDU-pet."<<endl;
//        cin.ignore();
//        system("CLS");
//        eduFish();
//        do{
//		for(int i=0;i<66;i++) cout<<" ";
//    	cout<<"Please ask me the word that you want to know about work, power, and energy."<<endl;
//    	for(int i=0;i<66;i++) cout<<" ";
//    	getline(cin,question);
//    	//infor
//		cin.ignore();
//    	system("CLS");
//    	eduFish();	
//    	for(int i=0;i<66;i++) cout<<" ";
//    	cout<<"Do you want to ask some more?"<<endl;
//    	for(int i=0;i<66;i++) cout<<" ";
//		cout<<"Yes or No?"<<endl;
//		for(int i=0;i<66;i++) cout<<" ";
//    	getline(cin,ans);
//	}while(ans=="Yes" || ans=="yes");    
//	break;
	}
for(int i=0;i<66;i++) cout<<" ";
cout<<"Or perhaps you want to change an EDU-nimal?"<<endl;
for(int i=0;i<66;i++) cout<<" ";
cout<<"Yes or No?"<<endl;
for(int i=0;i<66;i++) cout<<" ";
getline(cin,wholeans);

}while(wholeans=="yes" || wholeans=="Yes");
system("CLS");
for(int i=0;i<17;i++) cout<<endl;
for(int i=0;i<75;i++) cout<<" ";
cout<<"Good bye EDU-Master"<<endl;
for(int i=0;i<60;i++) cout<<" ";
    cout<<"  ___                ___                            "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<"(|. .|)    ^___^    ('v')  () ()  (o)_(o)   ^---^   "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<" ((Y))    (='x'=)   ((_))  ('x')  (='x'=)  ( 'o')   "<<endl;
    for(int i=0;i<60;i++) cout<<" ";
    cout<<" ()_()_/   ()_()_/   ^ ^   c()()   () ()   ( uu )  \n"<<endl;
for(int i=0;i<18;i++) cout<<endl;
return 0;
}
