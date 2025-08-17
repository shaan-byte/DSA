#include<iostream>
using namespace std;
int main(){
     int A[10],n,l=0,key,mid,h=9;  //enter array elements in sorted order
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<"array elements number";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    while (l<=h)
    {
        mid=l+((sh-l)/2);
        if (key==A[mid])
        {
            cout<<"element found at"<<endl<<mid;
            return 0;}
            else if (key<A[mid])
            {
              h=mid-1;  
            }
            else{
                l=mid+1;
            }
            
        }
        cout<<"not found";
        return 0;
    }
    
