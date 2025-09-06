k#include<bits/stdc++.h>
using namespace std;
/**
 * @brief Main function to demonstrate array hashing and element counting
 *
 * This function performs the following operations:
 * 1. Reads an array from user input
 * 2. Creates a hash table to count occurrences of each element
 * 3. Allows user to query the count of specific elements
 *
 * @return int Returns 0 on successful execution
 */
int main()
{
    cout<<"Enter size of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENter elements of array";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int hash[13]={0};
    for (int i = 0; i <n; i++)
    {
        hash[arr[i]]+=1;        //precomputing
    }

    cout<<"Enter number of elements to search";
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;    //fetch
    }

    return 0;
}

