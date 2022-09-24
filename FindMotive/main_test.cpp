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
    cout << "Motive: ";
    cin >> motive;

    if(!open(path).is_open()){
        cout << "The file " << path << " could not be opened";
        return 1;
    }
    while(file >> word){
        if(word.find(motive) != string::npos)
            occurence++;
    }

    cout << "The file " << path << " contains " << occurence << " words containing the motive " << motive;

    return 0;
}
