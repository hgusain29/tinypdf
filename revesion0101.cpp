#include<bits/stdc++.h>
using namespace std;
             

void BubbleSort(vector<int> &v)
{

    for(int i = 0 ; i < v.size() ; i++)
    {

        for(int j = 1 ; j < v.size()-i ; j++)
        {
            if(v[j-1] > v[j])
            {
                swap(v[j-1],v[j]);
            }
        }
    }
}

int main()
{
vector<int> v(9);
for(int i = 0 ; i < v.size() ; i++ )
{
    cout<<"insert the values"<<i<<" ";

    cin>>v[i];
}
BubbleSort(v);
for(int i = 0 ; i < v.size() ; i++)
{
    cout<<v[i]<<" ";
}  
return 0;
}