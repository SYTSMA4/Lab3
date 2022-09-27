/*
 Sam Sytsma
 C++ Fall 2022
 Due: Sept. 28, 2022
 Lab 3 User and File I/O
 This Lab is a demo of my ability to use
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

string inputFile = "/Users/samsytsma/Documents/Lab3/Lab3/inMeanStd.dat.docx";
string outputFile = "outMeanStd.dat";
ofstream outfile;

//intitializing function
void userinput();
float fileinput();
float meancalc();
float stddevcalc();
float filecalc();
//global variables
float sum;
float sum2;
float mean;
float stddev;
float m;
int a;
int b;
int c;
int d;


int main(){
    outfile.open(outputFile);
    userinput();
    
    cout << "Mean: " << meancalc() << endl;
    cout << "Population Standard Deviation: " << stddevcalc() << endl;
    
    fileinput();
    filecalc();
    
    return 0;
}
void userinput(){
    cout << "Input 4 random intigers: \n";
    cin >> a >> b >> c >> d;
    
}
float fileinput(){
    ifstream infile;
    infile.open(inputFile);
   
    if(!infile)
        cout << "\nCan't find file\n";
    
    string readin;
    
    infile >> a >> b >> c >> d;

    return 0;
}
float meancalc(){     //user input mean
    mean = (a+b+c+d)/4.0;
    return mean;
}
float stddevcalc(){   //user input standard deviation
    float m = meancalc();
    sum2 = (pow((a-m),2)+pow((b-m),2)+pow((c-m),2)+pow((d-m),2));
    stddev = sqrtf(sum2/4);
    return stddev;
}
float filecalc(){
    outfile << "Mean: " << meancalc() << endl;
    outfile << "Population Standard Deviation: " << stddevcalc() << endl;
    
    return 0;
}
