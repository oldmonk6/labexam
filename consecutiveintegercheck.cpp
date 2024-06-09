#include<iostream>
#include<vector>
using namespace std;
int gcd(int n1,int n2)
{
    int t=min(n1,n2);
    while(t>0)
    {
        if(n1%t==0)
        {
            if(n2%t==0)return t;
            else {
                t=t-1;
            }
        }else{
            t=t-1;
        }
    }
    return -1;

}
int main()
{
    int n1,n2;
    cout<<"enter the value of n1 and n2";
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
}