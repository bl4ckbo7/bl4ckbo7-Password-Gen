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
    srand(time(0));
    std::string Str;
    int choice, passlen, temp;
    char exit, save, welcome;

    system("color 0a");

    passlength:

    welcome = welcomePasswordGenerator();

    cout<<"Enter the Length of Password (Atleast 8 characters): ";
    cin>>passlen;
    cout<<"\n\n";
    system("cls");

    if (passlen<8){
        system("cls");
        cout<<"\nWeak Password Length! Choose Passwords of MINIMUM 8 Characters!\n\n";
        goto passlength;
    }
    else {

        do{

            passcombo:

            system("cls");

            welcome = welcomePasswordGenerator();

        //prompts the user to choose password combination of their choice
            cout<<"Choose the Combination of Password you want (1-5): \n\n";
            temp = comboMenu();
            cout<<"\n>>> ";
            cin>>choice;
            system("cls");

            welcome = welcomePasswordGenerator();

            cout<<"\n\n";
        }
        while((choice<1)||(choice>5));

      //process the choice of password combination of user, to start generating the passwords
        switch(choice){

            case 1:
                //generating the passwords combining uppercases and lowercases
                for(unsigned int i = 0; i < passlen; ++i){
                    Str += genUpperLower();
                }
                cout <<"Password: "<< Str << endl;
                save = savePassword(Str);
                exit = quitBo7();
                break;

             case 2:
                //generating the passwords combining uppercases and numerals
                for(unsigned int i = 0; i < passlen; ++i){
                    Str += genUpperNumerals();
                 }
                cout<<"Password: "<< Str << endl;
                save = savePassword(Str);
                exit = quitBo7();
                break;

             case 3:
                //generating the passwords combining Lowercases and Numerals
                for(unsigned int i = 0; i < passlen; ++i){
                    Str += genLowerNumerals();
                 }
                cout<<"Password: "<< Str << endl;
                save = savePassword(Str);
                exit = quitBo7();
                break;

            case 4:
                //generating the passwords combining Lowercases, Uppercases and Numerals
                for(unsigned int i = 0; i < passlen; ++i){
                    Str += genLowerUpperNumerals();
                 }
                cout<<"Password: "<< Str << endl;
                save = savePassword(Str);
                exit = quitBo7();
                break;

            case 5:
                //generating the passwords combining Uppercases, Lowercases, and Special Characters
                for(unsigned int i = 0; i < passlen; ++i){
                    Str += genUpperLowerSpecialChars();
                 }
                cout<<"Password: "<< Str << endl;
                save = savePassword(Str);
                exit = quitBo7();
                break;

            default: cout<<"Wrong selection! Choose correct combination of Password!\n\n";
                     goto passcombo;

        }

}

return 0;
}
