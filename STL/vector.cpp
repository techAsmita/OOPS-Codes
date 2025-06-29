#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>arr;
    int element,size;
    cout<<"Enter size of your vector: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element: ";
        cin>>element;
        arr.push_back(element);
    }
    display(arr);
    cout<<"Size of vector is: "<<arr.size()<<endl;
    cout<<"capacity of vector is: "<<arr.capacity()<<endl;
}
