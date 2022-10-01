// 2436 (fall 2022) GA1
// Solution program that solves the problem listed in the pdf
//=======================================================================//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ArgumentManager.h"
#include "stack.h"
//=======================================================================//
using namespace std;
//=======================================================================//
// FUNCTION DECLARATIONS
//=======================================================================//
string decodeFunc(string encodedID);
//=======================================================================//
int main(int argc, char *argv[]) {

    // I/O and test case handler
    // ArgumentManager am(argc, argv);
    // ifstream inFS(am.get("input"));
    // ifstream cmdFS(am.get("command"));
    // ofstream outFS(am.get("output"));



//Receive inputs
    ifstream inFS("input11.txt");
    string line;

    bool b1, b2;

    while (inFS >> line) {
        if (line == "Bar1") {
            b1 = true;
            b2 = false;
            continue;
        }
        else if (line == "Bar2") {
            b1 = false;
            b2 = true; 
            continue;
        }

        string decodedID = decodeFunc(line);
        if (b1)
        {
            //insert to LL
        }
        else if (b2)
        {
            //insert to LL
        }




    }




    inFS.close();





    
    return 0;
}
//=======================================================================//
// FUNCTION DEFINITIONS
//=======================================================================//
string decodeFunc(string encodedID)
{
    // STACK NEEDED FOR REVERSAL
    //cout << encodedID << endl;

    string res = "";

    for(int i=0; i<encodedID.size(); i++)
    {
        if (encodedID[i] != '(')
        {
            res += encodedID[i];
        }
    }





    return "";

}
//=======================================================================//
//=======================================================================//
//=======================================================================//