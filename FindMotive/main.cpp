#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string path, word, motive;
    int occurence = 0;
    fstream file;

    cout << "Lien: ";
    cin >> path;
    
    file.open(path, ios::in);

    if(!file.is_open()){
        cout << "The file " << path << " could not be opened";
        return 1;
    }

    cout << "Motive: ";
    cin >> motive;

    while(file >> word){
        if(word.find(motive) != string::npos)
            occurence++;
    }

    cout << "The file " << path << " contains " << occurence << " words containing the motive " << motive;

    return 0;
}