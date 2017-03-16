#ifndef PASSWORDSHEADER_H_INCLUDED
#define PASSWORDSHEADER_H_INCLUDED

/*bl4ckbo7 generator methods used in passwordsGen.cpp*/

char genRandom();
int comboMenu();
int quitBo7();
int main();
char genUpperLower();
char genUpperNumerals();
char genLowerNumerals();
char genLowerUpperNumerals();
char genUpperLowerSpecialChars();
char savePassword(std::string Str);
char welcomePasswordGenerator();

#endif // PASSWORDSHEADER_H_INCLUDED
