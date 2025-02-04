#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        string id;
        string major;
        ifstream in;
        ofstream out;
        Student(string inputName, string inputID, string inputMajor ) {
            Student::name = inputName;
            Student::id =  inputID;
            Student::major = inputMajor;
        }

        string stringify() {
            return name + " " + id + " " + major + "\n";
        }

        void save(string databaseName) {
            out.open(databaseName, ios::app);
            out << Student::stringify();
        }
};


int main() {
    
    string name, id, major;
    while (true) {
        cout << "INPUT STUDENT DATA" << endl;
        
        cout << "Name :" << endl;
        cin >> name;
        cout << "Id :" << endl;
        cin >> id;
        cout << "Major :" << endl;
        cin >> major;
        Student student(name, id, major);
        student.save("database.txt");
    }

    return 0;
}
