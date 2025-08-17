#include<iostream>
using namespace std;
void fun(int n){
    for (int i = 0; i < n; i++)     //square
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void fun2(int n){
    for (int i = 0; i < n; i++)     //square
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void fun3(int n){
    for (int i = 0; i <= n; i++)     //square
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void fun4(int n){
    for (int i = 0; i < n; i++)     //square
    {
        for (int j = 1; j <(n-i)+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void fun5(int n){
    for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        for (int j = 0; j <2*i+1; j++)
        {
            cout<<"*";    // star
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        cout<<endl;
    }
}
void fun6(int n){
    for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j <i; j++)
        {
            cout<<" ";      //space
        }
        for (int j = 0; j <2*n-(2*i+1); j++)
        {
            cout<<"*";    // star
        }
        for (int j = 0; j <i; j++)
        {
            cout<<" ";      //space
        }
        cout<<endl;
    }
}
void fun7(int n){
    for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        for (int j = 0; j <2*i+1; j++)
        {
            cout<<"*";    // star
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        cout<<endl;
    }for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j <i; j++)
        {
            cout<<" ";      //space
        }
        for (int j = 0; j <2*n-(2*i+1); j++)
        {
            cout<<"*";    // star
        }
        for (int j = 0; j <i; j++)
        {
            cout<<" ";      //space
        }
        cout<<endl;
    }
}
void fun8(int n){
    for (int i = 0; i <2*n-1; i++)
    {int stars=i;
       if(i>n)stars=2*n-i;
       for (int j = 0; j < stars; j++)
       {
        cout<<"*";
       }
       cout<<endl;  
    }
    
}
void fun9(int n){
    int start=1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)start=1;
        else{start=0;}
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
}
void fun10(int n){
    int num=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    
}
void fun11(int n){
    for (int i = 0; i < n; i++)
    {
        for (char num='A'; num <='A'+i; num++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
}
void fun12(int n){
    for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for (int j = 0; j <2*i+1; j++)
        {cout<<ch;
            if(j<breakpoint){
                ch++;
            }else{ch--;}
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";      //space
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun12(n);
    return 0;
}