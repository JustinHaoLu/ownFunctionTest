#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

void get_vec(vector<int> & vec);
void get_vec(vector<double> & vec);
void get_vec(vector<string> & vec);
void my_sort(vector<int> & vec);
void my_sort(vector<double> & vec);
void my_sort(vector<string> & vec);
void print_vec(vector<int> & vec);
void print_vec(vector<double> & vec);
void print_vec(vector<string> & vec);

void my_sort(vector<int> & vec)
{
    sort(vec.begin(), vec.end());
}

void my_sort(vector<double> & vec)
{
    sort(vec.begin(), vec.end());
}

void my_sort(vector<string> & vec)
{
    sort(vec.begin(), vec.end());
}

void get_vec(vector<int> & vec)
{
    int n, value;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>value;
        vec.push_back(value);
    }
}

void get_vec(vector<double> & vec)
{
    int n;
    double value;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>value;
        vec.push_back(value);
    }
}

void get_vec(vector<string> & vec)
{
    int n;
    string value;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>value;
        vec.push_back(value);
    }
}

void print_vec(vector<int> & vec)
{
    int i, n = vec.size();
    for(i = 0;i < n;i++){
        cout<<vec[i]<<endl;
    }
}

void print_vec(vector<double> & vec)
{
    int i, n = vec.size();
    for(i = 0;i < n;i++){
        cout<<vec[i]<<endl;
    }
}

void print_vec(vector<string> & vec)
{
    int i, n = vec.size();
    for(i = 0;i < n;i++){
        cout<<vec[i]<<endl;
    }
}

int main()
{
    vector<int> int_vec;
    vector<double> double_vec;
    vector<string> string_vec;

    get_vec(int_vec);
    get_vec(double_vec);
    get_vec(string_vec);

    my_sort(int_vec);
    my_sort(double_vec);
    my_sort(string_vec);

    print_vec(int_vec);
    print_vec(double_vec);
    print_vec(string_vec);
    
    return 0;
}