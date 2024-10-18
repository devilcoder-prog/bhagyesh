#include <iostream>
using namespace std;
int main()
{   
  cout<<"BHAGYESH MALI";
    int i,j;
    int rows,cols;
    int arr[rows][cols];
    cout<<"Enter rows and column";
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
      for(j=0;j<cols;j++)
      {
        cin>>arr[i][j];
        cout<<endl;
      }
    }
    for(i=0;i<rows;i++)
    {
      for(j=0;j<cols;j++)
      {
        cout<<arr[i][j];
        cout<<endl;
      }
    }

    
}