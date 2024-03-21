#include<bits/stdc++.h>
using namespace std;
void mergeSort(int s, int e, int mid, vector<int> &vec);
void merge(int s , int e , vector<int> &vec)
{
    if(s<e)
    {
        int mid = (s+e)/2 ;
        merge(s,mid,vec) ;
        merge(mid+1,e,vec);
        mergeSort(s,e,mid,vec);
    }
}            
void mergeSort(int s, int e, int mid, vector<int> &vec )
{
    vector<int> left ;
    vector<int> right ;
    int n1 = mid-s+1;
    int n2 = e-mid;
    for(int i = s ; i <= mid ; i++)
    {
        left.push_back(vec[i]);
    }
    for(int j = mid+1 ; j <= e ; j++)
    {
        right.push_back(vec[j]);
    }
    
    int k = s , i = 0 , j = 0 ;
    while(i < left.size() && j < right.size())
    {
        if(left[i] > right[j])
        {
            vec[k++] = right[j] ;
            j++;
        }else
        {
            vec[k++] = left[i] ;
            i++;
        }
    }
    while(i < left.size()) 
    {
        vec[k++] = left[i];
        i++;
    }
    while(j < right.size()) 
    {
        vec[k++] = right[j];
        j++;
    }
}

int main()
{
vector<int> vec(8);
for(int i = 0 ; i < 8 ; i++)
{
    cin>>vec[i];
}
merge(0,7,vec);
for(int i = 0 ; i < vec.size() ; i++)
{
    cout<<vec[i]<<" ";
}
  
return 0;
}