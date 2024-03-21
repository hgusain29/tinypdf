#include<bits/stdc++.h>
using namespace std;
             
void InsertionSort(vector<int> &v)
{
    int mini = INT_MIN;
    for(int i = 0 ; i < v.size() ; i++)
    {
        mini = i  ;
        for(int j = i+1 ; j < v.size()-1 ; j++)
        {
            if(v[j]<v[mini])
            {
                mini = j ;
            }

        }
        swap(v[i],v[mini]);
        
    } 
}
int main()
{
   vector<int> v = {12,11,53,98,10,4,1,54};
   InsertionSort(v) ;
   for(auto x: v)
   {
    cout<<x<<endl;
   }
  
return 0;
}