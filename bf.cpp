#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<fstream>
bool file_exists(std::string);
using namespace std;
int main(int argc, char* argv[]){
    string file = argv[1];
    string options[4]; //four supported options
    int j = 1;
    string output;
    for(int i = 1; i < argc; i++){
        if(argv[i] == "-o"){
            output = argv[i+1];
            j+=1;
            continue;
        }
        options[i-j] = argv[i];
    }
    int *ptr[3000];
    int pos = 0;
    //check for output
    if(file_exists(file)){
        FILE *fptr = fopen(file.c_str(), "r");
        int size = 0;
        fseek(fptr, 0l, SEEK_END);
        size = ftell(fptr);
        cout<< "size of" << size<<endl;
        fclose(fptr);
    }
    else if(!file_exists(file)){
        cout << "nbf: Input file, " << file << ", does not exist\n";
    }
    else{
        cout << "nbf: no input file\n";
    }
}
bool file_exists(string file){
    ifstream f;
    f.open(file);
    return f.good();
}