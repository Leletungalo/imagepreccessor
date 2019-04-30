#include <iostream>
#include <string>
#include <memory>
#include "image.h"
using namespace std;
int main(int argc, char const *argv[]){
    if (argc < 5){
        cout << "Input not correct" << endl;
    }else{
        if (string(argv[1]) == "-a"){
            string file1 = string(argv[2]);
            string file2 = string(argv[2]);
            string b = string(argv[4]);
            NGLLEL001::image leg(b);
            leg.load(file1);
            leg.load(file2);
            leg.save();
        }else if (string(argv[1]) == "-s"){
            cout << "subtract" << endl;
        }else if (string(argv[1]) == "-i"){
             cout << "invert" << endl;
        }else if (string( argv[1]) == "-l"){
             cout << "kjjhujhiu" << endl;
        }else if (string(argv[1] )== "-t"){
             cout << "8248jgg" << endl;
        }else{
             cout << "euhu852" << endl;
        }  
    }
    
    
    return 0;
}