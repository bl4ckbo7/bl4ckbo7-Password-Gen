/*
 bl4ckbo7 password generator v0.2.2017
 **Latest updates March 21, 2017
 **Created by bl4ckbo7
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "passwordsHeader.h"
#include "passwordsGen.cpp"

using namespace std;

int main()
{
    srand(time(0)); //generates randomly in seeds of seconds
    std::string Str; //stores the password string
    int choice, passlen, temp, repeat; //passlen carries the length of password
    char exit, save, welcome, displayPass;

    system("color 0a");
    system("title bl4ckbo7 Password Generator v0.2.2017");

    //checks if there is passwords directory
    if(){

    }
    passlength:

    welcome = welcomePasswordGenerator();

    //prompts the user to enter the length of password (The number of characters in the password)
    cout<<"Enter the Length of Password (Atleast 8 characters): ";
    cin>>passlen;
    cout<<"\n\n";

    repeatpoint:

    cout<<"How many passwords you want to produce? (Maximum Limit->100): ";
    cin>>repeat;
    cout<<"\n\n";

    if (repeat>100||cin.fail()||repeat<1){
        system("cls");
        cin.clear();  //clears the input buffer
        cin.ignore(1000, '\n');  //abitrarily places largest number 1000 in the buffer
        cerr<<"Oops! Invalid Input! Please try again. \n\n";
        welcome = welcomePasswordGenerator();
        goto repeatpoint;
    }
    system("cls");

    if ((passlen<8)||(cin.fail())){
        system("cls");
        cin.clear();
        cin.ignore(1000, '\n');
        cerr<<"\nWeak Password Length/Invalid Data-type! \nPlease Choose Passwords of MINIMUM 8 Characters!\n\n";
        goto passlength;
    }

    else {

        do{

            passcombo:

            system("cls");

            welcome = welcomePasswordGenerator();

        //Prompts the user to choose password combination of their choice
            cout<<"Choose the Combination of Password you want (1-5): \n\n";
            temp = comboMenu();
            cout<<"\n>>> ";
            cin>>choice;

            if(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                system("cls");
                cerr<<"Invalid Data Type!\n\n";
            }

            system("cls");

            welcome = welcomePasswordGenerator();

            cout<<"\n\n";
        }
        while((choice<1)||(choice>5));

      //process the choice of password combination of user, to start generating the passwords
        switch(choice){

            case 1:
                //generating the passwords combining uppercases and lowercases
                while(repeat>0){  //the while loop generates passwords repeatedly
	                for(unsigned int i = 0; i < passlen; ++i){
	                    Str += genUpperLower();
	                }
	                cout <<"Password: "<< Str <<endl;
	                save = savePassword(Str);
	                Str.clear();  //clears the output (Str) buffer
	                repeat--;
                }
                cout<<"Want to display passwords here(Y/n)?\n";
                cin>>displayPass;
                if(displayPass=='Y'){
                    system("cls");
                    system("type Password.txt");
                }
                else{
                    system("cls");
                    exit = quitBo7();
                }
                break;

             case 2:
                //generating the passwords combining uppercases and numerals
                while(repeat>0){  //the while loop generates passwords repeatedly
	                for(unsigned int i = 0; i < passlen; ++i){
	                    Str += genUpperNumerals();
	                 }
	                cout<<"Password: "<< Str << endl;
	                save = savePassword(Str);
	                Str.clear();  //clears the output (Str) buffer
	                repeat--;
                }
                cout<<"Want to display passwords here(Y/n)?\n";
                cin>>displayPass;
                if(displayPass=='Y'){
                    system("cls");
                    system("type Password.txt");
                }
                else{
                    system("cls");
                    exit = quitBo7();
                }
                break;

             case 3:
                //generating the passwords combining Lowercases and Numerals
                while(repeat>0){  //the while loop generates passwords repeatedly
	                for(unsigned int i = 0; i < passlen; ++i){
	                    Str += genLowerNumerals();
	                 }
	                cout<<"Password: "<< Str << endl;
	                save = savePassword(Str);
	                Str.clear();  //clears the output (Str) buffer
	                repeat--;
                }
                cout<<"Want to display passwords here(Y/n)?\n";
                cin>>displayPass;
                if(displayPass=='Y'){
                    system("cls");
                    system("type Password.txt");
                }
                else{
                    system("cls");
                    exit = quitBo7();
                }
                break;

            case 4:
                //generating the passwords combining Lowercases, Uppercases and Numerals
                while(repeat>0){  //the while loop generates passwords repeatedly
	                for(unsigned int i = 0; i < passlen; ++i){
	                    Str += genLowerUpperNumerals();
	                 }
	                cout<<"Password: "<< Str << endl;
	                save = savePassword(Str);
	                Str.clear();  //clears the output (Str) buffer
	                repeat--;
                }
                cout<<"Want to display passwords here(Y/n)?\n";
                cin>>displayPass;
                if(displayPass=='Y'){
                    system("cls");
                    system("type Password.txt");
                }
                else{
                    system("cls");
                    exit = quitBo7();
                }
                break;

            case 5:
                //generating the passwords combining Uppercases, Lowercases, and Special Characters
                while(repeat>0){  //the while loop generates passwords repeatedly
	                for(unsigned int i = 0; i < passlen; ++i){
	                    Str += genUpperLowerSpecialChars();
	                 }
	                cout<<"Password: "<< Str << endl;
	                save = savePassword(Str);
	                Str.clear();  //clears the output (Str) buffer
	                repeat--;
                }
                cout<<"Want to display passwords here(Y/n)?\n";
                cin>>displayPass;
                if(displayPass=='Y'){
                    system("cls");
                    system("type Password.txt");
                }
                else{
                    system("cls");
                    exit = quitBo7();
                }
                break;

            default: cerr<<"Wrong selection! Choose correct combination of Password!\n\n";
                     goto passcombo;

        }

}

return 0;
}
