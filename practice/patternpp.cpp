#include<iostream>
using namespace std;
void fun(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<j;
        }
    cout<<endl;        
    }
}
void fun1(int n){
    for (int i = 1; i <=n; i++)
    {   char ch='A';
        for (int j = 1; j <=n; j++)
        {
            cout<<ch;
            ch++;
        }
    cout<<endl;        
    }
}
void fun2(int n){
    int t=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<t<<" ";
            t++;
        }
    cout<<endl;        
    }
}
void fun3(int n){
    char ch='A';
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
    cout<<endl;        
    }
}
void fun4(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
    cout<<endl;        
    }
}
void fun5(int n){
    char ch='A';
    for (int i = 1; i <=n; i++)
    { 
        for (int j = 1; j <=i; j++)
        {
            cout<<ch;
        }
        ch++;
    cout<<endl;        
    }
}
void fun6(int n){
    for (int i = 1; i <=n; i++)
    {   int num=1;
        for (int j = 1; j <=i; j++)
        {
            cout<<num;
            num++;
        }
    cout<<endl;        
    }
}
void fun7(int n){
    for (int i = 1; i <=n; i++)
    {   
        for (int j =i; j>0; j--)
        {
            cout<<j;
            
        }
    cout<<endl;        
    }
}
void fun8(int n){
    for (int i = 0; i <=n; i++)
    {  
        for (int j = 1; j <=n; j++)
        {
            if (i<j)
            {
                cout<<i+1;
            }else{
                cout<<" ";
            }
            
        }
    cout<<endl;        
    }
}
void fun9(int n){
  for(int i=0;i<n;i++){
    //space
    for (int j = 0; j <(n-i)-1; j++)
    {
        cout<<" ";
    }
    //star
    for (int j = 0; j <2*i+1; j++)
    {
        cout<<"*";
    }//space
    for (int j = 0; j <(n-i)-1; j++)
    {
        cout<<" ";
    }
    cout<<endl;
  }
}
void fun10(int n){
    for(int i=0;i<n;i++){
      //space
      for (int j = 0; j <(n-i)-1; j++)
      {
          cout<<" ";
      }
      //nums 1
      for (int j = 1; j <=i+1; j++)
      {
          cout<<j;
      }//nums2
      for (int j =i; j >=1; j--)
      {
          cout<<j;
      }
      cout<<endl;
    }
  }
void fun11(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i-1; j++)  //top
        {
            cout<<" ";
        }
        cout<<"*";
       if(i!=0){
        for (int j = 0; j <2*i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";} 
        cout<<endl; 
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            cout<<" ";  
        }
        
        cout<<"*";
        if(i!=n-2){
            for (int j = 0; j <2*(n-i)-5; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
}
  int main(){
    int n;
    cin>>n;
    fun11(n);
}