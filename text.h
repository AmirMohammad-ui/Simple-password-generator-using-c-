#include <iostream>
#include <string>
#include <array>
#ifndef TEXT_H
#define TEXT_H

using namespace std;
class Text
{
public:
    Text();
    void printP1();
    void pr1Options();
    void prTips();
    void prJustLett();
    void prJustNum();
    void prlength();
    void prsaveq();
    void prsaved();
    void prsavename();
    void prgeneratePage();
private:
    //---------------------------------------------------------------------6 TIPS
    string Tips0 = "***6 TIPS*** to be more secure :\n";
    string Tips1 = "#1  Make your password LONG \n";
    string Tips2 = "#2  Make your password using NONESENSE phrases\n";
    string Tips3 = "#3  Include NUMBERS , LETTERS (both upper/lowercase) and SYMBOLS \n";
    string Tips4 = "#4  Avoid using obvious PERSONAL informations\n";
    string Tips5 = "#5  Do not REUSE passwords\n";
    string Tips6 = "#6  CHANGE your password regularly\n\n";
    //---------------------------------------------------------------------GLOBAL OPTIONS
    string QuitO = "q- Quit the P@$sGEn\n";
    string BackO = "b- Back\n";
    string SelectO = "Select your option that you want to create your password with and press ENTER: \n\n";
    string LengthO = "Enter your password length: \n";
    string GenerateO = "1- Generate\n";
    string AutoGenerate = "1- Auto generator (recommended)\n";
    string ManualGen = "2- Manual generator\n\n";
    string SaveQuestion = "*** Would you like to save this? (type yes/no) \n\n";
    string SaveOptions = "***Please enter the name you want this password for : \n";
    string saved = "***SAVED!***\n";
    string HomeOption = "h- Home \n";
    //---------------------------------------------------------------------HOME OPTIONS
    string Guide = "1- How to create the most secure password? (6 TIPS)\n";
    string Genpass = "2- Generate my password\n\n";
    
    //---------------------------------------------------------------------GENERATE PASS OPTIONS
    string GenPassOptions1 = "1- Auto Password Generator (recommended)\n";
    string GenPassOptions2 = "2- Manual Password Generator \n\n";
    
    //---------------------------------------------------------------------MANUAL GENERATOR OPTIONS
    string SelectPassType = "***NOTE***  Select one of these types which meets your needs : \n\n";
    string ManualGenOptions0 = "                                       Strength\n";
    string ManualGenOptions1 = "1- Just Letters                        <so weak>\n";
    string ManualGenOptions2 = "2- Just Numbers                        <so weak>\n";
    string ManualGenOptions3 = "3- Just Symbols                         <weak>\n";
    string ManualGenOptions4 = "4- Both Letters & Numbers              <strong>\n";
    string ManualGenOptions5 = "5- Letters & Numbers & Symbols       <very strong>\n\n";
    
    //---------------------------------------------------------------------JUST LETTER OPTIONS
    
    string JustLetOptions1= "1- UpperCase Letter\n";
    string JustLetOptions2= "2- LowerCase Letter\n";
    string JustLetOptions3= "3- Both UpperCase and LowerCase Letter\n\n";
    
    
    //---------------------------------------------------------------------JUST NUMBER OPTIONS
    //---------------------------------------------------------------------JUST SYMBOLS OPTIONS
    //---------------------------------------------------------------------BOTH LETTER & NUMBER OPTIONS
    //---------------------------------------------------------------------LETTER & NUMBER & SYMBOLS OPTIONS
    //---------------------------------------------------------------------ARRAYS OF PAGES
    array<string, 3> homeOptions = {Guide, Genpass,QuitO};
    array<string, 9> Tips = {Tips0,Tips1,Tips2,Tips3,Tips4,Tips5,Tips6,BackO,QuitO};
    array<string, 5> firstPageOptions = {SelectO, GenPassOptions1, GenPassOptions2, BackO,QuitO};
    array<string, 10> generateOptions = {SelectPassType,ManualGenOptions0,ManualGenOptions1,ManualGenOptions2,ManualGenOptions3,ManualGenOptions4,ManualGenOptions5,BackO,HomeOption,QuitO};
    array<string, 7> JletterOption = {SelectO,JustLetOptions1,JustLetOptions2,JustLetOptions3,BackO,HomeOption,QuitO};
    array<string, 5> JNumberOptions = {SelectO,GenerateO,BackO,HomeOption,QuitO};
    array<string, 5> JnumsymOption = {SelectO,GenerateO,BackO,HomeOption,QuitO};
    array<string, 6> LetNumSymOption  = {SelectO,AutoGenerate,ManualGen,BackO,HomeOption,QuitO};
};

#endif