#include <iostream>
#include <limits>
#include <string>
using namespace std;
 
int main()
{
    string filename;
    getline(cin, filename);
    cout << "filename : " << filename << endl;
 
    size_t idx = filename.find('.');    //as a return value, find the string period, and replace it.
    if(idx == string::npos)             //if do not find the string period
    {
        cout << "filename does not contain any period!" << endl;
    }
    else                                //if find the string period, then relace the back string of it 
    {
        string tmpname = filename;
        tmpname.replace(idx + 1, string::npos, "xxx"); //string::npos作为长度参数，表示直到字符串结束
        cout << "repalce: " << tmpname << endl;
    }
}