#include <iostream>
#include <malloc.h>
#include <stdio.h>
using namespace std;

typedef struct
{
    //结构体
    int row,col;
    //二维指针，目的是动态分配内存
    float **matrix;
} Matrix;

Matrix CreateMatrix()
{
    Matrix m;
    int row,col;
    //cout << "输入行数与列数：" << endl;
    cin >> row >> col;
    float **enterMatrix ;
    enterMatrix=(float**) malloc(row*sizeof(float*));           //动态分配内存，新分配的内存类型为float**，为二维指针
    for(int i=0; i<row; i++)
        enterMatrix[i] = (float *)malloc(col * sizeof(float));  //动态分配内存，新分配的内存类型为float*，为一维指针
    //cout<<"输入你的矩阵："<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> enterMatrix[i][j];
        }
    }
    m.col = col;
    m.row = row;
    m.matrix = enterMatrix;
    return m;
}

//初始化一个行为row,列为col矩阵
Matrix InitMatrix(int row,int col)
{
    Matrix m;
    float **matrix ;
    matrix=(float**) malloc(row*sizeof(float*));
    for(int i=0; i<row; i++)
        matrix[i] = (float *)malloc(col * sizeof(float));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            matrix[i][j] = 0;
        }
    }
    m.col = col;
    m.row = row;
    m.matrix = matrix;
    return m;
}

//加法
Matrix add(Matrix m1, Matrix m2)
{
    for(int i=0; i<m1.row; i++)
    {
        for(int j=0; j<m1.col; j++)
        {
            m1.matrix[i][j] += m2.matrix[i][j];
        }
    }
    return m1;
}

//减法
Matrix sub(Matrix m3, Matrix m4)
{
    for(int i=0; i<m3.row; i++)
    {
        for(int j=0; j<m3.col; j++)
        {
            m3.matrix[i][j] -= m4.matrix[i][j];
        }
    }
    return m3;
}

int calRowCol(Matrix M1,Matrix M2,int row,int col)//row为M1的行 col为M2的列
{
    int result = 0;
    int same = M1.col;
    for(int j=0; j<same; j++)
    {
        result+=M1.matrix[row][j]*M2.matrix[j][col];
    }
    return result;
}

 

//乘法
Matrix Mul(Matrix m1, Matrix m2)
{
    Matrix result = InitMatrix(m1.row,m2.col);
    for(int i=0; i<m1.row; i++)
    {
        for(int j=0; j<m2.col; j++)
        {
            result.matrix[i][j] = calRowCol(m1,m2,i,j);
        }
    }
    return result;
}

//数乘
Matrix numMul(Matrix m, int num)
{
    //cout<<"数值:"<<num<<endl;
    for(int i=0; i<m.row; i++)
    {
        for(int j=0; j<m.col; j++)
        {
            m.matrix[i][j] = m.matrix[i][j]*num;
        }
    }
    return m;
}

//输出
Matrix printMatrix(Matrix m)
{
    for(int i=0; i<m.row; i++)
    {
        for(int j=0; j<m.col; j++)
        {
            cout << m.matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return m;
}

int main(){
    Matrix ma1 = CreateMatrix();
    Matrix ma2 = CreateMatrix();
    Matrix ma3 = CreateMatrix();
    printMatrix(add(ma1,ma2));
    cout<<endl;
    ma1 = sub(ma1,ma2);
    printMatrix(sub(ma1,ma2));
    cout<<endl;
    ma1 = add(ma1,ma2);
    Matrix ma5 = Mul(ma1,ma3);
    printMatrix(numMul(ma5, 6));
    return 0;
}