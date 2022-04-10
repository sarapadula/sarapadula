
#define _CRT_SECURE_NO_WARNINGS
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
#include <time.h>
#include <iomanip> 
#include <sstream>
#include <ctime>
#include <regex>

using namespace std;

double compareString(string str1, string str2)
{
    int n = 0;
    if (str1.length() < str2.length())
    {
        n = (int)str1.length();
    }
    else
    {
        n = (int)str2.length();
    }
    double equals = 0.0;
    double length = (double)str1.length();
    double length2 = (double)str2.length();
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
string returnName(vector<string>& str)
{
    string name = "";
    for (int i = 1; i < 4; i++)
    {
        name = name + str[i];
    }
    return name;
}
void region(vector<string>& str)
{

    for (int i = 10; i < 14; i++)
    {
        cout << str[i] << " ";
    }
}
string returnRegion(vector<string>& str)
{
    string region = "";
    for (int i = 10; i < 14; i++)
    {
        region = region + str[i];
    }
    return region;
}
void colaAddress(vector<string>& str)
{

    for (int i = 17; i < 20; i++)
    {
        cout << str[i] << " ";
    }

}
string returnColaAddress(vector<string>& str)
{
    string colaAddress = "";
    for (int i = 17; i < 20; i++)
    {
        colaAddress = colaAddress;
    }
    return colaAddress;

}
void homeAddress(vector<string>& str)
{

    for (int i = 22; i < 27; i++)
    {
        cout << str[i] << " ";
    }
}
string returnHomeAddress(vector<string>& str)
{
    string homeAddress = "";
    for (int i = 22; i < 27; i++)
    {
        homeAddress = homeAddress + str[i];
    }
    return homeAddress;
}
void bPhone(vector<string>& str)
{

    for (int i = 29; i < 31; i++)
    {
        cout << str[i] << " ";
    }

}
string returnBPhone(vector<string>& str)
{
    string bPhone = "";
    for (int i = 29; i < 31; i++)
    {
        bPhone = bPhone + str[i];
    }
    return bPhone;

}
void hPhone(vector<string>& str)
{

    for (int i = 33; i < 34; i++)
    {
        cout << str[i] << " ";
    }
}
string returnHPhone(vector<string>& str)
{
    string hPhone = "";
    for (int i = 33; i < 34; i++)
    {
        hPhone = hPhone + str[i];
    }
    return hPhone;
}
string  returnCollege(vector<string>& str)
{
    string college = "";
    for (int i = 64; i < 67; i++)
    {
        college = college + str[i];
    }
    for (int i = 41; i < 43; i++)
    {
        college = college + str[i];
    }
    return college;
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
string returnDob(vector<string>& str)
{
    string dob = "";
    for (int i = 50; i < 53; i++)
    {
        dob = dob + str[i];
    }
    return dob;
}
void birthPlace(vector<string>& str)
{

    for (int i = 54; i < 56; i++)
    {
        cout << str[i] << " ";
    }
}
string returnBirthPlace(vector<string>& str)
{
    string birthPlace = "";
    for (int i = 54; i < 56; i++)
    {
        birthPlace = birthPlace + str[i];
    }
    return birthPlace;
}
void wife(vector<string>& str)
{

    for (int i = 72; i < 74; i++)
    {
        cout << str[i] << " ";
    }
}
string returnWife(vector<string>& str)
{
    string wife = "";
    for (int i = 72; i < 74; i++)
    {
        wife = wife + str[i];
    }
    return wife;
}
void kids(vector<string>& str)
{

    for (int i = 74; i < 81; i++)
    {
        cout << str[i] << " ";
    }
}
string returnKids(vector<string>& str)
{
    string kids = "";
    for (int i = 74; i < 81; i++)
    {
        kids = kids + str[i];
    }
    return kids;
}
void experience(vector<string>& str)
{

    for (int i = 81; i < 85; i++)
    {
        cout << str[i] << " ";
    }
}
string returnExperience(vector<string>& str)
{
    string experience = "";
    for (int i = 81; i < 85; i++)
    {
        experience = experience + str[i];
    }
    return experience;
}
void parents(vector<string>& str)
{

    for (int i = 59; i < 64; i++)
    {
        cout << str[i] << " ";
    }
}
string returnParents(vector<string>& str)
{
    string parents = "";
    for (int i = 59; i < 64; i++)
    {
        parents = parents + str[i];
    }
    return parents;
}
void committee(vector<string>& str)
{

    for (int i = 99; i < 105; i++)
    {
        cout << str[i] << " ";
    }
}
string returnCommittee(vector<string>& str)
{
    string committee = "";
    for (int i = 99; i < 105; i++)
    {
        committee = committee + str[i];
    }
    return committee;
}
void create(int user, int computer, double time, string filename, string countfile)
{
    fstream fout;
    fout.open("data\\chat_statistics.csv", ios::out | ios::app);
    int number;
    int iterations = 0;

    ifstream input_file(countfile);
    while (input_file >> number)
    {
        iterations = iterations + number;

    }

    input_file.close();

    fout << iterations << ","
        << filename << ","
        << user << ","
        << computer << ","
        << time << "\n";

}
struct ChatSession
{
public:
    ChatSession(
        int chatid,
        string chatFile,
        int user,
        int comp,
        int time
    ) {
        ChatId = chatid;
        ChatFile = chatFile;
        User = user;
        Comp = comp;
        Time = time;

    }
    void display()
    {
        cout << "Chat Id: " << ChatId << endl;
        cout << "Chat File: " << ChatFile << endl;
        cout << "User Chats: " << User << endl;
        cout << "Computer Chats: " << Comp << endl;
        cout << "Time Elapsed: " << Time << endl;
    }

    int ChatId;
    string ChatFile;
    int User;
    int Comp;
    int Time;
};



int main()
{
    cout << "****** Welcome to the District 122 Information Bot ******" << endl;
    cout << "Would you like to examine your previous chat sessions or would you like to start a new chat session?" << endl;
    cout << "1. Examine Previous Chat Sessions" << endl;
    cout << "2. Start a New Chat Session" << endl;
    int answer;
    cin >> answer;
    if (answer == 1)
    {
        cout << "*** Let's Examine Your Previous Chat Sessions *****" << endl;
        cout << "Please Enter the Number of what information you would like to know." << endl;
        cout << "1. SUMMARY OF ALL DATA" << endl;
        cout << "2. SUMMARY OF ONE CHAT SESSION" << endl;
        cout << "3. SHOW FULL CHAT LOG OF A CHAT SESSION" << endl;
        int selection;
        cin >> selection;

        if (selection == 1)
        {
            vector<ChatSession> chats;
            ifstream inputFile;
            inputFile.open("data\\chat_statistics.csv");
            string line = "";
            getline(inputFile, line);
            line = "";

            while (getline(inputFile, line))
            {
                int chatId;
                string chatFile;
                int userCount;
                int compCount;
                int time;
                string tempString = "";



                stringstream inputString(line);

                getline(inputString, tempString, ',');
                chatId = atoi(tempString.c_str());
                getline(inputString, chatFile, ',');
                tempString = "";
                getline(inputString, tempString, ',');
                userCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                compCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                time = atoi(tempString.c_str());


                ChatSession chat(chatId, chatFile, userCount, compCount, time);
                chats.push_back(chat);

                line = "";
            }
            int numberOfUsers = 0;
            int numberOfComps = 0;
            int timeElapsed = 0;
            for (auto chat : chats)
            {
                numberOfUsers = numberOfUsers + chat.User;
                numberOfComps = numberOfComps + chat.Comp;
                timeElapsed = timeElapsed + chat.Time;

            }
            cout << "Total Number Of User Chats: " << numberOfUsers << endl;
            cout << "Total Number Of Computer Chats: " << numberOfComps << endl;
            cout << "Total Time Elapsed: " << timeElapsed << " Seconds" << endl;

        }
        else if (selection == 2)
        {
            cout << "What Chat Session would you like a summary of?" << endl;
            int chatsession = 0;
            cin >> chatsession;
            vector<ChatSession> chats;
            ifstream inputFile;
            inputFile.open("data\\chat_statistics.csv");
            string line = "";
            getline(inputFile, line);
            line = "";

            while (getline(inputFile, line))
            {
                int chatId;
                string chatFile;
                int userCount;
                int compCount;
                int time;
                string tempString = "";



                stringstream inputString(line);

                getline(inputString, tempString, ',');
                chatId = atoi(tempString.c_str());
                getline(inputString, chatFile, ',');
                tempString = "";
                getline(inputString, tempString, ',');
                userCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                compCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                time = atoi(tempString.c_str());

                ChatSession chat(chatId, chatFile, userCount, compCount, time);
                chats.push_back(chat);

                line = "";
            }
            cout << "Chat ID: " << chats[chatsession].ChatId << endl;
            cout << "Chat File: " << chats[chatsession].ChatFile << endl;
            cout << "User Chats: " << chats[chatsession].User << endl;
            cout << "Computer Chats: " << chats[chatsession].Comp << endl;
            cout << "Time Elapsed: " << chats[chatsession].Time << " Seconds" << endl;
            //auto pred = [chatsession](const ChatSession& item)
           // {
           //     return item.ChatId == chatsession;
           // };

          //find_if (begin(chats), end(chats), pred) != end(chats);




        }
        else if (selection == 3)
        {
            vector<ChatSession> chats;
            ifstream inputFile;
            inputFile.open("data\\chat_statistics.csv");
            string line = "";
            getline(inputFile, line);
            line = "";

            while (getline(inputFile, line))
            {
                int chatId;
                string chatFile;
                int userCount;
                int compCount;
                int time;
                string tempString = "";



                stringstream inputString(line);

                getline(inputString, tempString, ',');
                chatId = atoi(tempString.c_str());
                getline(inputString, chatFile, ',');
                tempString = "";
                getline(inputString, tempString, ',');
                userCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                compCount = atoi(tempString.c_str());
                tempString = "";
                getline(inputString, tempString, ',');
                time = atoi(tempString.c_str());

                ChatSession chat(chatId, chatFile, userCount, compCount, time);
                chats.push_back(chat);

                line = "";
            }
            int session = 0;
            cout << "What chat session would you like to see the full chat log of?" << endl;
            cin >> session;
            string x;
            ifstream inFile;
            inFile.open(chats[session].ChatFile);
            if (!inFile)
            {
                cout << "Unable to open file";
                exit(1);
            }

            while (inFile >> x)
            {
                cout << x << endl;
            }

            inFile.close();

        }
        else
        {
            cout << "That is not valid" << endl;
            return 0;
        }

    }
    else if (answer == 2)
    {

        int userUtter = 0;
        int compUtter = 0;
        string year;
        string month;
        string day;
        string hour;
        string min;
        cout << "***** Welcome to the District 122 Information Bot *******" << endl;
        cout << "What is the year?" << endl;
        cin >> year;
        cout << "What is the month?" << endl;
        cin >> month;
        cout << "What is the day?" << endl;
        cin >> day;
        cout << "What is the hour?" << endl;
        cin >> hour;
        cout << "What is the minutes?" << endl;
        cin >> min;

        string fullstring = year + "_" + month + "_" + day + "_" + hour + "_" + min;


        string filename = fullstring;
        ofstream sessionFile;
        sessionFile.open((("data\\chat_sessions\\" + filename + ".txt").c_str()), ios::app);
        vector<string> str;
        string countname = "data\\count.txt";
        ofstream countfile;
        countfile.open(countname, ios::app);
        int count = 1;
        countfile << count << "\n";


        fstream myfile("data\\output.txt");

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
        cout << "******* Welcome to the SC District Chat Bot *******" << endl;
        int i = 1;
        while (i == 1)
        {
            string input = "";
            cout << endl;
            cout << "What would you like to know about the representative of district 122?" << endl;
            cout << "Enter 'quit' or 'q' to exit the program." << endl;
            clock_t start;
            clock_t end;
            start = clock();

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
            userUtter++;
            sessionFile << "User: " << input << "\n" << "\n";
            cout << endl;

            if (compareString(toLower(input), "tell me everything") > 70 || compareString(toLower(input), "tell me all information") > 70 || compareString(toLower(input), "everything") > 70 || compareString(toLower(input), "all information") > 70 || compareString(toLower(input), "i want to know all information") > 70 || compareString(toLower(input), "i want to know all everything") > 70)
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
                compUtter++;



                sessionFile << "Computer: " << "\n" << "Name: " << returnName(str) << "\n";
                sessionFile << "Region: " << returnRegion(str) << "\n";
                sessionFile << "Colmbia Address: " << returnColaAddress(str) << "\n";
                sessionFile << "Home Address: " << returnHomeAddress(str) << "\n";
                sessionFile << "Business Phone: " << returnBPhone(str) << "\n";
                sessionFile << "Home Phone: " << returnHPhone(str) << "\n";
                sessionFile << "Education: " << returnCollege(str) << "\n";
                sessionFile << "DOB: " << returnDob(str) << "\n";
                sessionFile << "Birth Place: " << returnBirthPlace(str) << "\n";
                sessionFile << "Spouse: " << returnWife(str) << "\n";
                sessionFile << "Children: " << returnKids(str) << "\n";
                sessionFile << "Job Experience: " << returnExperience(str) << "\n";
                sessionFile << "Parents: " << returnParents(str) << "\n";
                sessionFile << "Committee: " << returnCommittee(str) << "\n";
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

                compUtter++;

                sessionFile << "Computer: " << "\n" << "Name: " << returnName(str) << "\n";
                sessionFile << "Region: " << returnRegion(str) << "\n";
                sessionFile << "Education: " << returnCollege(str) << "\n";
                sessionFile << "DOB: " << returnDob(str) << "\n";
                sessionFile << "Birth Place: " << returnBirthPlace(str) << "\n";
                sessionFile << "Spouse: " << returnWife(str) << "\n";
                sessionFile << "Children: " << returnKids(str) << "\n";
                sessionFile << "Job Experience: " << returnExperience(str) << "\n";
                sessionFile << "Parents: " << returnParents(str) << "\n";

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

                compUtter++;
                sessionFile << "Computer: " << "\n" << "Columbia Address: " << returnColaAddress(str) << "\n";
                sessionFile << "Home Address: " << returnHomeAddress(str) << "\n";
                sessionFile << "Business Phone: " << returnBPhone(str) << "\n";
                sessionFile << "Home Phone: " << returnHPhone(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "home phone number") > 70 || compareString(toLower(input), "home phone") > 70 || compareString(toLower(input), "what is their home phone number") > 70)
            {
            cout << "Home Phone: ";
            hPhone(str);
            cout << endl;

            compUtter++;
            sessionFile << "Computer: " << "\n";
            sessionFile << "Home Phone: " << returnHPhone(str) << "\n";

            continue;

            }
            else if (compareString(toLower(input), "businesss phone number") > 70 || compareString(toLower(input), "business phone") > 70 || compareString(toLower(input), "what is their business phone number") > 70)
            {
            cout << "Business Phone: ";
            bPhone(str);
            cout << endl;

            compUtter++;
            sessionFile << "Computer: " << "\n";
            sessionFile << "Business Phone: " << returnBPhone(str) << "\n";

            continue;

            }
            else if (compareString(toLower(input), "phone number") > 70 || compareString(toLower(input), "phone") > 70 || compareString(toLower(input), "what is their phone number") > 70)
            {
            cout << "Business Phone: ";
            bPhone(str);
            cout << endl;

            cout << "Home Phone: ";
            hPhone(str);
            cout << endl;

            compUtter++;
            sessionFile << "Computer: " << "\n";
            sessionFile << "Business Phone: " << returnBPhone(str) << "\n";
            sessionFile << "Home Phone: " << returnHPhone(str) << "\n";

            continue;

            }

            else if (compareString(toLower(input), "name") > 70 || compareString(toLower(input), "tell me the rep name") > 70 || compareString(toLower(input), "tell me the repo name") > 70 || compareString(toLower(input), "tell me the representative name") > 70 || compareString(toLower(input), "what is the rep name") > 70 || compareString(toLower(input), "what is the representative name") > 70 || compareString(toLower(input), "what is the repo name") > 70 || compareString(toLower(input), "what is their name") > 70 || compareString(toLower(input), "tell me their name") > 70)
            {
                name(str);
                cout << endl;

                compUtter++;

                sessionFile << "Computer: " << "\n" << "Name: " << returnName(str) << "\n";

                continue;



            }
            else if (compareString(toLower(input), "region") > 70 || compareString(toLower(input), "tell me the rep region") > 70 || compareString(toLower(input), "tell me the repo region") > 70 || compareString(toLower(input), "tell me the representative region") > 70 || compareString(toLower(input), "what region does the rep work in") > 70 || compareString(toLower(input), "what region does the repo work in") > 70 || compareString(toLower(input), "region they represent") > 70 || compareString(toLower(input), "what region do they represent") > 70)


            {
                region(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Region: " << returnRegion(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "columbia address") > 70 || compareString(toLower(input), "tell me their columbia address") > 70 || compareString(toLower(input), "what is their columbia address") > 70 || compareString(toLower(input), "what is their cola address") > 70 || compareString(toLower(input), "tell me their cola address") > 70 || compareString(toLower(input), "what is the rep columbia address") > 70 || compareString(toLower(input), "what is the representative columbia address") > 70 || compareString(toLower(input), "where are they in columbia") > 70 || compareString(toLower(input), "where are they in cola") > 70)
            {
                colaAddress(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Colmbia Address: " << returnColaAddress(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "home address") > 70 || compareString(toLower(input), "tell me their home address") > 70 || compareString(toLower(input), "what is their home address") > 70 || compareString(toLower(input), "tell me their home address") > 70 || compareString(toLower(input), "what is the rep home address") > 70 || compareString(toLower(input), "what is the representative home address") > 70 || compareString(toLower(input), "tell me the rep home address") > 70 || compareString(toLower(input), "tll me the representative home address") > 70 || compareString(toLower(input), "where do they live") > 70)
            {
                homeAddress(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Home Address: " << returnHomeAddress(str) << "\n";

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
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Colmbia Address: " << returnColaAddress(str) << "\n";
                sessionFile << "Home Address: " << returnHomeAddress(str) << "\n";
                continue;

            }
            else if (compareString(toLower(input), "alma mater") > 70 || compareString(toLower(input), "tell me their alma mater") > 70 || compareString(toLower(input), "what is their alma mater") > 70 || compareString(toLower(input), "tell me their educational background") > 70 || compareString(toLower(input), "what is their educational background") > 70 || compareString(toLower(input), "where did they go to college") > 70 || compareString(toLower(input), "where did the rep go to college") > 70 || compareString(toLower(input), "where did the representative go to college") > 70 || compareString(toLower(input), "representative alma mater") > 70)

            {
                college(str);
                cout << endl;
                compUtter++;

                sessionFile << "Education: " << returnCollege(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "college") > 70 || compareString(toLower(input), "university") > 70 || compareString(toLower(input), "representative college") > 70 || compareString(toLower(input), "where did they go to school") > 70 || compareString(toLower(input), "tell me where they went to school") > 70 || compareString(toLower(input), "where did the rep go to school") > 70 || compareString(toLower(input), "tell me where the rep went to school") > 70 || compareString(toLower(input), "representative educational background") > 70)

            {
                college(str);
                cout << endl;
                compUtter++;
                sessionFile << "Education: " << returnCollege(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "birthday") > 70 || compareString(toLower(input), "date of birth") > 70 || compareString(toLower(input), "dob") > 70 || compareString(toLower(input), "when is their birthday") > 70 || compareString(toLower(input), "when were they born") > 70 || compareString(toLower(input), "when was the rep born") > 70 || compareString(toLower(input), "when was the representative born") > 70 || compareString(toLower(input), "what is their date of birth") > 70 || compareString(toLower(input), "what is their dob") > 70)
            {
                dob(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "DOB: " << returnDob(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "birthplace") > 70 || compareString(toLower(input), "birth place") > 70 || compareString(toLower(input), "where are they from") > 70 || compareString(toLower(input), "where is the representative from") > 70 || compareString(toLower(input), "where is the rep from") > 70 || compareString(toLower(input), "where is the repo from") > 70 || compareString(toLower(input), "where were they born") > 70 || compareString(toLower(input), "where was the rep born") > 70 || compareString(toLower(input), "where was the representative born") > 70)
            {
                birthPlace(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Birth Place: " << returnBirthPlace(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "spouse") > 70 || compareString(toLower(input), "wife") > 70 || compareString(toLower(input), "are they married") > 70 || compareString(toLower(input), "who are they married to") > 70 || compareString(toLower(input), "who is their spouse") > 70 || compareString(toLower(input), "representative spouse") > 70 || compareString(toLower(input), "rep spouse") > 70 || compareString(toLower(input), "representative wife") > 70 || compareString(toLower(input), "rep wife") > 70)
            {
                wife(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Spouse: " << returnWife(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "kids") > 70 || compareString(toLower(input), "children") > 70 || compareString(toLower(input), "do they have kids") > 70 || compareString(toLower(input), "do they have children") > 70 || compareString(toLower(input), "who are their kids") > 70 || compareString(toLower(input), "does the rep have kids") > 70 || compareString(toLower(input), "does the representative have kids") > 70 || compareString(toLower(input), "does he have kids") > 70 || compareString(toLower(input), "who are his kids") > 70)

            {
                kids(str);
                cout << endl;
                compUtter++;

                sessionFile << "Computer: " << "\n" << "Children: " << returnKids(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "parents") > 70 || compareString(toLower(input), "who are their parents") > 70 || compareString(toLower(input), "rep parents") > 70 || compareString(toLower(input), "representative parents") > 70 || compareString(toLower(input), "tell me the rep parents") > 70 || compareString(toLower(input), "tell me the representative parents") > 70)
            {
                parents(str);
                cout << endl;
                compUtter++;
                sessionFile << "Computer: " << "\n" << "Parents: " << returnParents(str) << "\n";

                continue;

            }
            else if (compareString(toLower(input), "family") > 70 || compareString(toLower(input), "tell me about their family") > 70 || compareString(toLower(input), "rep family") > 70 || compareString(toLower(input), "representative family") > 70 || compareString(toLower(input), "who is their family") > 70 || compareString(toLower(input), "tell me about his family") > 70 || compareString(toLower(input), "who is his family") > 70 || compareString(toLower(input), "their family") > 70 || compareString(toLower(input), "tell me about rep family") > 70)
            {
                cout << "Parents: ";
                parents(str);
                cout << endl;
                cout << "Children: ";
                kids(str);
                cout << endl;
                cout << "Spouse: ";
                wife(str);
                cout << endl;
                compUtter++;

                sessionFile << "Computer: " << "\n" << "Parents: " << returnParents(str) << "\n";
                sessionFile << "Spouse: " << returnWife(str) << "\n";
                sessionFile << "Children: " << returnKids(str) << "\n";


                continue;

            }
            else if (compareString(toLower(input), "job experience") > 70 || compareString(toLower(input), "work experience") > 70 || compareString(toLower(input), "where did they work") > 70 || compareString(toLower(input), "representative job experience") > 70 || compareString(toLower(input), "rep job experience") > 70 || compareString(toLower(input), "where did the rep work") > 70 || compareString(toLower(input), "where did the representative work") > 70 || compareString(toLower(input), "rep work experience") > 70 || compareString(toLower(input), "representative work experience") > 70)
            {
                experience(str);
                cout << endl;
                compUtter++;

                sessionFile << "Computer: " << "\n" << "Job Experience: " << returnExperience(str) << "\n";

                continue;
            }
            else if (compareString(toLower(input), "what committees is the repo on") > 70 || compareString(toLower(input), "what committees is the rep on") > 70 || compareString(toLower(input), "what committees is the representative on") > 70 || compareString(toLower(input), "committee assignments") > 70 || compareString(toLower(input), "what committees are they on") > 70 || compareString(toLower(input), "rep committee assignments") > 70 || compareString(toLower(input), "what committees are they on") > 70 || compareString(toLower(input), "representative committees") > 70 || compareString(toLower(input), "rep committees") > 70)

            {
                committee(str);
                cout << endl;
                compUtter++;

                sessionFile << "Computer: " << "\n" << "Committee: " << returnCommittee(str) << "\n";


                continue;
            }

            else if (compareString(toLower(input), "quit") > 70 || compareString(toLower(input), "q") > 70)
            {
                end = clock();

                // Calculating total time taken by the program.
                double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "Time taken by program is : " << fixed
                    << time_taken << setprecision(5);
                cout << " sec " << endl;
                cout << "Goodbye";
                create(userUtter, compUtter, time_taken, "data\\chat_sessions\\" + filename + ".txt", countname);
                i = 0;
            }
            else if (!input.empty())
            {
                cout << "Invalid entry or we do not have that information. Try again." << endl;


                continue;
            }



        }
    }
    else
    {
        cout << "Not a valid response. Goodbye." << endl;
        return 0;
    }
    return 0;

}
