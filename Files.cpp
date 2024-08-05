#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
   
    char name[30];
    cout << "Enter item name to be inserted in exp file: ";
    cin.getline(name,30);

    ofstream object("exp.txt"); // Open file in append mode
    float cost;
    cout<< "Enter cost to be inserted: ";
    cin>> cost;

    object<< name<< "\t"<<cost<<"\n"; // Assuming tab-separated values
    object.close();

    cout << "Data written to file successfully." << endl;

    return 0;
}



