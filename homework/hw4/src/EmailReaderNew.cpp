

#include <iostream>
#include <regex>
#include<fstream>
#include<string>
#include "EmailHeaderType.h"
#include "OutlookHeaderType.h"
#include "GmailHeaderType.h"

string toLower(std::string s) {
    transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return s;
}

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
    cout << "****WELCOME TO THE EMAIL HEADER EXTRACTOR****" << endl;
    cout << "WOULD YOU LIKE TO EXTRACT INFORMATION FROM A GMAIL OR OUTLOOK HEADER?" << endl;
    string line;
    EmailHeaderType email(" ");
    while (getline(cin, line))
    {

        email.setHeader(email.getHeader() + line + '\n');

        if (cin.peek() == '\n')
        {

            break;
        }

    }
    OutlookHeaderType outlook(email.getHeader());
    GmailHeaderType gmail(email.getHeader());
    
    cout << "PLEASE ENTER WHAT PART OF THE HEADER YOU WOULD LIKE TO EXTRACT" << endl;
    string part;
    cin >> part;

    if (toLower(part) == "received")
    {
        cout << email.getReceived() << endl;
        return 0;
    }
    else if (toLower(part) == "date")
    {
        cout << email.getDate() << endl;
        return 0;
    }
    else if (toLower(part) == "from")
    {
        cout << email.getFrom() << endl;
        return 0;
    }
    else if (toLower(part) == "cc")
    {
        cout << email.getCC() << endl;
        return 0;
    }
    else if (toLower(part) == "to")
    {
        cout << email.getTo() << endl;
        return 0;
    }
    else if (toLower(part) == "messageid" || toLower(part) == "message-id")
    {
        cout << email.getMessageID() << endl;
        return 0;
    }
    else if (toLower(part) == "subject")
    {
        cout << email.getSubject() << endl;
        return 0;
    }
    else if (toLower(part) == "authentication-results")
    {
        cout << outlook.getAuthentication() << endl;
        return 0;
    }
    else if (toLower(part) == "content-transfer-encoding")
    {
        cout << outlook.getContentTr() << endl;
        return 0;
    }
    else if (toLower(part) == "thread-topic")
    {
        cout << outlook.getThreadTopic() << endl;
        return 0;
    }
    else if (toLower(part) == "thread-index")
    {
        cout << outlook.getThreadIndex() << endl;
        return 0;
    }
    else if (toLower(part) == "references")
    {
        cout << outlook.getReferences() << endl;
        return 0;
    }
    else if (toLower(part) == "in-reply-to")
    {
        cout << outlook.getInReplyTo() << endl;
        return 0;
    }
    else if (toLower(part) == "accept-language")
    {
        cout << outlook.getAcceptLanguage() << endl;
        return 0;
    }
    else if (toLower(part) == "content-language")
    {
        cout << outlook.getContentLanguage() << endl;
        return 0;
    }
    else if (toLower(part) == "content-type")
    {
        cout << email.getContentType() << endl;
        return 0;
    }
    else if (toLower(part) == "x-ms-has-attach")
    {
        cout << outlook.getHasAttach() << endl;
        return 0;
    }
    else if (toLower(part) == "x-ms-exchange-organization-scl")
    {
        cout << outlook.getExchange() << endl;
        return 0;
    }
    else if (toLower(part) == "delivered-to")
    {
        cout << gmail.getDeliveredTo() << endl;
        return 0;
    }
    
    else if (toLower(part) == "x-google-smtp-source")
    {
        cout << email.getGoogle() << endl;
        return 0;
    }
    else if (toLower(part) == "reply-to")
    {
        cout << email.getReplyto() << endl;
        return 0;
    }
    else if (toLower(part) == "mime-version")
    {
        cout << email.getMime() << endl;
        return 0;
    }
    else if (toLower(part) == "content-transfer-encoding")
    {
        cout << email.getCTE() << endl;
        return 0;
    }
    else if (!part.empty())
    {
    cout << "That is not valid!";

 }
    
    


    /*
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
    */
        return 0;
}


