/*
这是一道比较经典的枚举题目
枚举算法是我们在日常中使用到的最多的一个算法，它的核心思想就是:枚举所有的可能
课上 我们已经知道了枚举的三要素：确定枚举对象：是三位数，这三位数必须是12和21的倍数
                              列举所有可能：i从100循环到999 sum用来记录i各个数位的和
                              逐一进行验证：如果i是17和21的倍数 那就输出 否则继续循环
推荐刷题：可以试试这道题：http://oj.hetao101.com/d/training/p/1474
*/
#include <iostream>
using namespace std;
int a, b, num;
int main()
{
	cin >> a >> b;
    for(int i=100;i<999;i++)
    {
        num=i * 100 + a * 10 + b;
        if(num%17==0&&num%21==0)
        {
            cout<<num<<endl;
        }
        
    }                                     

	return 0;
}
