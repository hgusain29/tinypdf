#include<bits/stdc++.h>
using namespace std;
             
void BubbleSort(vector<int> &v)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        for(int j = 0; j < v.size()-i ; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j+1],v[j]);
            }
        }
    }
}
int main()
{
vector<int> vec = {12,11,34,23,9};
BubbleSort(vec);
for(auto x : vec)
{
    cout<<x<<endl;
} 
  
return 0;
}