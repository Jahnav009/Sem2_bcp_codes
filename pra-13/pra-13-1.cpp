#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("example.txt");
    if (!inputFile) 
    {
        cout << "Failed to open the file." << endl;
        return 1;
    }
    int charCount = 0;
    char ch;
    while (inputFile.get(ch)) {
        charCount++;
    }
    inputFile.close();
    cout << "Number of characters in the file: " << charCount << endl;
    return 0;
}
