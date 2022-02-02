
#include <iostream>
#include<fstream>
#include<string>

using namespace std;

void parser(char* S)
{
    string filename("output.txt");
    ofstream file_out;
    file_out.open(filename, std::ios_base::app);
    int n = strlen(S);
    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        if (S[i] == '>') {
            start = i + 1;
            break;
        }
    }
    while (S[start] == ' ') {
        start++;
    }
    for (int i = start; i < n; i++) {
        if (S[i] == '<') {
            end = i - 1;
            break;
        }
    }
    for (int j = start; j <= end; j++) {
        file_out << S[j];
    }

    file_out << "\t";
}


int main()
{
    string line;
    ifstream myfile("fullPage.txt");
    
    int district;
    cout << "Enter the number of the SC district you would like information about.";
    cin >> district;
    if (district == 122)
    {
        if (myfile.is_open())
        {
            while (getline(myfile, line))

            {
                int size = 10000;
                char* str = new char[size];
                for (int i = 0; i <= line.length(); i++)
                {

                    str[i] = line[i];

                }
                parser(str);

                delete[] str;

            }
            myfile.close();

        }
        else cout << "unable to open file";


        return 0;
    }
    else
    {
        cout << "This program only contains information about district 122 sorry :(";
        return 0;
    }
}

