#include<bits/stdc++.h>
using namespace std;

int qss(vector<int> &arr, int l , int h )
{
    int pivot = arr[l];
    int i = l ;
    int j = h ;
    while(i<j)
    {
        while(pivot>=arr[i]&& i <= h-1 )
        {
            i++;
        }
        while(pivot<arr[j] && j >= l+1  )
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;


    
}             
void qs(vector<int> &arr , int l , int h )
{
    if(l<h)
    {
        int partition = qss(arr,l,h);
        qs(arr,l,partition-1);
        qs(arr,partition+1,h);
    }


}
int main()
{
vector<int> arr = {20,10,49,27,40,15,29,35,17};
qs(arr, 0 , arr.size()-1);
for(auto x :arr )
{
    cout<<x<<",";
}  
return 0;
}