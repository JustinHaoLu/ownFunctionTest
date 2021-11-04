#include <iostream>
#include <string>
using namespace std;

int main(){
    string str[100];
    long long unsigned int index, length2;
    for(int i=0;i<100;i++)
    {
        getline(cin,str[i]);
    }
    /*输出字符串数组为输入的所有字符串*/
    /*
    for(int i = 0;i < 5;i++)
    {
        cout<<str[i]<<endl;
    }
    */
    string str1 = str[0];       //找到第一个输入的字符串，即为需要查找的字符串；
    string str2 = "s";
    string str3 = str1 + str2;
    length2 = str3.length();
    //cout<<str1<<endl;
    //cout<<str3<<endl;
    //cout<<length2<<endl;
    for(int j = 1;j < 100;j++){
        if(str[j].find(str1, j) != string::npos){
            index = str[j].find(str1, j);
            if(str[j][index + length2 - 1] != str3.back()){
                cout<<j<<endl;
            }
        }
        if(str[j] == str1){
            cout<<j<<endl;
        }
    }
    return 0;
}