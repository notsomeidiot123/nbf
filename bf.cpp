#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<fstream>
bool file_exists(std::string);
using std::string; using std::cout;
using std::endl; using std::ifstream;
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
        cout<< "size of file: " << size<<endl;
        cout << "starting interpreter... do not edit file\n";
        fclose(fptr);
        return 0;
    }
    else if(!file_exists(file)){
        if(file == "-h"){
            cout << "nbf - The Modular Brainf compiler\n";
            cout << "[*] = not implemented, but will be in the future\n";
            cout << "\t-h - Show this info\n";
            cout << "\t-m - Add new module. ||I AM NOT RESPONSIBLE FOR ANY ERRORS THAT OCCUR WHEN ADDING MODULES TO THE COMPILER[*]\n";
            cout << "\t-d - Remove module. Must specify module name[*]\n";
            cout << "\t-s - Stock Brainf, ignore all modules\n";
            cout << "\t-o - Set output file, for when compiled not interpreted[*]\n";
            return 0;
        }
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