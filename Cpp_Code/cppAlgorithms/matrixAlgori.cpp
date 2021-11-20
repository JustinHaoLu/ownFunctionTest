#include <iostream>
#include <iomanip>
using namespace std;

//矩阵运算的类
class Matrix
{
private:
	int row;//行
	int col;//列
	int **mat;//指向一级指针变量的二级指针，二级指针变量名可以看做二维数组的数组名
public:
	Matrix();
	Matrix(int r,int c);//构造函数
	Matrix(const Matrix &m);//拷贝构造函数
	
	friend Matrix operator+(Matrix &m1,Matrix &m2);//矩阵+矩阵

	friend istream & operator>>(istream &in,Matrix &ma);//重载>>输入运算符
	friend ostream & operator<<(ostream &out,Matrix &ma);//重载<<输出运算符
	~Matrix();//类中有动态申请数据空间，必须显式定义析构函数
};
Matrix::Matrix()
{
	cin>>row>>col;
}
Matrix::Matrix(int r,int c): row(r),col(c)
{
	int i;
	mat=new int *[row];//动态创建二维数组
	for(i=0;i<row;i++)
		mat[i]=new int[col];//动态创建每一行上的每一列
}
Matrix::~Matrix()
{
	for(int i=0;i<row;i++)
		delete [] mat[i];
	delete [] mat;//先创建的后析构
}
//定义拷贝构造函数
Matrix::Matrix(const Matrix &m)
{	
    int i,j;
	row=m.row;
	col=m.col;
	mat=new int *[row];//动态创建二维数组
	for(i=0;i<row;i++)
		mat[i]=new int[col];//动态创建每一行上的每一列
	
	if(m.mat)
	{
        for(i=0;i<row;i++)
		    for(j=0;j<col;j++)
			    mat[i][j]=m.mat[i][j];
	}
}


//矩阵+矩阵
Matrix operator+(Matrix &m1,Matrix &m2)
{	
    Matrix m3(m1.row,m1.col);
	int i,j;
	if((m1.row==m2.row)&&(m1.col==m2.col))//判断两个矩阵是否为行数列数相同的矩阵,若是，就进行对应元素相加
	{
		for(i=0;i<m1.row;i++)
			for(j=0;j<m1.col;j++)
				m3.mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
	}
	return m3;
}

istream &operator >>(istream &in,Matrix &ma)
{	int i,j;
    
	cout<<"Please input the Matrix:"<<endl;
	for(i=0;i<ma.row;i++)
	{
		cout<<"输入第  "<<i+1<<"  行:"<<endl;
		for(j=0;j<ma.col;j++)
			in>>ma.mat[i][j];
	}
	return in;
}
ostream &operator <<(ostream &out,Matrix &ma)
{	int i,j;
	cout<<"The Matrix is:"<<endl;
	for(i=0;i<ma.row;i++)
	{	
        for(j=0;j<ma.col;j++)
			out<<ma.mat[i][j]<<" ";
		cout<<endl;
	}
	return out;
}


int main()
{
	Matrix m1(2,3),m2(2,3);
	cin>>m1>>m2;
	cout<<m1<<endl;
    cout<<m2<<endl;
	return 0;
}