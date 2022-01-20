#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void showDataTypes() {

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of wchar_t : "  << sizeof(wchar_t) << "\n" << endl;

    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << "\n" << endl;

    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << "\n" << endl;
}
void demoStrings(){

    string tmp_str = "Hello World";
    cout << "Length of -" << tmp_str << " - is: " << tmp_str.size() << endl;
    for (int i=0; i<tmp_str.size(); i++){
        cout << "\t char at position " << (i+1) << "is -" << tmp_str[i] << endl;

    }

    string str_suffix = "<-> CSCE 240";
    tmp_str += str_suffix;
    cout << "\nAppended string - " << tmp_str << endl;
    cout << "\t Length of appended string - " << tmp_str << " - is: " << tmp_str.size() << endl;
}
void demoReadFile(){

    string file_name = "/input.txt";
    string line;

    ifstream myfile(file_name);
    if (myfile.is_open()){

        while( getline (myfile, line)){
            cout << line << '\n';
        }

        myfile.close();
    } else
        cout << "Unable to open file - " << file_name << endl;
}

void demoReadWriteFile(){

    string in_file_name = "/input.txt";
    string out_file_name = "/output.txt";
    string line;

    ifstream in_myfile (in_file_name);
    ofstream out_myfile (out_file_name);

    if(in_myfile.is_open()){
        if(out_myfile.is_open()){
            while ( getline (in_myfile, line) ){
                cout << "\t reading .. -" << line << endl;
                string out_line = "A prefix -" + line + '\n';
                cout << "\t\t writing .. -" << out_line;
                out_myfile << out_line;
            }

            out_myfile.close();
        } else {
            cout << "Unable to open output file - " << out_file_name << endl;
        }
        in_myfile.close();
    } else
        cout << "Unable to open the input file -" << in_file_name << endl;
}

int main(int argc, char* argv[]){

    char command = 0;
    string str = "";

    cout << "Program name : " << argv[0] << endl;

    if(argc == 1){

        printf("\n No command passed. By default, will be printing data types.");
    }else {

        command = *argv[1];

        cout << "Command to run is -" << command << endl;

    }

    if(command == '0'){

        showDataTypes();
    }else if(command == '1'){
        demoStrings();
    }else if(command == '2'){

        demoReadFile();
    }else if(command == '3'){

        demoReadWriteFile();
    }

    return 0;
}