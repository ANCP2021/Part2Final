#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int countLine(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '\n') {
            count++;
        }
    }
    return count;
}

int countChar(string s) {
    return s.length();
}

int main()
{
   string s = "i\nn\np\nu\nt  90909";
   cout << countLine(s) << endl;
   cout << countChar(s) << endl;

   return 0; 
}

