#include <iostream>
using namespace std;
struct student
{
    string name;
    long long stuId;
};

int main()
{
    int n, i, j;
    while (cin>>n)
    {
        student * stu = new student[n];    
        struct student temp;
        for(i = 0;i < n;i++)                      //依次输入各个学生的信息
        {
            cin>>stu[i].stuId>>stu[i].name;
        }
        for(i = 0;i < n - 1;i++)                //利用冒泡排序法进行学号的排序
        {
            for(j = 0;j< n - 1 - i;j++)
            {
                if(stu[j].stuId>stu[j+1].stuId)
                {
                    temp=stu[j];
                    stu[j]=stu[j+1];
                    stu[j+1]=temp;
                }
        
            }
        }
        for(i=0;i<n;i++)                        //按照顺序输出各个学生的信息
        {
            cout<<stu[i].stuId<<" "<<stu[i].name<<endl;
        }
        printf("\n");
        delete [] stu;
    }  
    return 0;
}