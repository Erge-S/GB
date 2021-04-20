#include <iostream>
#include <iomanip>
#include "Lsn_5_2.hpp"


void InverseArray (int* array , unsigned int a);
void insArray (int* array , unsigned a);
void LineArray (int* array,int a);
void MoveArray(int* array,int a,int s);



int main()
{
    const int l=10;
    int array[l]={1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    InverseArray (array , l);

    std::cout<<"\n";
    
    const int l2=8;
    int array2[l2]={};
    insArray(array2 , l2);

    std::cout<<"\n";

    const int l3=5;
    int array3[l3]={2,1,1,2,1};
    LineArray(array3,l3);

    std::cout<<"\n";
    const int l4=5;
    int s=2;
    int array4[l4]={1,2,3,4,5};
    MoveArray(array4,l4,s);
    

    return 0;
}

void InverseArray (int* array , unsigned int a)
{
    
    for(int x=0;x<=a;x++)
    {
        array[x] =!array[x];
        std::cout<<array[x]<<" ";
    }
}

void insArray (int* array , unsigned a)
{

   array[0]=1;
   int(*pi)=array;
   for (int i=7;i>=0;i--)
    {
        std::cout<<*pi<<" ";
        *pi+=3;
    }
}

void LineArray (int* array,int a)
{
    bool OUT_res=true;
    int sum=0;
    for(int i=0;i<=a;i++)
    {
        sum +=array[i];
    }
    int half=0;
    for(int i=0;i<=a;i++)
    {
        half+=array[i];
        if((sum/half)==2)
        {
            OUT_res=true;
            break;
        }
        else
        {
            OUT_res=false;
        }
    }
    std::cout<<std::boolalpha<< OUT_res;

}


void MoveArray(int* array,int a,int s)
{
    if (a < 2) return;
    s %= a;
    for (int i = 0; i < s; ++i)
    {
        int l = array[0];
        for (int j = 1; j < a; ++j) array[j - 1] = array[j];
        array[a - 1] = l;
    }
    for(int i=0;i<=a;++i)
    {
        std::cout<<array[i];
    }

    
}