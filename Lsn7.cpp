#include <iostream>
#define Max_Integer(a,b) ((a>=0)&&(a<b))
#define Find_EL(arr,x,y) (*(*((arr)+(y))+(x)))
int main ()
{
    
    int num,max;
    std::cout<<"Enter number and limit:\n";
    std::cin>>num>>max;
    std::cout<< Max_Integer(num,max)<<"\n";

    int** array = new int*[10];
    for (int i=0;i<10;i++)
    {array[i]= new int[10];}
    array[4][5]=15;
    std::cout<< Find_EL(array,5,4);



    return 0;
}