#include <iostream>
using namespace std;
class Matrix
{
public:
    Matrix();
    friend Matrix operator+(Matrix &,Matrix &);
    friend Matrix operator-(Matrix &,Matrix &);
    friend ostream& operator<<(ostream&,Matrix&);
    friend istream& operator>>(istream&,Matrix&);
    int mat[2][3];
};
Matrix::Matrix()
{
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            mat[i][j]=0;
}
 
Matrix operator+(Matrix &a,Matrix &b)
{
    Matrix S;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            S.mat[i][j]=a.mat[i][j]+b.mat[i][j];
    }
    return S;
}
Matrix operator-(Matrix &a,Matrix &b)
{
    Matrix S;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            S.mat[i][j]=a.mat[i][j]-b.mat[i][j];
    }
    return S;
}
istream& operator>>(istream& input,Matrix &m)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            input>>m.mat[i][j];
    }
    return input;
}
ostream & operator<<(ostream &output,Matrix &m)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            output<<m.mat[i][j]<<' ';
            if(j==1)
                output<<m.mat[i][2]<<endl;
        }
    }
    return output;
}
int main()
{
    Matrix a,b,c,d;
    cin>>a;
    cin>>b;
    c=a+b;
    d=a-b;
    cout<<endl;
    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}