#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter how many rows u want "<<endl;
    cin>>r;
    cout<<"Enter how many columns u want "<<endl;
    cin>>c;
    int **arr=new int*[r];
    for(i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The elements are : "<<endl;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
