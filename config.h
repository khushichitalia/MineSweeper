#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
using namespace std;

class Config {
    public:
        int columns;
        int rows;
        int mines;
        int height;
        int width;

        Config(string filePath) {
            ifstream file;
            file.open(filePath);
            string line;
            
            getline(file, line);
            columns = stoi(line);
            width = columns * 32;
            
            getline(file, line);
            rows = stoi(line);
            height = (rows * 32) + 100;
            
            getline(file, line);
            mines = stoi(line);

            file.close();
        }
};