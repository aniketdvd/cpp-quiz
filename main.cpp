#include<iostream>
#include<fstream>
//#include<conio.h>
using namespace std;

class player{
    private:
        char nick[31];
        int score;
    public:
        void end_game(int __arg) {
            score = __arg;
            cout<<"\n\nPlease enter your name : ";
            cin>>nick;
            cout<<nick<<"'s current score was : "<<score<<endl;
        }
        void fetch_game() {
            cout<<nick<<"\t"<<score<<"\n";
        }
};

void check_life(int arg_lives){
    if(arg_lives == 0){
        cout<<"\n\nYou dont have any lives left. Better luck next time. \n";
        exit(0);
    }
}
int main(){
    ofstream qpp;
    ifstream qpp2;
    __init:
    system("clear");
    cout<<"\n\n";
    cout<<"  .g8\"\"8q.   `7MMF'   `7MF'  `7MMF'  MMM\"\"\"AMV\n";                    
    cout<<".dP'    `YM.   MM       M      MM    M'   AMV\n";                     
    cout<<"dM'      `MM   MM       M      MM    '   AMV         M           M\n";     
    cout<<"MM        MM   MM       M      MM       AMV          M           M\n";     
    cout<<"MM.      ,MP   MM       M      MM      AMV   ,   mmmmMmmmm   mmmmMmmmm\n"; 
    cout<<"`Mb.    ,dP'   YM.     ,M      MM     AMV   ,M       M           M\n";     
    cout<<"  `\"bmmd\"'      `bmmmmd\"'    .JMML.  AMVmmmmMM       M           M\n";     
    cout<<"        MMb\n";
    cout<<"           `bood'\n";
    cout<<"Menu - Press any key to perform corresponding action\n";
    cout<<"1. Begin the quiz\n";
    cout<<"2. View the stats.\n";
    cout<<"3. Reset the stats\n";
    cout<<"4. About and exit\n\n";
    //char __choice = getch();
    char __choice;
    cout<<"Please enter an option : ";
    cin>>__choice;
    char __selected;
    int __score=2;
    int __lives = 3;
    switch(__choice) {
        case '1': /* Starts the quiz */
            //system("cls");
            player instance;
            system("clear");
            cout<<"Get ready!";
            //getch();
            cout<<"\n\nLives left : ";
            for(int lc=0; lc<__lives; ++lc)cout<<" x";
            cout<<"\n\n";
            cout<<"1. Which of the following is not a 'programming language'?\n";
            cout<<"a. Java \tb. JavaScript\nc. HTML \td. C#";
            //__selected = getch();
            cout<<"\n\nEnter the answer : "; cin>>__selected;
            switch(__selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Java is no doubt an awesome an OOP language.";
                    __lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. JavaScript is an amazing language, indeed.";
                    __lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\nBINGO! CORRECT ANSWER!\nHTML is not a programming language. \nOn the planet Earth lies a big herd of people who consider it a programming language.\n";
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\nWrong pick, C# (see-sharp) is a programming language.";
                    __lives--;
                    break;
                default: //
                    //__selected = getch();
                    cout<<"Error, invalid input. Run the application again.";
                    exit(0);
            }

            cout<<"\n\nLives left : ";
            for(int lc=0; lc<__lives; ++lc)cout<<" x";
            cout<<"\n\n2. On which of the following is MacOS based?\n";
            cout<<"a. Unix \tb. Linux\nc. None \td. Darwin";
            //__selected = getch();
            cout<<"\n\nEnter the answer : "; cin>>__selected;
            switch(__selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Darwin is the right answer.";
                    __lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. Darwin is the right answer.";
                    __lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Darwin is the right answer.\n";
                    __lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Correct answer! Darwin was released by Apple inc.";
                    break;
                default: //
                    //__selected = getch();
                    cout<<"Error, invalid input. Run the application again.";
                    exit(0);
            }
            cout<<"\n\nLives left : ";
            for(int lc=0; lc<__lives; ++lc)cout<<" x";
            cout<<"\n\n3. Which of the following is a version control system made by Torvalds Linus?\n";
            cout<<"a. SVN \tb. Git\nc. Perforce \td. Plastic SCM";
            //__selected = getch();
            cout<<"\n\nEnter the answer : "; cin>>__selected;
            switch(__selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Git is the right answer.";
                    __lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Correct answer! Git-scm is made by Torvalds linus.";
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Git is the right answer.\n";
                    __lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Wrong answer. Git is the right answer.";
                    __lives--;
                    break;
                default: //
                    //__selected = getch();
                    cout<<"Error, invalid input. Run the application again.";
                    exit(0);
            }
            check_life(__lives);
            cout<<"\n\nLives left : ";
            for(int lc=0; lc<__lives; ++lc)cout<<" x";
            cout<<"\n\n4. Which of the following JS frameworks is widely used to publish desktop applications? \n";
            cout<<"a. Angular \tb. React\nc. Vue \td. Electron";
            //__selected = getch();
            cout<<"\n\nEnter the answer : "; cin>>__selected;
            switch(__selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Nope. Electron is the right answer.";
                    __lives--;
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong pick! Electron is the right answer. ";
                    __lives--;
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Nope. Electron is the right answer.";
                    __lives--;
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Electron is used to make desktop apps very easily.";
                    break;
                default: //
                    //__selected = getch();
                    cout<<"Error, invalid input. Run the application again.";
                    exit(0);
            }
            check_life(__lives);
            cout<<"\n\nLives left : ";
            for(int lc=0; lc<__lives; ++lc)cout<<" x";
            cout<<"\n\n5. Which of the following is NOT a Content Management System(CMS)? \n";
            cout<<"a. Drupal \tb. WordPress\nc. Magento \td. Nginx";
            //__selected = getch();
            cout<<"\n\nEnter the answer : "; cin>>__selected;
            switch(__selected) {
                case 'a': 
                case 'A': //
                    cout<<"\n Wrong answer. Nginx is the right answer.";
                    break;
                case 'b': 
                case 'B': //
                    cout<<"\n Wrong answer. Nginx is the right answer";
                    break;
                case 'c': 
                case 'C': //
                    cout<<"\n Wrong answer. Nginx is the right answer.\n";
                    break;
                case 'd': 
                case 'D': //
                    cout<<"\n Correct answer. Nginx is not a CMS. It is a fast server platform.";
                    break;
                default: //
                    //__selected = getch();
                    cout<<"Error, invalid input. Run the application again.";
                    exit(0);        
            }
            __score += __lives;
            instance.end_game(__score);
            qpp.open("quizbot.dat", ios::binary | ios::app);
            qpp.write((char *)&instance, sizeof(instance));
            qpp.close();
            break;
        
        case '2': /* Presents Quiz++ stats */
            cout<<"USERNAME\tSCORE\n\n";
            qpp2.open("quizbot.dat", ios::binary);
            if(!qpp2){
                cout<<"Cannot open the file.";
                goto __init;
            }
            while(qpp2.read((char *)&instance, sizeof(instance))){
                instance.fetch_game();
            }
            qpp2.close();
            break;
        
        case '3': /* Resets the stats by clearing the file used */
            remove("quizbot.dat");
            goto __init;
        
        case '4': /* About the software/code and author */
            cout<<"\n\nCode by : Aniket Dwivedi\n";
            cout<<"For: Computer Science project submission\n";
            cout<<"Session 2018-19 - Rani Laxmi Bai Memorial School, Sarvodaya Nagar\n\n";
            break;
        default: /* Does absolutely nothing but redirects back to menu*/
            goto __init;
    }
    //getch();
    return 0;
}
