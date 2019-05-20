#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[5] = {'B','K','L','X','R'};//Any char will work
    string output = toEncrypt;
        for (int i = 0; i < toEncrypt.size(); i++){
            output[i] = toEncrypt[i] ^ key[0] ^ key[1] ^ key[2] ^ key[3] ^ key[4] ^ 6;
            i++;
    }
    return output;
}

void checkLog(){
    string name, us, ps, user, pass;
    char choice;
    cout << "Enter your username: " << endl;
    cin >> user;
    user = encryptDecrypt(user);
    cout << "Enter your password: " << endl;
    cin >> pass;
    pass = encryptDecrypt(pass);
    ifstream read("data\\" + user + ".txt");
    getline(read,us);
    getline(read,ps);
    getline(read,name);
    name = encryptDecrypt(name);

    if(user == us && pass == ps){
        cout << "Welcome " + name << endl;

    } else {
        cout << "Your username and password is incorrect" << endl;
        cout << "Would you like to try again?(Y/N)" << endl;
        cin >> choice;
        if(choice == 'Y' || 'y'){
            checkLog();
        } else{
            read.close();
        }
    }
}

void createAccount(){
    string name, user, pass;
    char choice;
    cout << "Please enter your first name: " << endl;
    cin >> name;
    cout << "Enter a username for your account: " << endl;
    cin >> user;
    cout << "Enter a password for your account: " << endl;
    cin >> pass;
    cout << "Is this the info your wish to use:(Y/N) \n" + name + "\n" + user + "\n" + pass << endl;
    cin >> choice;
    if(choice == 'Y'||'y'){
        user = encryptDecrypt(user);
        pass = encryptDecrypt(pass);
        name = encryptDecrypt(name);
        ofstream file("data\\" + user + ".txt");
        file << user << endl << pass << endl << name << endl;
        cout << "You are all good to go" << endl;
        file.close();
    } else{
        createAccount();
    }
}

int main() {
    int choice;
    cout << "Welcome to the automatic bank teller: " << endl;
    cout << "Please choose one of the following" << endl;
    cout << "1.Sign Up \n2.Login" << endl;
    cin >> choice;
    if(choice == 1){
        createAccount();
    }else{
        checkLog();
    }

}