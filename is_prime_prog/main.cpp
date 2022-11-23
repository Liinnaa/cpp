#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long i, n;
    string rawline; 
  
    while (cin >> n){
        bool is_prime = true;

        if(n == 0 || n == 1)
            is_prime = false;

        //check if prime
        for (i = 2; i <= std::sqrt(n); ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        cout << n << " is a prime: ";
        if (is_prime)
            cout << "True\n";
        else
            cout << "False\n";
        
        if (cin.peek() == '\n') {
            break;
        }
    }
    
    return 0;
}