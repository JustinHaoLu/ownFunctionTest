#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <ctime>
using namespace std;
template <class T>
class Matrix {
    public:
        int m, n;
    private:
        T* data;
    public:
        //constructor
        Matrix(int r=0, int c=0): m(r), n(c) {
            if (r>0 && c>0) {
                data = new T[m*n];
                if (data==NULL) {
                    cerr<<"Allocate memory failed!"<<endl;
                    exit(1);
                }
                memset(data, 0, m*n*sizeof(T));
            } else
                data = NULL;
        }
        //deconstructor
        ~Matrix() {
            m = n = 0;
            delete[] data;
            data = NULL;
        }
        //entry access
        T& operator() (int i, int j) {
            assert(i>=0 && i<m && j>=0 && j<n);
            return data[i+j*m];
        }
        //assign
        Matrix<T>& operator= (Matrix<T> a) {
            m = a.m;    n = a.n;
            data = new T[m*n*sizeof(T)];
            if (data==NULL) {
                cerr<<"Allocate memory failed!"<<endl;
                exit(1);
            }
            for (int i=0; i<m; i++)
                for (int j=0; j<n; j++)
                    data[i+j*m] = a(i, j);
            return *this;
        }
        //display
        void display() {
            cout<<"("<<m<<", "<<n<<"):"<<endl;
            for (int i=0; i<m; i++) {
                for (int j=0; j<n; j++)
                    cout<<data[i+j*m]<<"\t";
                cout<<endl;
            }
        }
};
template<class T> 
inline Matrix<T> operator+ (Matrix<T>& a, Matrix<T>& b)
{
    assert(a.m==b.m && a.n==b.n);
    Matrix<T> r(a.m, a.n);
    for (int i=0; i<a.m; i++)
        for (int j=0; j<a.n; j++)
            r(i, j) = a(i, j) + b(i, j);
    return r;
}
 
template<class T> 
inline Matrix<T> operator- (Matrix<T>& a, Matrix<T>& b)
{
    assert(a.m==b.m && a.n==b.n);
    Matrix<T> r(a.m, a.n);
    for (int i=0; i<a.m; i++)
        for (int j=0; j<a.n; j++)
            r(i, j) = a(i, j) - b(i, j);
    return r;
}
template<class T> 
inline Matrix<T> operator* (Matrix<T>& a, Matrix<T>& b)
{
    assert(a.n==b.m);
    Matrix<T> r(a.m, b.n);
    for (int i=0; i<a.m; i++)
        for (int j=0; j<b.n; j++)
            for (int k=0; k<a.n; k++)
                r(i, j) += a(i, k) * b(k, j);
    return r;
}
 
/* 
 * 测试 mat.h 中定义的矩阵类
 */
int main()
{
    int m = 2, n = 2;
    Matrix<double> a(m, n);
    Matrix<double> b(m, n);
    srand( unsigned(time(NULL)) );
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++) {
            a(i, j) = double(rand())/RAND_MAX;
            b(i, j) = double(rand())/RAND_MAX;
        }
    cout<<"Matrix a"; a.display(); cout<<endl;
    cout<<"Matrix b"; b.display(); cout<<endl;
    Matrix<double> c(m, n);
    c = a+b;
    cout<<"a+b: "; c.display(); cout<<endl;
    Matrix<double> d(m, n);
    d = a*b;
    cout<<"a*b:"; d.display(); cout<<endl;
     
    return 0;
}