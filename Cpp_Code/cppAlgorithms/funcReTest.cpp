#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

void get_vec(vector<int> &vec);
void my_sort(vector<int> &vec);
void print_vec(vector<int> &vec);

void print_vec(vector<int> & vec)
{
    int i, n = vec.size();
    for(i = 0;i < n;i++){
        cout<<vec[i]<<endl;
    }
}

void my_sort(vector<int> & vec)
{
    sort(vec.begin(), vec.end());
}

void get_vec(vector<int> & vec)
{
    int n, value;
    string line;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>value;
        vec.push_back(value);
    }
}

int main(){
    vector<int> int_vec;

    get_vec(int_vec);
    my_sort(int_vec);
    print_vec(int_vec);

    return 0;
}