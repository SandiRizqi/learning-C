#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>


using namespace std;
using namespace std::chrono;

class Timer {
    public:
        time_point<high_resolution_clock> start;
        time_point<high_resolution_clock> finish;
        
    void startTimer() {
        Timer::start = high_resolution_clock::now();
    };

    void finishTimer() {
        Timer::finish = high_resolution_clock::now();
    };

    double getDuration() {
        duration<double> elapsed = Timer::finish- Timer::start;
        return elapsed.count();
    }

};

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
    Timer myTimer;
    myTimer.startTimer();
    vector<vector<string> > csvData = readCSV(filename, ',');
    cout << "Memory allocation :"  << sizeof(csvData) << " byte" << endl;
    myTimer.finishTimer();
    cout << "The system spends : " << myTimer.getDuration() << " seconds" << endl;
    // for (const auto &row : csvData) {
    //     for (const auto &cell : row) {
    //         cout << cell << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}