

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

        if (toLower(input) == "tell me everything" || toLower(input) == "tell me all information" || toLower(input) == "everything" || toLower(input) == "all information" || toLower(input) == "i want to know all information" || toLower(input) == "i want to know everything")
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
        else if (toLower(input) == "tell me about the rep" || toLower(input) == "tell me about the representative" || toLower(input) == "personal information" || toLower(input) == "i want to know about the rep" || toLower(input) == "i want to know about the representative" || toLower(input) == "tell me personal information" || toLower(input) == "tell me personal info")
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
        else if (toLower(input) == "contact information" || toLower(input) == "how do i contact my rep" || toLower(input) == "how to i contact the rep" || toLower(input) == "how do i contact my representative" || toLower(input) == "how do i contact my representative" || toLower(input) == "tell me contact info" || toLower(input) == "tell me contact information" || toLower(input) == "tell me how to contact my rep" || toLower(input) == "contact info" || toLower(input) == "how do i contact the rep")
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
      
        else if (toLower(input) == "name" || toLower(input) == "tell me the rep name" || toLower(input) == "tell me the repo name" || toLower(input) == "tell me the representative name" || toLower(input) == "what is the rep name" || toLower(input) == "what is the representative name" || toLower(input) == "what is the repo name" || toLower(input) == "what is their name" || toLower(input) == "tell me their name")
        {
        name(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "region" || toLower(input) == "tell me the rep region" || toLower(input) == "tell me the repo region" || toLower(input) == "tell me the representative region" || toLower(input) == "what region does the rep work in" || toLower(input) == "what region does the representative work in" || toLower(input) == "what region does the repo work in" || toLower(input) == "region they represent" || toLower(input) == "what region do they represent")
        {
        region(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "columbia address" || toLower(input) == "tell me their columbia address" || toLower(input) == "what is their columbia address" || toLower(input) == "tell me their cola address" || toLower(input) == "what is their cola address" || toLower(input) == "what is the rep columbia address" || toLower(input) == "what is the representative columbia address" || toLower(input) == "tell me the rep columbia address" || toLower(input) == "tell me the representative columbia address" || toLower(input) == "where are they in cola" || toLower(input) == "where are they in columbia")
        {
        colaAddress(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "home address" || toLower(input) == "tell me their home address" || toLower(input) == "what is their home address" || toLower(input) == "tell me their home address" || toLower(input) == "what is their home address" || toLower(input) == "what is the rep home address" || toLower(input) == "what is the representative home address" || toLower(input) == "tell me the rep home address" || toLower(input) == "tell me the representative home address" || toLower(input) == "where do they live")
        {
        homeAddress(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "address" || toLower(input) == "tell me their address" || toLower(input) == "what is their address" ||  toLower(input) == "what is the rep address" || toLower(input) == "what is the representative address" || toLower(input) == "tell me the rep address" || toLower(input) == "tell me the representative address" || toLower(input) == "where can i find them" || toLower(input) == "where can i send them mail" || toLower(input) == "where can i send them a letter")
        {
        cout << "Columbia Address: ";
        colaAddress(str);
        cout << endl;

        cout << "Home Address: ";
        homeAddress(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "alma mater" || toLower(input) == "tell me their alma mater" || toLower(input) == "what is their alma mater" || toLower(input) == "tell me their educational background" || toLower(input) == "what is their educational backgound" || toLower(input) == "where did they go to college" || toLower(input) == "where did the rep go to college" || toLower(input) == "where did the representative go to college" || toLower(input) == "where did the repo go to college" || toLower(input) == "representative alma mater")
        {
        college(str);
        cout << endl;

        
        continue;

        }
        else if (toLower(input) == "college" || toLower(input) == "university" || toLower(input) == "representative college" || toLower(input) == "where did they go to school" || toLower(input) == "tell me where they went to school" || toLower(input) == "where did the rep go to school" || toLower(input) == "tell me where the rep went to school" || toLower(input) == "where did the representative go to school" || toLower(input) == "where did the repo go to school" || toLower(input) == "representative educational background")
        {
        college(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "birthday" || toLower(input) == "date of birth" || toLower(input) == "dob" || toLower(input) == "when is their birthday" || toLower(input) == "when were they born" || toLower(input) == "when was the rep born" || toLower(input) == "when was the representative born" || toLower(input) == "what is their date of birth" || toLower(input) == "what is their dob" || toLower(input) == "representative date of birth")
        {
        dob(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "birthplace" || toLower(input) == "birth place" || toLower(input) == "where are they from" || toLower(input) == "where is the rep from" || toLower(input) == "where is the representative from" || toLower(input) == "where is the repo from" || toLower(input) == "where were they born" || toLower(input) == "where was the rep born" || toLower(input) == "where was the representative born" || toLower(input) == "where was the repo born")
        {
         birthPlace(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "spouse" || toLower(input) == "wife" || toLower(input) == "are they married" || toLower(input) == "who is their wife" || toLower(input) == "who are they married to" || toLower(input) == "who is their spouse" || toLower(input) == "representative spouse" || toLower(input) == "rep spouse" || toLower(input) == "representative wife" || toLower(input) == "rep wife")
        {
        wife(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "kids" || toLower(input) == "children" || toLower(input) == "do they have kids" || toLower(input) == "do they have children" || toLower(input) == "who are their children" || toLower(input) == "who are their kids" || toLower(input) == "does the rep have kids" || toLower(input) == "does the representative have kids" || toLower(input) == "does he have kids" || toLower(input) == "who are his kids")
        {
        kids(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "parents" || toLower(input) == "who are their parents" || toLower(input) == "rep parents" || toLower(input) == "representative parents" || toLower(input) == "tell me the rep parents" || toLower(input) == "tell me the representative parents")
        {
        parents(str);
        cout << endl;


        continue;

        }
        else if (toLower(input) == "family" || toLower(input) == "tell me about their family" || toLower(input) == "rep family" || toLower(input) == "representative family" || toLower(input) == "who is their family" || toLower(input) == "tell me about his family" || toLower(input) == "who is his family" || toLower(input) == "their family" || toLower(input) == "tell me about rep family" || toLower(input) == "tell me about representative family")
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
        else if (toLower(input) == "job experience" || toLower(input) == "work experience" || toLower(input) == "where did they work" || toLower(input) == "representative job experience" || toLower(input) == "rep job experience" || toLower(input) == "where did the rep work" || toLower(input) == "where did the representative work" || toLower(input) == "rep work experience" || toLower(input) == "representative work experience" || toLower(input) == "job")
        {
            experience(str);
            cout << endl;
        }
        else if (toLower(input) == "what committees is the repo on" || toLower(input) == "what committees is the rep on" || toLower(input) == "what committees is the representative on" || toLower(input) == "committee assignments" || toLower(input) == "committee assigment" || toLower(input) == "representative committee assignments" || toLower(input) == "rep committee assignments" || toLower(input) == "what committees are they on" || toLower(input) == "representative committees" || toLower(input) == "rep committees")
        {
        committee(str);
        cout << endl;
        }

        else if (toLower(input) == "quit" || toLower(input) == "q")
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


