#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;



class BaseStorageManager {
private:
    string adress;

    void insertDataToMemory(string line) {

    }
    vector<string> convertMemoryToData() {
        return {};
    }
public:
    void import() {
        try
        {
            ifstream file(adress);
            for (string line; getline(file, line);) {
                insertDataToMemory(line);
            }
            file.close();
        }
        catch (ifstream::failure e)
        {
            cerr << "Error reading file" << std::endl;
        }

    }
    void export() {
        try
        {
            ofstream file(adress, ofstream::trunc);
            vector<string> data = convertMemoryToData();
            for (int i = 0;i < data.size();i++) {
                file << data[i] << "\n";
            }
            file.close();
        }
        catch (ifstream::failure e)
        {
            cerr << "Error reading file" << std::endl;
        }
    }

};