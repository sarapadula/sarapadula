
#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include <cstring>
#include <algorithm>
#include <windows.h>
#include <mmsystem.h>
#include<stdio.h>
#include <cstdio>
using namespace std;

double compareString(string str1, string str2)
{
    int n = 0;
    if (str1.length() < str2.length())
    {
        n = str1.length();
    }
    else
    {
        n = str2.length();
    }
    double equals = 0.0;
    double length = str1.length();
    double length2 = str2.length();
    double percentageOfMatches1 = 0.0;
    double percentageOfMatches2 = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (str1[i] == str2[i])
        {
            equals++;
        }
    }
    percentageOfMatches1 = 100 * (equals / length);
    percentageOfMatches2 = 100 * (equals / length2);
    if (percentageOfMatches1 <= percentageOfMatches2)
    {
        if (percentageOfMatches1 > 100)
        {
            return 1;
        }
        else
        {
            return percentageOfMatches1;
        }
        
    }
    else
    {
        if (percentageOfMatches2 > 100)
        {
            return 1;
        }
        else
        {
            return percentageOfMatches2;
        }
        
    }

}
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return s;
}
void name(vector<string>& str)
{
    for (int i = 1; i < 4; i++)
    {
        cout << str[i] << " ";
    }
}
void region(vector<string>& str)
{
    for (int i = 10; i < 14; i++)
    {
        cout << str[i] << " ";
    }
}
void colaAddress(vector<string>& str)
{
    for (int i = 17; i < 20; i++)
    {
        cout << str[i] << " ";
    }
}
void homeAddress(vector<string>& str)
{
    for (int i = 22; i < 27; i++)
    {
        cout << str[i] << " ";
    }
}
void bPhone(vector<string>& str)
{
    for (int i = 29; i < 31; i++)
    {
        cout << str[i] << " ";
    }
}
void hPhone(vector<string>& str)
{
    for (int i = 33; i < 34; i++)
    {
        cout << str[i] << " ";
    }
}
void college(vector<string>& str)
{
    for (int i = 64; i < 67; i++)
    {
        cout << str[i] << " ";
    }
    for (int i = 41; i < 43; i++)
    {
        cout << str[i] << " ";
    }
}
void dob(vector<string>& str)
{
    for (int i = 50; i < 53; i++)
    {
        cout << str[i] << " ";
    }
}
void birthPlace(vector<string>& str)
{
    for (int i = 54; i < 56; i++)
    {
        cout << str[i] << " ";
    }
}
void wife(vector<string>& str)
{
    for (int i = 72; i < 74; i++)
    {
        cout << str[i] << " ";
    }
}
void kids(vector<string>& str)
{
    for (int i = 74; i < 81; i++)
    {
        cout << str[i] << " ";
    }
}
void experience(vector<string>& str)
{
    for (int i = 81; i < 85; i++)
    {
        cout << str[i] << " ";
    }
}
void parents(vector<string>& str)
{
    for (int i = 59; i < 64; i++)
    {
        cout << str[i] << " ";
    }
}
void committee(vector<string>& str)
{
    for (int i = 99; i < 105; i++)
    {
        cout << str[i] << " ";
    }
}

int main()
{
    vector<string> str;

    fstream myfile("output.txt");

    string line;


    if (myfile.is_open())
    {

        while (myfile >> line)
        {
            str.push_back(line);
        }
        cout << endl;

        myfile.close();
    }
    cout << "******* Welcome to the SC District Chat Bot *******" << endl;;
    int i = 1;
    while (i == 1)
    {
        string input = "";
        cout << endl;
        cout << "What would you like to know about the representative of district 122?" << endl;
        cout << "Enter 'quit' or 'q' to exit the program." << endl;

        cout << endl;
        cout << endl;

        while (getline(cin, line))
        {
            input = input + line;

            if (cin.peek() == '\n')
            {

                break;
            }


        }

        cout << endl;

        if (compareString(toLower(input),"tell me everything") > 70 || compareString(toLower(input), "tell me all information") > 70 || compareString(toLower(input), "everything") > 70 || compareString(toLower(input), "all information") > 70 || compareString(toLower(input), "i want to know all information") > 70 || compareString(toLower(input), "i want to know all everything") > 70)
        {
            cout << "Name: ";
            name(str);
            cout << endl;

            cout << "Region: ";
            region(str);
            cout << endl;

            cout << "Columbia Address: ";
            colaAddress(str);
            cout << endl;

            cout << "Home Address: ";
            homeAddress(str);
            cout << endl;

            cout << "Business Phone: ";
            bPhone(str);
            cout << endl;

            cout << "Home Phone: ";
            hPhone(str);
            cout << endl;

            cout << "Eduction: ";
            college(str);
            cout << endl;

            cout << "DOB: ";
            dob(str);
            cout << endl;

            cout << "Birth Place: ";
            birthPlace(str);
            cout << endl;

            cout << "Spouse: ";
            wife(str);
            cout << endl;

            cout << "Children: ";
            kids(str);
            cout << endl;

            cout << "Job Experience: ";
            experience(str);
            cout << endl;

            cout << "Parents: ";
            parents(str);
            cout << endl;

            cout << "Committee: ";
            committee(str);
            cout << endl;

            input = "";
            continue;
        }
        else if (compareString(toLower(input), "tell me about the rep") > 70 || compareString(toLower(input), "tell me about the representative") > 70 || compareString(toLower(input), "personal information") > 70 || compareString(toLower(input), "i want to know about the rep") > 70 || compareString(toLower(input), "i want to know about the representative") > 70 || compareString(toLower(input), "tell me personal information") > 70 || compareString(toLower(input), "tell me personal info") > 70)
        {
            cout << "Name: ";
            name(str);
            cout << endl;

            cout << "Region: ";
            region(str);
            cout << endl;

            cout << "Eduction: ";
            college(str);
            cout << endl;

            cout << "DOB: ";
            dob(str);
            cout << endl;

            cout << "Birth Place: ";
            birthPlace(str);
            cout << endl;

            cout << "Spouse: ";
            wife(str);
            cout << endl;

            cout << "Children: ";
            kids(str);
            cout << endl;

            cout << "Job Experience: ";
            experience(str);
            cout << endl;

            cout << "Parents: ";
            parents(str);
            cout << endl;


            continue;
        }
        else if (compareString(toLower(input), "contact information") > 70 || compareString(toLower(input), "how do i contact my rep") > 70 || compareString(toLower(input), "how do i contact the rep") > 70 || compareString(toLower(input), "how do i contact my representative") > 70 || compareString(toLower(input), "tell me contact info") > 70 || compareString(toLower(input), "tell me contact information") > 70 || compareString(toLower(input), "tell me how to contact my rep") > 70 || compareString(toLower(input), "contact info") > 70 || compareString(toLower(input), "contact the rep") > 70)
        {
            cout << "Columbia Address: ";
            colaAddress(str);
            cout << endl;

            cout << "Home Address: ";
            homeAddress(str);
            cout << endl;

            cout << "Business Phone: ";
            bPhone(str);
            cout << endl;

            cout << "Home Phone: ";
            hPhone(str);
            cout << endl;


            continue;

        }

        else if (compareString(toLower(input), "name") > 70 || compareString(toLower(input), "tell me the rep name") > 70 || compareString(toLower(input), "tell me the repo name") > 70 || compareString(toLower(input), "tell me the representative name") > 70 || compareString(toLower(input), "what is the rep name") > 70 || compareString(toLower(input), "what is the representative name") > 70 || compareString(toLower(input), "what is the repo name") > 70 || compareString(toLower(input), "what is their name") > 70 || compareString(toLower(input), "tell me their name") > 70)
        {
            name(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "region") > 70 || compareString(toLower(input), "tell me the rep region") > 70 || compareString(toLower(input), "tell me the repo region") > 70 || compareString(toLower(input), "tell me the representative region") > 70 || compareString(toLower(input), "what region does the rep work in") > 70 || compareString(toLower(input), "what region does the repo work in") > 70 || compareString(toLower(input), "region they represent") > 70 || compareString(toLower(input), "what region do they represent") > 70)

        
        {
            region(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "columbia address") > 70 || compareString(toLower(input), "tell me their columbia address") > 70 || compareString(toLower(input), "what is their columbia address") > 70 || compareString(toLower(input), "what is their cola address") > 70 || compareString(toLower(input), "tell me their cola address") > 70 || compareString(toLower(input), "what is the rep columbia address") > 70 || compareString(toLower(input), "what is the representative columbia address") > 70 || compareString(toLower(input), "where are they in columbia") > 70 || compareString(toLower(input), "where are they in cola") > 70)
        {
            colaAddress(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "home address") > 70 || compareString(toLower(input), "tell me their home address") > 70 || compareString(toLower(input), "what is their home address") > 70 || compareString(toLower(input), "tell me their home address") > 70 || compareString(toLower(input), "what is the rep home address") > 70 || compareString(toLower(input), "what is the representative home address") > 70 || compareString(toLower(input), "tell me the rep home address") > 70 || compareString(toLower(input), "tll me the representative home address") > 70 || compareString(toLower(input), "where do they live") > 70)
        {
            homeAddress(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "address") > 70 || compareString(toLower(input), "tell me their address") > 70 || compareString(toLower(input), "what is their address") > 70 || compareString(toLower(input), "what is the rep address") > 70 || compareString(toLower(input), "tell me the rep address") > 70 || compareString(toLower(input), "tell me the representative address") > 70 || compareString(toLower(input), "where can i find them") > 70 || compareString(toLower(input), "where can i send them mail") > 70 || compareString(toLower(input), "where can i send them a letter") > 70)
        {
            cout << "Columbia Address: ";
            colaAddress(str);
            cout << endl;

            cout << "Home Address: ";
            homeAddress(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "alma mater") > 70 || compareString(toLower(input), "tell me their alma mater") > 70 || compareString(toLower(input), "what is their alma mater") > 70 || compareString(toLower(input), "tell me their educational background") > 70 || compareString(toLower(input), "what is their educational background") > 70 || compareString(toLower(input), "where did they go to college") > 70 || compareString(toLower(input), "where did the rep go to college") > 70 || compareString(toLower(input), "where did the representative go to college") > 70 || compareString(toLower(input), "representative alma mater") > 70)
        
        {
            college(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "college") > 70 || compareString(toLower(input), "university") > 70 || compareString(toLower(input), "representative college") > 70 || compareString(toLower(input), "where did they go to school") > 70 || compareString(toLower(input), "tell me where they went to school") > 70 || compareString(toLower(input), "where did the rep go to school") > 70 || compareString(toLower(input), "tell me where the rep went to school") > 70 || compareString(toLower(input), "representative educational background") > 70)
        
        {
            college(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "birthday") > 70 || compareString(toLower(input), "date of birth") > 70 || compareString(toLower(input), "dob") > 70 || compareString(toLower(input), "when is their birthday") > 70 || compareString(toLower(input), "when were they born") > 70 || compareString(toLower(input), "when was the rep born") > 70 || compareString(toLower(input), "when was the representative born") > 70 || compareString(toLower(input), "what is their date of birth") > 70 || compareString(toLower(input), "what is their dob") > 70)
        {
            dob(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "birthplace") > 70 || compareString(toLower(input), "birth place") > 70 || compareString(toLower(input), "where are they from") > 70 || compareString(toLower(input), "where is the representative from") > 70 || compareString(toLower(input), "where is the rep from") > 70 || compareString(toLower(input), "where is the repo from") > 70 || compareString(toLower(input), "where were they born") > 70 || compareString(toLower(input), "where was the rep born") > 70 || compareString(toLower(input), "where was the representative born") > 70)
        {
            birthPlace(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "spouse") > 70 || compareString(toLower(input), "wife") > 70 || compareString(toLower(input), "are they married") > 70 || compareString(toLower(input), "who are they married to") > 70 || compareString(toLower(input), "who is their spouse") > 70 || compareString(toLower(input), "representative spouse") > 70 || compareString(toLower(input), "rep spouse") > 70 || compareString(toLower(input), "representative wife") > 70 || compareString(toLower(input), "rep wife") > 70)
        {
            wife(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "kids") > 70 || compareString(toLower(input), "children") > 70 || compareString(toLower(input), "do they have kids") > 70 || compareString(toLower(input), "do they have children") > 70 || compareString(toLower(input), "who are their kids") > 70 || compareString(toLower(input), "does the rep have kids") > 70 || compareString(toLower(input), "does the representative have kids") > 70 || compareString(toLower(input), "does he have kids") > 70 || compareString(toLower(input), "who are his kids") > 70)
        
        {
            kids(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "parents") > 70 || compareString(toLower(input), "who are their parents") > 70 || compareString(toLower(input), "rep parents") > 70 || compareString(toLower(input), "representative parents") > 70 || compareString(toLower(input), "tell me the rep parents") > 70 || compareString(toLower(input), "tell me the representative parents") > 70)
        {
            parents(str);
            cout << endl;


            continue;

        }
        else if (compareString(toLower(input), "family") > 70 || compareString(toLower(input), "tell me about their family") > 70 || compareString(toLower(input), "rep family") > 70 || compareString(toLower(input), "representative family") > 70 || compareString(toLower(input), "who is their family") > 70 || compareString(toLower(input), "tell me about his family") > 70 || compareString(toLower(input), "who is his family") > 70 || compareString(toLower(input), "their family") > 70 || compareString(toLower(input), "tell me about rep family") > 70)
        {
            cout << "Parents: ";
            parents(str);
            cout << endl;
            kids(str);
            cout << endl;
            cout << "Spouse: ";
            wife(str);
            cout << endl;



            continue;

        }
        else if (compareString(toLower(input), "job experience") > 70 || compareString(toLower(input), "work experience") > 70 || compareString(toLower(input), "where did they work") > 70 || compareString(toLower(input), "representative job experience") > 70 || compareString(toLower(input), "rep job experience") > 70 || compareString(toLower(input), "where did the rep work") > 70 || compareString(toLower(input), "where did the representative work") > 70 || compareString(toLower(input), "rep work experience") > 70 || compareString(toLower(input), "representative work experience") > 70)
        {
            experience(str);
            cout << endl;
        }
        else if (compareString(toLower(input), "what committees is the repo on") > 70 || compareString(toLower(input), "what committees is the rep on") > 70 || compareString(toLower(input), "what committees is the representative on") > 70 || compareString(toLower(input), "committee assignments") > 70 || compareString(toLower(input), "what committees are they on") > 70 || compareString(toLower(input), "rep committee assignments") > 70 || compareString(toLower(input), "what committees are they on") > 70 || compareString(toLower(input), "representative committees") > 70 || compareString(toLower(input), "rep committees") > 70)
       
        {
            committee(str);
            cout << endl;
        }

        else if (compareString(toLower(input),"quit") > 70 || compareString(toLower(input), "q") > 70)
        {
            cout << "Goodbye";
            i = 0;
        }
        else if (!input.empty())
        {
            cout << "Invalid entry or we do not have that information. Try again." << endl;


            continue;
        }



    }
    return 0;

}


