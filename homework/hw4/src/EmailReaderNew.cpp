

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
    string a = email.getHeader();
    GmailHeaderType gmail(a);
    
    cout << "PLEASE ENTER WHAT PART OF THE HEADER YOU WOULD LIKE TO EXTRACT" << endl;
    string part;
    cin >> part;

    if (part == "Received" || part == "received")
    {
        cout << email.getReceived() << endl;
    }
    else if(part == "date" || part == "Date")
    {
        cout << email.getDate() << endl;
    }
    else if (part == "from" || part == "From")
    {
        cout << email.getFrom() << endl;
    }
    else if (part == "cc" || part == "CC" || part == "Cc")
    {
        cout << email.getCC() << endl;
    }
    else if (part == "To" || part == "to")
    {
        cout << email.getTo() << endl;
    }
    else if (part == "Message-id" || part == "message-id"|| part == "Message-ID" || part == "Message-Id")
    {
        cout << email.getMessageID() << endl;
    }
    else if (part == "Subject" || part == "subject")
    {
        cout << email.getSubject() << endl;
    }
    else if (part == "Authentication-Results" || part == "authentication-Results" || part == "authentication-results")
    {
        cout << outlook.getAuthentication() << endl;
    }
    else if (part == "Content-Transfer-Encoding" || part == "content-transfer-encoding" || part == "Content-transfer-encoding")
    {
        cout << outlook.getContentTr() << endl;
    }
    else if (part == "Thread-Topic" || part == "thread-topic" || part == "thread-Topic")
    {
        cout << outlook.getThreadTopic() << endl;
    }
    else if (part == "Thread-Index" || part == "thread-index" || part == "thread-Index")
    {
        cout << outlook.getThreadIndex() << endl;
    }
    else if (part == "References" || part == "references")
    {
        cout << outlook.getReferences() << endl;
    }
    else if (part == "In-Reply-To" || part == "in-reply-to")
    {
        cout << outlook.getInReplyTo() << endl;
    }
    else if (part == "Accept-Language" || part == "accept-language")
    {
        cout << outlook.getAcceptLanguage() << endl;
    }
    else if (part == "Content-Language" || part == "content-language")
    {
        cout << outlook.getContentLanguage() << endl;
    }
    else if (part == "Content-Type" || part == "content-type")
    {
        cout << outlook.getContentType() << endl;
    }
    else if (part == "X-MS-Has-Attach" || part == "x-ms-has-attach")
    {
        cout << outlook.getHasAttach() << endl;
    }
    else if (part == "X-MS-Exchange-Organization-SCL" || part == "x-ms-exchange-organization-scl")
    {
        cout << outlook.getExchange() << endl;
    }
    else if (part == "DeliveredTo" || part == "Delivered-To" || "delivered-to")
    {
        cout << email.getDeliveredTo() << endl;
    }
    else if (part == "X-Google-Smtp-Source" || part == "x-google-smtp-source")
    {
        cout << email.getGoogle() << endl;
    }
    else if (part == "ReplyTo" || part == "Reply-To" || part == "reply-to")
    {
        cout << email.getReplyto() << endl;
    }
    else if (part == "MIME-Version" || part == "mime-version" || part == "MIME")
    {
        cout << email.getMime() << endl;
    }
    else if (part == "Content-Transfer-Encoding" || part == "content-transfer-encoding")
    {
        cout << email.getCTE() << endl;
    }
    else
    {
        "Not valid";
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


