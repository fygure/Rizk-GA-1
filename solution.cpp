// 2436 (fall 2022) GA1
// Solution program that solves the problem listed in the pdf
//=======================================================================//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "ArgumentManager.h"
#include "stack.h"
#include "linkedlist.h"
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
    vector<string> tempVector;
    LinkedList myList;

    while (inFS >> line) {
        if (line == "Bar1") {
            continue;
        }
        else if (line == "Bar2") {
            continue;
        }

        string decodedID = decodeFunc(line);
        tempVector.push_back(decodedID);

    }
    inFS.close();


    sort(tempVector.begin(), tempVector.end());
    for(auto x : tempVector)
        myList.append(x);

    myList.print();

    
    return 0;
}
//=======================================================================//
// FUNCTION DEFINITIONS
//=======================================================================//
string decodeFunc(string encodedID)
{
// STACK FOR REVERSAL
    Stack<int> mystack;

    for(int i=0; i<encodedID.size(); i++)
    {
        // Push index of cur '('
        if (encodedID[i] == '(')
            mystack.push(i);

        // Reverse substring until ')'
        else if (encodedID[i] == ')')
        {
            // Using reverse function from <algorithm> stl 
            reverse(encodedID.begin() + mystack.peek() + 1, encodedID.begin() + i);
            mystack.pop();
        }
    }

// Store modified strings
    string res = "";
    for(int i=0; i<encodedID.size(); i++)
    {
        if (encodedID[i] != ')' && encodedID[i] != '(')
            res += (encodedID[i]);
    }

// Print debugger
    //cout << res << endl;
    return res;

}
//=======================================================================//
//=======================================================================//
//=======================================================================//