#include<iostream>
using namespace std;

class timer
{
    private:
    
    int m, h;
    
    public:
    
    void getdata()
    {
        cout<<"Enter the minut \n";
        cin>>m;
        
        cout<<"Enter the Hour \n";
        cin>>h;
    }
    
    void time(timer t1, timer t2)
    {
        h=(t1.m+t2.m)/60;
        m=(t1.m+t2.m)%60;
        
        h=h+t1.h+t2.h;
        
        cout<<"The your time is:- \t"<<endl;
        
    }
    
    void putdata()
    {
        cout<<"Hour is:- \t"<<h<<endl;
        
        cout<<"Minut is:- \t"<<m<<endl;
    }
};

int main()
{
    timer t1, t2, t3;
    
    t1.getdata();
    t2.getdata();
    
    t3.time(t1, t2);
    t3.putdata();
    
    return 0;
    
}








