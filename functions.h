#include <iostream>
#include <string>
#include "text.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using namespace std;

class Functions:public Text
{
    public:
        Functions();
        void Do();
        void tips();
        void fgenp();
        void genpageoption();
        void jlp();
        void jnp();
        void jsp();
        void lnp();
        void lnsp();
        // void HomePage();
        void printLog();
        void getlengthtclowlett();
        void getlengthtcuplett();
        void getlengthtcbothlu();
        void getlengthtcautoall();
        void getlengthtcjnum();
        void getlengthtcjsym();
        void getlengthtcjlettnum();
        //----------------------GET OPTIONS
        string getHomeOption();
        string getTipsOption();
        string getFirstOption();
        string getJLettOption();
        string getJNumOption();
        int getLengthOption();
        string getSaveQOption();
        string getSaveName();
        string getGenPageO();

        //----------------------GENERATE PASSWORDS
        void autoGenerateAll();
        void gplowlett();
        void gpbothlulett();
        void gpuplett();
        void gpNum();
        void gpSym();
        void gplettnum();

        void cls();
        
    private:
        string option;
        string toption;
        string foption;
        string jloption;
        int lenoption;
        string sqoption;
        string snoption;
        string genpoption;
        string jnoption;

        string pass;
        //---------------------------------------------------------------------PASS CHAR
        string bothLetters = "aAbBcCdDeEfFgGhHjJiIkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
        string symbols = "(~!@#$%^&*_-+=`|(){}\\\[]:;\"'<>,.?/)";
        string numlett = "a1AbB8cCdD2eEfF7gGh3HjJiI6kKl6LmM5nN4oO4pPqQ5rRs37StT8uUv19VwW0xX2yYz0Z";
        string symnumlett = "q1(~w3!@e4#r$%2tQ^&*Wy_-E5u+R=`Ti|Yo6U\(Ip)O{a7P}sLd]fK:g;Jh8Hj\"GkF'Dlz\\\[S9zA<ZxX>cC,vV0bB.nN?mM/)";
};

#endif