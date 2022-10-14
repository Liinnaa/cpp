#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string word;
    int occurence = 0;
    //fstream file;
    
    //file.open(argv[1], ios::in);
    ifstream file(argv[1]);
    //condition if file doesn't exist
    if(file.fail()){
        cout << "The file " << argv[1] << " could not be opened \n";
        return 1;
    }

    //calculating occurences
    while(file >> word){
        if(word.find(argv[2]) != string::npos)
            occurence++;
    }

    cout << "The file " << argv[1] << " contains " << occurence << " words containing the motive " << argv[2] << "\n";

    return 0;
}