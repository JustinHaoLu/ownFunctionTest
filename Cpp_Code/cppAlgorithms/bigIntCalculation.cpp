#include <bits/stdc++.h>
using namespace std;
 
class bigint{
    vector<int> digits;
    const int   WIDTH = 8;
    const int   W = pow(10, WIDTH);
    int         sign = 1;
 
    /* bigint的构造器 */
    bigint& constructor(string s){

        /* 舍去小数点处理 */
        auto p = s.find('.');           //自动判断返回的数据类型，该语句作用为查找小数点并赋值
        if(p != string::npos)           //如果找到了小数点
            s = s.substr(0, p);         //抽取从该字符串第0位开始，到小数点结束的字符串

        /* 空字符串处理 */
        if(s == "") {
            digits.push_back(0);        //如果该字符串整个就是空的
            return *this;               //在Vector最后插入一个元素
        }
        /* 符号处理 */
        if(s[0]=='-'){                  //如果该字符串第0位是一个“-”
            sign = -1;
            s = s.substr(1);            //则从第1位开始取字符串
        }
 
        digits.clear();                 //清除Vector内的元素

        /* 将整数以8为长度截断存入vector */
        for(int r = s.size(); r > 0; r -= WIDTH){
            int l = max(0, r - WIDTH);
            int x = stoi(s.substr(l, r - l));
            digits.push_back(x);
        }
        return *this;
    }
    
public:
 
    /* 默认构造函数 */
    bigint(string s=""){
        constructor(s);
    }
 
    /* 构造函数模板，只要能转换为string的数据类型都可以转成bigint */
    template<class T>
    bigint(const T& x){
        constructor( to_string(x) );
    }
 
    /* 加法重载 */
    bigint operator+ (const bigint& b2){
        bigint res(0);
        if(sign<0 && b2.sign<0) res.sign = -1;
        else if(sign<0 && b2.sign>0) return /* b2 - (-*this); */ res;
        else if(sign>0 && b2.sign<0) return /* (-*this) - b2; */ res;
        
        int r1 = digits.size() - 1, r2 = b2.digits.size() - 1;
        while(res.digits.size() <= max(r1, r2)+1) res.digits.push_back(0);
        int CF = 0;
        for(int i=0; i<=max(r1, r2); ++i){
            res.digits[i]  = CF + digits[i] + b2.digits[i];
            CF             = res.digits[i]/W;
            res.digits[i] %= W;    
        }
        res.digits[res.digits.size()-1] = CF;
        while(res.digits[res.digits.size()-1] == 0) res.digits.pop_back();
        return res;
    }
 
    /* 乘法重载 */
    bigint operator* (const bigint& b2){
        bigint res(0);
        int r1 = digits.size() - 1, r2 = b2.digits.size() - 1;
        while(res.digits.size() <= r1+r2+1) res.digits.push_back(0);
        for(int i=0; i<=r1; ++i) for(int j=0; j<=r2; ++j){
            long long x = (long long)digits[i]*b2.digits[j];
            res.digits[i+j]   += x%W;
            res.digits[i+j+1] += x/W + res.digits[i+j]/W;
            res.digits[i+j]   %= W;
        }
        
        while(res.digits[res.digits.size()-1] == 0) res.digits.pop_back();
        res.sign = sign * b2.sign;
        return res;
    }
 
    /* 输入流重载 */
    friend istream& operator >> (istream& is, bigint& b){
        string s;
        is >> s;
        b.constructor(s);
        return is;
    }
 
    /* 输出流重载 */
    friend ostream& operator << (ostream& os, const bigint& b){
        if(b.digits.empty()) os << 0;
        if(b.sign < 0) os << "-";
        for(auto p = b.digits.rbegin() , end = b.digits.rend(); p!= end; ++p){
            char buf[b.WIDTH+1];
            sprintf(buf, p == b.digits.rbegin()?"%d":"%08d", *p);
            os << buf;
        }
        return os;
    }
};
 
/* 测试函数 */
int main(int argc, char const *argv[]){
    bigint a, b;
    cin >> a >> b;
    cout << a+b <<endl;
    cout << a*b <<endl;
}