/**
 * 1.
 * static_cast 用于数据类型的强制转换，强制将一种数据类型转换为另一种数据类型。例如将整型数据转换为浮点型数据。
 * static_cast<类型说明符>(变量或表达式)
 * 
 * 2.
 * const 限定符通常被用来限定变量，用于表示该变量的值不能被修改。
 * 而 const_cast 则正是用于强制去掉这种不能被修改的常数特性
 * 但需要特别注意的是，const_cast 不是用于去除变量的常量性，而是去除指向常数对象的指针或引用的常量性
 * 其去除常量性的对象必须为指针或引用。
 *  const_cast 强制转换对象必须为指针或引用，而不能是一个变量，这是不允许的！
 * 
 * 3.
 * reinterpret_cast主要有三种强制转换用途：
 * 改变指针或引用的类型
 * 将指针或引用转换为一个足够长度的整形
 * 将整型转换为指针或引用类型
 * 在使用 reinterpret_cast 强制转换过程仅仅只是比特位的拷贝，因此在使用过程中需要特别谨慎！
 * 例如：
 *  int *a = new int;
    double *d = reinterpret_cast<double *>(a);
 * 
 * 4.
 * dynamic_cast 用于类的继承层次之间的强制类型转换，我们将在讲到类的继承的时候再来介绍 dynamic_cast。
 */

#include<iostream>
using namespace std;

int main()
{
    const int a = 10;
    const int *p = &a;
    int *q;
    q = const_cast<int *>(p);

    *q = 20;    
    /**该语句为未定义行为语句
     * 所谓的未定义行为是指在标准的 C++ 规范中并没有明确规定这种语句的具体行为
     * 该语句的具体行为由编译器来自行决定如何处理
     * 对于这种未定义行为的语句我们应该尽量予以避免！
     */

    cout <<a<<" "<<*p<<" "<<*q<<endl;
    //单纯输出常量a，输出的是值，完整输出指针格式*p，*q输出的也是值；

    cout <<&a<<" "<<p<<" "<<q<<endl;
    //若输出的a前面带有&，则输出的是地址，若输出的指针前面没有带有*，则输出的也是地址。

    return 0;
}
/**
 * 在本例中，我们将变量 a 声明为常量变量
 * 同时声明了一个 const 指针指向该变量
 * （此时如果声明一个普通指针指向该常量变量的话是不允许的，Visual Studio 2010编译器会报错）
 * 之后我们定义了一个普通的指针 *q
 * 将 p 指针通过 const_cast 去掉其常量性，并赋给 q 指针
 * 之后我再修改 q 指针所指地址的值时，这是不会有问题的。
 */


