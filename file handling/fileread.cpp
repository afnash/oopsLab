#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("test.txt");
    if (file.is_open()) { 
        string userInput;
        cout << "Enter the text you want to write to the file: ";
        getline(cin, userInput);
        file << userInput << endl; 
        file.close();
        cout << "Text written to file successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    ifstream readFile("test.txt");
    if (readFile.is_open()) {
        string fileContent;
        cout << "Reading the text from the file:" << endl;
        while (getline(readFile, fileContent)) { 
            cout << fileContent << endl; 
        }
        readFile.close();
    } else {
        cout << "Failed to open the file for reading." << endl;
    }

    return 0;
}