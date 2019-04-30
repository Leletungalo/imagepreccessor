#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
#include "image.h"
using namespace std;
NGLLEL001::image::image():data(new unsigned char[255]){
   
}

NGLLEL001::image::image(string OutPutFile,int x,int y):width(x), height(y), outputFile(OutPutFile){
    
}

NGLLEL001::image::image(const NGLLEL001::image& rhs){}
NGLLEL001::image::image(NGLLEL001::image&& rhs){
      data =  std::move(rhs.data);
    }
void NGLLEL001::image::save(){
   
    
}
/*void NGLLEL001::image::load(){
    string name = "";
    ifstream file(file1, ios::binary | ios::in);
    
    getline(file,name);
    while (getline(file,name)){
        char x[name.size() + 1];
        if (name.at(0) == '#'){
        }else{
            strcpy(x,name.c_str());
            stringstream s(x);
            s >> width;
            s >> height;
             int sum = width * height;
            unique_ptr<unsigned char[]> ptr(new unsigned char[sum]);
            data = move(ptr) ; 
            break;
        }
    }
    int count = 0;
    while (getline(file,name)){
        char x[name.size() + 1];
        if (name.at(0) == '#'){
        }else{
            strcpy(x,name.c_str());
            data[count] = *x;
            count++;
        }
    }
    file.close();
    cout << file1 << endl;
}*/

void NGLLEL001::image::load(string filename){
    string name = "";
    ifstream file(filename.c_str(), ios::binary | ios::in);
    
    getline(file,name);
    while (getline(file,name)){
        char x[name.size() + 1];
        if (name.at(0) == '#'){
        }else{
            strcpy(x,name.c_str());
            stringstream s(x);
            s >> width;
            s >> height;
            int sum = width * height;
            unique_ptr<unsigned char[]> ptr(new unsigned char[sum]);
            data = move(ptr); 
            break;
        }
    }
    getline(file,name);
    file.read((char*) data.get(), (width * height));
    /*int count = 0;
    char o;
    while (file.good()){
        file.get(o);
        data[count] = o;
        count++;
    }
    */
    file.close();
}

NGLLEL001::image::~image(){
    
}




