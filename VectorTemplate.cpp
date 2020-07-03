#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// vector<int> parseInts(string str) {
// 	// Complete this function
//     stringstream ss(str);
//     vector<int> A;
//     int i=0, temp;
//     char ch;
//     while(ch==',')
//     {
//         ss>>temp>>ch;
//         A.push_back(temp);
//         i++;
//     }

//     return A;

// }

// int main() {
//     string str;
//     cin >> str;
//     vector<int> integers = parseInts(str);
//     for(int i = 0; i < integers.size(); i++) {
//         cout << integers[i] << "\n";
//     }

//     return 0;
// }
vector<int> parseInts(string str)
{
    stringstream ss(str);
    int temp;
    char ch;
    vector<int> ret;

    while(ss>>temp)
    {
        ret.push_back(temp);
        ss>>ch;
    }
    return ret;
}
int main()
{
    string str;
    cin >> str;
    
    
   
    vector<int> Integers = parseInts(str);
    for(int i = 0; i < Integers.size(); i++) 
    {
        cout << Integers[i] << "\n";
    }

   
}