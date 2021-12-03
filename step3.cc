/**
 * @file step3.cc
 * @author Alexander Nemecek
 * @brief  counts the line and characters from a given input
 * @version 0.1
 * @date 2021-12-02
 */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

/**
 * @brief - function to count the number of lines of a given string
 * @param s - string s is to be read in and its number of lines is returned
 * @return count - return count which is the number of lines of the string
 */
int countLine(string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '\n') {
            count++;
        }
    }
    cout << count << endl;
    return count;

}

/**
 * @brief - function to read in an input string and return the number of characters
 * @param s - string s is to be read in and its number of characters is returned
 * @return s.length() - the length of the string input is returned
 */
int countChar(string &s) {
    cout << s.length() << endl;
    return s.length();
}

/**
 * @brief - main function to output the reuslts of the prior two functions to the terminal
 * @return - reuturn 0 (exit code)
 */
int main(int argc, char** argv) {
    string first= "Ohio University";
    string second= "Athens";

    if (argc == 1) {
        countLine(first);
        countChar(second);
    }
    else {
        ifstream instream;
        string input = argv[1];
        instream.open(input);
        char temp;
        string total = "";
        instream.get(temp);
        while(!instream.eof()) {
            total += temp;
            instream.get(temp);
        }
        first = total;
        second = total;
        instream.close();
    }
    
   return 0; 
}

