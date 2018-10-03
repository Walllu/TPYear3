#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include <algorithm>
using namespace std;

const char FileName[] = "charcounter.cpp";

int main () {
    // This program should read in the source code of itself, and count, line by line, the number of non-blank characters in total
    string line;
    ifstream inMyStream (FileName);
    int c;

    if (inMyStream.is_open()) {
        // loop over the text in the file
         while(getline(inMyStream, line)){
                //cout<<line<<endl;
                //cout << typeid(line).name() << endl;
                line.erase(remove_if(line.begin(),line.end(),::isspace), line.end()); // remove all blank characters from the line string
                c+=line.length();
        }
    }
    inMyStream.close();
    cout << "\n" << "The source code of this program has " << c << " characters " << endl;
    return 0;
}
