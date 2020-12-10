/*Password Generator Source Code File for PasswordsHeader*/
/*Created by bl4ckbo7*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "passwordsHeader.h"

using namespace std;

char welcomePasswordGenerator(){

    cout<<"\n==========[BL4CKBO7 PASSWORD GENERATOR] v0.2.2017========\n\n";
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
    cout<<"1) Uppercase and Lowercase Only\n";
    cout<<"2) Uppercase and Numerals Only\n";
    cout<<"3) Lowercase and Numerals Only\n";
    cout<<"4) Lowercase, Uppercase and Numerals Only\n";
    cout<<"5) Uppercase, Lowercase and Special Characters Only\n";
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
     else if(exit == 'Y'){
        system("cls");
        system("exit");
     }
     else {
        cin.clear();
        cin.ignore(1000, '\n');
        system("cls");
        cerr<<"Wrong input! Choose either (Y/n).\nRemember it's Case Sensitive!\n\n";
        quitBo7();
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
        _sleep(500);

        ofstream passwordFile;
        passwordFile.open("Password.txt", ios::out|ios::app);

        passwordFile<<"Password: "<<Str <<endl;

        cout<<"File Saved Successfully! \n\n";
        _sleep(450);
        system("cls");
    }
    else{
        _sleep(300);
        ofstream passwordFile;
        passwordFile.open("Password.txt", ios::out|ios::app);

        passwordFile<<"Password: "<<Str <<endl;

        cout<<"File Saved Successfully! \n\n";
        _sleep(150);
        system("cls");
    }
return 0;
}
