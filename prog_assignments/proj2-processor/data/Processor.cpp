

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include <cstring>
#include <algorithm>

using namespace std;

string toLower(std::string s) {
    transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return s;
}

void display(vector<string>& str)
{
    for (int i =0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
}
void contactInfo(vector<string>& str)
{
    string category;
    cout << "What information would you like to know about the SC Rep of District 122?" << endl;
    cout << "CONTACT" << endl;
    cout << "PERSONAL" << endl;
    cout << "COMMITTEE" << endl;
    cin >> category;
    if (toLower(category) == "contact")
    {

        string answer;
        cout << "What Contact Information would you like to know?" << endl;
        cin >> answer;
        if (toLower(answer) == "name")
        {
            for (int i = 1; i < 4; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "region")
        {
            for (int i = 10; i < 14; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "address")
        {
            string ad;
            cout << "Would you like Columbia address or Home address?" << endl;
            cin >> ad;
            if (toLower(ad) == "columbia")
            {
                for (int i = 17; i < 20; i++)
                {
                    cout << str[i] << " ";
                }
            }
            else if (toLower(ad) == "home")
            {
                for (int i = 22; i < 27; i++)
                {
                    cout << str[i] << " ";
                }
            }

        }
        else if (toLower(answer) == "phone" || toLower(answer) == "phone number")
        {
            string phone;
            cout << "Would you like Business or Home phone?" << endl;
            cin >> phone;
            if (toLower(phone) == "business")
            {
                for (int i = 29; i < 31; i++)
                {
                    cout << str[i] << " ";
                }
            }
            else if (toLower(phone) == "home")
            {
                for (int i = 33; i < 34; i++)
                {
                    cout << str[i] << " ";
                }
            }
        }
    }
    else if (toLower(category) == "personal")
    {
        string answer;
        cout << "What Personal Information would you like to know?" << endl;
        cin >> answer;
        if (toLower(answer) == "degree" || toLower(answer) == "education" || toLower(answer) == "college")
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
        else if (toLower(answer) == "birthday" || toLower(answer) == "dob"|| toLower(answer) == "birthdate")
        {
            for (int i = 50; i < 53; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "birthplace" || toLower(answer) == "from")
        {
            for (int i = 54; i < 56; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "spouse" || toLower(answer) == "wife")
        {
            for (int i = 72; i < 74; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "children" || toLower(answer) == "kids")
        {
            for (int i = 74; i < 81; i++)
            {
                cout << str[i] << " ";
            }
        }
        else if (toLower(answer) == "experience" || toLower(answer) == "occupation")
        {
            for (int i = 81; i < 85; i++)
            {
                cout << str[i] << " ";
            }
        }
        else
        {
            cout << "not valid entry";
        }
    }
    else if (toLower(category) == "committee")
    {
    for (int i = 99; i < 105; i++)
    {
        cout << str[i] << " ";
    }
    }
    else
    {
        cout << "not valid entry";
    }
    
}

int main()
{
    int district;
    vector<string> str;

    fstream myfile("output.txt");

    cout << "Welcome to the South Carolina District Processor!" << endl;
    cout << "Please enter the number of the SC district you would like more information about." << endl;
    cin >> district;
    if (district == 122)
    {
        string line;


        if (myfile.is_open())
        {
            
            while (myfile >> line)
            {
                str.push_back(line);
            }
           // cout << "Size of Vector= " << str.size() << endl;
           // display(str);
            cout << endl;
            contactInfo(str);
            myfile.close();
        }

    }
    else
    {
        cout << "This program only contains info on District 122" << endl;
    }

    return 0;

}

