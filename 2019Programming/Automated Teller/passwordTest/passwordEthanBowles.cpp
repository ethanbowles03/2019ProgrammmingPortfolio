//Made by Ethan Bowles
//Finished

#include <iostream>
#include <string>

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[5] = {'B','K','L','X','R'};//Any char will work
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[0] ^ key[1] ^ key[2] ^ key[3] ^ key[4] ^ 6;

    return output;
}

string usrPass;

int main()
{
	cout << "Enter a password: " << endl;
	cin >> usrPass;
    string encrypted = encryptDecrypt(usrPass);
    cout << "Encrypted:" << encrypted << "\n";
    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << "\n";

    return 0;
}
