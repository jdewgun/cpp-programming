/*
Section Challenge
-----------------
Create a substitution cipher.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    int selection{};

    string message{};
    cout << "Please Enter Message: " << endl;
    getline(cin, message);

    cout << "Please Select Operation to execute \nEncrypt Message (1) \nDecrypt Message (2) \n: ";

    cin >> selection;

    if (selection == 1)
    {
        // Encrypt Message
        for (size_t i{0}; i < message.length(); i++)
        {
            for (size_t j{0}; j < alphabet.length(); j++)
            {
                if (message.at(i) == alphabet.at(j))
                {
                    message.at(i) = key.at(j);
                    break;
                }
            }
        }

        cout << "Encrypted Message: " << message << endl;
    }
    else if (selection == 2)
    {
        for (size_t i{0}; i < message.length(); i++)
        {
            for (size_t j{0}; j < key.length(); j++)
            {
                if (message.at(i) == key.at(j))
                {
                    message.at(i) = alphabet.at(j);
                    break;
                }
            }
        }
        cout << "Decrypted Message: " << message << endl;
    }
    else
    {
        cout << "Invalid Choice";
    }
}
