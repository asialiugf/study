#include<iostream>
#include<vector>

int main()
{
    std::vector<int> a(10, 0) ;      //大小为10初值为0的向量a

    //对其中部分元素进行输入
    std::cin >>a[2] ;
    std::cin >>a[5] ;
    std::cin >>a[6] ;
    a[0] = 10;
    std::cout << a[0] ;

    //全部输出
    //int i ;
	unsigned i;
    for(i=0; i<a.size(); i++)
        std::cout<<a[i]<<" " ;

    return 0 ;
}
