#include "functions.h"
#include "text.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
Functions::Functions()
{
    
    Do();
    
}
void Functions::Do()
{
    Text c;
    cls();
    printLog();
    c.printP1();
    getHomeOption();
    if (option == "1")
    {
        tips();
    }
    else if (option == "2")
    {
        fgenp();
    }
    else if (option == "q")
    {
        system("exit");
    }
}
void Functions::genpageoption()
{
    cls();
    prgeneratePage();
    getGenPageO();
    if (genpoption == "1")
    {
        jlp();
    }
    else if (genpoption == "2")
    {
        jnp();
    }
    else if (genpoption == "3")
    {
        jsp();
    }            
    else if (genpoption == "4")
    {
        lnp();
    }
    else if (genpoption == "5")
    {
        getlengthtcautoall();
    }
    else if (genpoption == "b")
    {
        fgenp();
    }
    else if (genpoption == "h")
    {
        Do();
    }
    
    else if (genpoption == "q")
    {
        system("exit");
    }
    else
    {
        genpageoption();
    }
}
void Functions::fgenp()
{
    cls();
    pr1Options();
    getFirstOption();
    if (foption == "1")
    {
        getlengthtcautoall();
    }
    else if (foption == "2")
    {
        genpageoption();
    }
    else if (foption == "b")
    {
        Do();
    }
    else if (foption == "q")
    {
        system("exit");
    }
    else
    {
        fgenp();
    }
}
void Text::prgeneratePage()
{
    for (size_t i = 0; i < generateOptions.size(); i++)
    {
        cout << generateOptions.at(i);
    }
}
void Functions::jlp()
{
    
    Text f;
    prJustLett();
    getJLettOption();
    if (jloption == "1")
    {
        getlengthtcuplett();
    }
    else if (jloption == "2")
    {
        getlengthtclowlett();
    }
    else if (jloption == "3")
    {
        getlengthtcbothlu();
    }
    else if (jloption == "b")
    {
        genpageoption();
    }
    else if (jloption == "h")
    {
        Do();
    }
    else if (jloption == "q")
    {
        system("clear");
    }
            
    
}
//-------------------------------------------------------------------------------JNP
void Functions::jnp()
{
    
    Text f;
    prJustNum();
    getJNumOption();
    if (jnoption == "1")
    {
        getlengthtcjnum();
    }
    else if (jnoption == "b")
    {
        genpageoption();
    }
    else if (jnoption == "h")
    {
        Do();
    }
    else if (jnoption == "q")
    {
        system("clear");
    }
}
//-------------------------------------------------------------------------------JSP
void Functions::jsp()
{
    Text f;
    prJustNum();
    getJNumOption();
    if (jnoption == "1")
    {
        getlengthtcjsym();
    }
    else if (jnoption == "b")
    {
        genpageoption();
    }
    else if (jnoption == "h")
    {
        Do();
    }
    else if (jnoption == "q")
    {
        system("clear");
    }
}
//-------------------------------------------------------------------------------NlP
void Functions::lnp()
{
    Text f;
    prJustNum();
    getJNumOption();
    if (jnoption == "1")
    {
        getlengthtcjlettnum();
    }
    else if (jnoption == "b")
    {
        genpageoption();
    }
    else if (jnoption == "h")
    {
        Do();
    }
    else if (jnoption == "q")
    {
        system("clear");
    }
}
//-------------------------------------------------------------------------------NLSP
void Functions::lnsp()
{
    Text f;
    prJustNum();
    getJNumOption();
    if (jnoption == "1")
    {
        getlengthtcjsym();
    }
    else if (jnoption == "b")
    {
        genpageoption();
    }
    else if (jnoption == "h")
    {
        Do();
    }
    else if (jnoption == "q")
    {
        system("clear");
    }
}
void Functions::tips()
{
    prTips();
    getTipsOption();
    if (toption == "b")
    {
        Do();
    }
    else if (toption == "q")
    {
        system("exit");
    }
    else
    {
        Do();
    }
}
//-------------------------------------PRINT LENGTH
void Text::prlength()
{
    cout << LengthO;
}
//---------------------------------------GET LENGTH AUTO ALL
void Functions::getlengthtcautoall()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcautoall();
    }
    else
    {
        autoGenerateAll();
    }
}
//---------------------------------------GET LENGTH LOWERCASE
void Functions::getlengthtclowlett()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtclowlett();
    }
    else
    {
        gplowlett();
    }
    
    
}
//---------------------------------------GET LENGTH UPPERCASE
void Functions::getlengthtcuplett()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcuplett();
    }
    else
    {
        gpuplett();
    }
    
    
}
//---------------------------------------GET LENGTH BOTH LOW-UPPER CASE
void Functions::getlengthtcbothlu()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcbothlu();
    }
    else
    {
        gpbothlulett();
    }  
}
//---------------------------------------GET LENGTH JUST NUMBER
void Functions::getlengthtcjnum()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcjnum();
    }
    else
    {
        gpNum();
    }  
}
//---------------------------------------GET LENGTH JUST SYMBOLS
void Functions::getlengthtcjsym()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcjsym();
    }
    else
    {
        gpSym();
    }  
}
//---------------------------------------GET LENGTH NUM LETT
void Functions::getlengthtcjlettnum()
{
    cls();
    prlength();
    getLengthOption();
    if (!lenoption)
    {
        getlengthtcjlettnum();
    }
    else
    {
        gplettnum();
    }  
}
//-------------------------------------PRINT SAVE QUEASTION
void Text::prsaveq()
{
    cout << SaveQuestion;
}
void Text::prsaved()
{
    cout << saved;
}
void Text::prsavename()
{
    cout << SaveOptions;
}
//-------------------------------------PRINT LOGO
void Functions::printLog()
{
    ifstream r("./logo.txt", ios::in);
    string str;
    for (size_t i = 0; i < 14; i++)
    {
        getline(r,str);
        cout << str << endl;
    }
    cout << endl;
    r.close();
}
//-------------------------------------PRINT HOME PAGE
void Text::printP1()
{
    for (size_t i = 0; i < homeOptions.size(); i++)
    {
        cout << homeOptions.at(i);
    }
}
void Functions::cls()
{
    system("clear");
}
//-------------------------------------PRINT PAGE 1
void Text::pr1Options()
{
    system("clear");
    for (size_t i = 0; i < firstPageOptions.size(); i++)
    {
        cout << firstPageOptions.at(i);
    }

}
//-------------------------------------PRINT TIPS
void Text::prTips()
{
    system("clear");
    for (size_t i = 0; i < Tips.size(); i++)
    {
        cout << Tips.at(i);
    }
}
//--------------------------------------PRINT JUST LETTER PAGE
void Text::prJustLett()
{
    system("clear");
    for (size_t i = 0; i < JletterOption.size(); i++)
    {
        cout << JletterOption.at(i);
    }
}
//--------------------------------------PRINT JUST NUMBERS PAGE
void Text::prJustNum()
{
    system("clear");
    for (size_t i = 0; i < JNumberOptions.size(); i++)
    {
        cout << JNumberOptions.at(i);
    }
}
//--------------------------------------GENERATING PASS WITH L-CASE LETTERS
void Functions::gplowlett()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += rand() % 26 + 97;
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//--------------------------------------GENERATING PASS WITH U-CASE LETTERS
void Functions::gpuplett()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += rand() % 26 + 65;
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//--------------------------------------GENERATING PASS WITH UP-LOWER CASE LETTERS
void Functions::gpbothlulett()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += bothLetters.at(rand() % 52);
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//--------------------------------------GENERATING PASS WITH AUTO-GENERATOR
void Functions::autoGenerateAll()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += symnumlett.at(rand() % 97);
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//---------------------------------------GENERATING PASS WITH JUST NUMBERS
void Functions::gpNum()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += rand() % 10 + 48;
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//--------------------------------------GENERATING PASS WITH SYMBOLS
void Functions::gpSym()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += symbols.at(rand() % 34);
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//----------------------------------------GENERATING PASS WITH LETT NUM
void Functions::gplettnum()
{
    ofstream out("./Passwords.txt", ios::out | ios::app);
    cls();
    srand(time(0));
    for (size_t i = 0; i < lenoption; i++)
    {
        pass += numlett.at(rand() % 72);
    }
    cout << endl;
    prsaveq();
    getSaveQOption();
    if (sqoption == "yes" || sqoption == "YES" || sqoption=="Yes" || sqoption=="y" || sqoption=="Y")
    {
        cls();
        prsavename();
        getSaveName();
        cls();
        out << snoption << "\t --> \t" << pass << endl;
        out << "--------------------------------------------------------------------------------"<<endl;
        prsaved();

        cout << pass << endl;
        out.close();
    }
    else if (sqoption == "no" || sqoption=="NO" || sqoption=="n" || sqoption=="No" || sqoption=="N")
    {
        cls();
        cout << pass << endl;
    }
}
//--------------------------------------GET OPTIONS
string Functions::getHomeOption()
{
    cin >> option;
    return option;
}
string Functions::getTipsOption()
{
    cin >> toption;
    return toption;
}
string Functions::getFirstOption()
{
    cin >> foption;
    return foption;
}
string Functions::getJLettOption()
{
    cin >> jloption;
    return jloption;
}
int Functions::getLengthOption()
{
    cin >> lenoption;
    return lenoption;
}
string Functions::getSaveQOption()
{
    cin >> sqoption;
    return sqoption; 
}
string Functions::getSaveName()
{
    cin >> snoption;
    return snoption;
}
string Functions::getGenPageO()
{
    cin >> genpoption;
    return genpoption;
}
string Functions::getJNumOption()
{
    cin >> jnoption;
    return jnoption;
}