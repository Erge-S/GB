namespace Fun{

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
}