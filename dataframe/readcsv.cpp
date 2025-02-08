#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;

vector<vector<string> > readCSV (const string &filepath, char delimiter = ',') {
    vector<vector<string> > data;
    ifstream file(filepath);

    if (!file.is_open()) {
        cerr << "Error; Could not open file :" << filepath << endl;
        return data;
    }

    string line;
    cout << "reading data... ." << endl;
    while (getline(file, line))
    
    {
        vector<string> row;
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, delimiter))
        {
            row.push_back(cell);
        }

        data.push_back(row);
        
    }

    file.close();
    return data;
    
}

int main () {
    string filename;
    cout << "Masukan Path file CSV :" << endl;
    cin >> filename;
    vector<vector<string> > csvData = readCSV(filename, ',');
    for (const auto &row : csvData) {
        for (const auto &cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}