#include <iostream>
#include <string>
using namespace std;

int main ()
{
    const string secret_pass = "Sulley";
    string input;
    int attempts = 0;
    const int max_attempts = 5;
    do
    {
        cout << " enter password:";
        cin >> input;
        attempts++;

        if (input == secret_pass){
            cout << "access granted" << endl;
            break;

        }
        if(attempts == max_attempts)
        {cout <<" locked out"<< endl;
        break;
        }
        cout << "incorrect password, try again." << endl;
    }
    while (true);

    return 0;
    
}
