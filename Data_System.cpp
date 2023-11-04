#include <iostream>

using namespace std;


int User_record = 0;
const int record = 61;           /*The population of BSCS-1A (61). 'const int' allow us to only accept 61 
                                  user inputs.*/
string data_storage [record][6]; /*First array (record variable) is the row where the input of the user or 
                                  student would go. This has a limit of 61 rows, meaning that we can only 
                                  input 61 times before the program stop accepting user inputs. The second 
                                  array have 6 indexes or elements in it; this corresponds to the 6 data 
                                  that we want to get from the user: Name(0), Age(1), Gender(2), 
                                  Contact #(3), Address(4) & Email Address(5), a total of 6 indexes.*/
                                 
void Add_Data();
void View_Data();

int main(){

    int response;
    int response2;

    cout << '\n';
    cout << "         BSCS-1A IDENTIFICATION SYSTEM        \n";
    cout << '\n';

    do{
    cout << '\n';
    cout << "********************************************\n";
    cout << "********************MENU********************\n";
    cout << "********************************************\n";
    cout << '\n';
   
    cout << "           What do you want to do?           \n";
    cout << "---------------------------------------------\n";
    cout << "(1) Add Data\n";
    cout << "---------------------------------------------\n";
    cout << "(2) View Data\n";
    cout << "---------------------------------------------\n";
    cout << "(3) Exit\n";
    cout << "---------------------------------------------\n";
    cin >> response;

    if (response != 1 && response != 2 && response != 3)
    {
        cout << "Invalid Response. Please choose 1 to Add Data, 2 to View Data or 3 to Exit.\n";
    }
    else if (response == 1)
    {
        Add_Data();
    }
    else if (response == 2)
    {
        View_Data();
    }
    else if (response == 3)
    {
       cout << "Are you sure?\n";
       cout << "--------------------\n";
       cout << "(1) Yes\n";
       cout << "--------------------\n";
       cout << "(2) No\n";
       cout << "--------------------\n";
       cin >> response2;
           if (response2 == 1){
           cout << "Thank you! Rest assured that your information is well kept.\n";
           break;
           }else if (response2 == 2){
            cout << "\n";
           }
        }
    } while (response != 3 || response2 == 2);

    return 0;
}

void Add_Data()
{

string name, gender, address,contact_number, email;
int age;

cout << "Enter Full Name: ";
cin.ignore();
getline(cin, name);

cout << "Enter Age: ";
cin >> age;

cout << "Enter Gender: ";
cin.ignore();
cin >> gender;

cout << "Enter Contact Number: ";
cin.ignore();
cin >> contact_number;

cout << "Enter Address: ";
cin.ignore();
getline(cin, address);

cout << "Enter Email Address: ";
cin.ignore();
getline(cin, email);

data_storage[User_record][0] = name;
data_storage[User_record][1] = to_string(age);
data_storage[User_record][2] = gender;
data_storage[User_record][3] = contact_number;
data_storage[User_record][4] = address;
data_storage[User_record][5] = email;
User_record++;
}

void View_Data()
{
    if (User_record == 0)
    {
        cout << '\n';
        cout << "ERROR: There's No Data Found. Input Data First.\n";
        cout << '\n';
    }
    else
    {
        cout << "   Name   /  Age  /  Gender  /  Contact Number  /  Address  /  Email Address  " << '\n';
    
        for (int i = 0; i < User_record; i++){
            for (int j = 0; j < 6; j++){
                cout << data_storage[i][j] << "  /  ";
            }
            cout << "\n";
        }
    }
}

