#include <iostream>
using namespace std;

int main()
{
    int i;
    string input;
    string is_a_prime = "True";

    cout << "Enter number: \n";
    // cin >> input;

    while(getline(cin, input)){
        if(input == 0 || input == 1)
            is_a_prime = "False";

        for (i = 2; i <= input/2; i++){
            if(input%i == 0){
                is_a_prime = "False";
                break;
            }
        }
    }

    cout << input << " is a prime: " << is_a_prime;
    return 0;
}
