

#include <iostream>
#include <regex>
#include<fstream>
#include<string>
#include "EmailHeaderType.h"
#include "OutlookHeaderType.h"
#include "GmailHeaderType.h"

using namespace std;

void PrintMatches(string str, regex reg)
{
    sregex_iterator currentMatch(str.begin(), str.end(), reg);
    sregex_iterator lastMatch;
    while (currentMatch != lastMatch)
    {
        smatch match = *currentMatch;
        cout << match.str() << endl;
        currentMatch++;
    }

    cout << endl;
}


int main()
{
    string a;
    cout << "****WELCOME TO THE EMAIL HEADER EXTRACTOR****" << endl;
    cout << "WOULD YOU LIKE TO EXTRACT INFORMATION FROM A GMAIL OR OUTLOOK HEADER?" << endl;
    cin >> a;
    EmailHeaderType email(a);
    if (email.getEmailHeaderType() == "Outlook" || email.getEmailHeaderType() == "outlook")
    {
        string line;
        string a = " ";
        OutlookHeaderType outlook(a);
        cout << "COPY AND PASTE THE HEADER YOU WANT TO SCAN" << endl;

        while (getline(cin, line))
        {

            outlook.setHeader(outlook.getHeader() + line + '\n');

            if (cin.peek() == '\n')
            {

                break;
            }

        }
        string part;
        cout << "PLEASE ENTER WHAT PART OF THE HEADER YOU WOULD LIKE TO EXTRACT" << endl;
        cin >> part;
        
        string regex_rule = part + ".*";
        regex reg(regex_rule);

        PrintMatches(outlook.getHeader(), reg);

    }
    else if (email.getEmailHeaderType() == "Gmail" || email.getEmailHeaderType() == "gmail")
    {
        string line;
        string a = " ";
        GmailHeaderType gmail(a);
        cout << "COPY AND PASTE THE HEADER YOU WANT TO SCAN" << endl;

        while (getline(cin, line))
        {

            gmail.setHeader(gmail.getHeader() + line + '\n');

            if (cin.peek() == '\n')
            {

                break;
            }

        }
        string part;
        cout << "PLEASE ENTER WHAT PART OF THE HEADER YOU WOULD LIKE TO EXTRACT" << endl;
        cin >> part;

        string regex_rule = part + ".*";
        regex reg(regex_rule);

        PrintMatches(gmail.getHeader(), reg);

    }
    else
    {
        cout << "Not a valid entry";
    }
    
        return 0;
}


