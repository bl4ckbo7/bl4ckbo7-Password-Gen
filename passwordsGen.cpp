/*Password Generator Source Code File for PasswordsHeader*/
/*Created by Andy Kawa-bl4ckbo7*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "passwordsHeader.h"

using namespace std;

char welcomePasswordGenerator(){

    cout<<"\n==========[BL4CKBO7 PASSWORD GENERATOR] v1.0.2017========\n\n";
    cout<<"==============DEVELOPED BY ANDY KAWA CYBERLABS============\n\n\n\n\n\n";
return 0;
}

char genUpperLower()
{
    static const char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

    int stringLength = sizeof(alphanum) - 1;

    return alphanum[rand() % stringLength];
}

char genUpperNumerals()
{
    static const char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789";

    int stringLength = sizeof(alphanum) - 1;

    return alphanum[rand() % stringLength];
}

char genLowerNumerals()
{
    static const char alphanum[] =
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789";

    int stringLength = sizeof(alphanum) - 1;

    return alphanum[rand() % stringLength];
}

char genLowerUpperNumerals()
{
    static const char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789";

    int stringLength = sizeof(alphanum) - 1;

    return alphanum[rand() % stringLength];
}

char genUpperLowerSpecialChars()
{
    static const char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "!@#$%^&*()-_+=;:'`~|";

    int stringLength = sizeof(alphanum) - 1;

    return alphanum[rand() % stringLength];
}

int comboMenu(){
    //to be executed by conditional constructs
    cout<<"1. Uppercase and Lowercase Only\n";
    cout<<"2. Uppercase and Numerals Only\n";
    cout<<"3. Lowercase and Numerals Only\n";
    cout<<"4. Lowercase, Uppercase and Numerals Only\n";
    cout<<"5. Uppercase, Lowercase and Special Characters Only\n";
return 0;
}

int quitBo7(){
     char exit, welcome;

     welcome = welcomePasswordGenerator();

     cout<<"\n\nQuit BlackBot (Y/n)?\n\n";
     cin>>exit;
     cout<<"\n\n";

     if(exit == 'n'){
        system("cls");
        main();
     }
     else if((exit == 'Y')||(exit == 'y')){
        system("cls");
        system("exit");
     }
return 0;
}

char savePassword(std::string Str){

    int len;
    cout<<"\n\nSaving Password ....\n\n";

    //calculates the size of string in bytes
    len = sizeof(Str);
    //freezes the system accordingly just after computing the size of string
    if (len>32){
        _sleep(5000);

        ofstream passwordFile;
        passwordFile.open("Password.txt");

        passwordFile<<"Password: "<<Str;

        cout<<"File Saved Successfully! \n\n";
        _sleep(4500);
        system("cls");
    }
    else{
        _sleep(3000);
        ofstream passwordFile;
        passwordFile.open("Password.txt");

        passwordFile<<"Password: "<<Str;

        cout<<"File Saved Successfully! \n\n";
        _sleep(1500);
        system("cls");
    }
return 0;
}
