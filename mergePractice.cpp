#include<bits/stdc++.h>
using namespace std;
 void mergeSort(vector<int> &vec ,int l , int m , int h )
 {
    int n1 = m-l+1;
    int n2 = h-m;
    vector<int> left(n1) , right(n2);
    for(int i = 0 ; i < n1 ; i++) left[i] = vec[l+i];
    for(int i = 0 ; i < n2 ; i++) right[i] = vec[m+i+1];
    int k = l;int i = 0 , j = 0 ; 
    while( i < n1 && j < n2 )
    {  
        if(left[i]<right[j])
        {
            vec[k++] = left[i++] ;
        }
        else{
            vec[k++] = right[j++];
        }
    }
    while(i<n1)
    {    
        vec[k++] = left[i++] ;
    }
    while(j < n2)
    {
        vec[k++] = right[j++];
    }
}
             
void merge(vector <int>& vec , int l , int h )
{
    if(l<h)
    {
        int mid = (l+h)/2;
        merge(vec,l,mid);
        merge(vec,mid+1,h);
        mergeSort(vec,l,mid,h);
    }
}



int main()
{
vector<int> vec1 = {21,2,93,73,15,39,49,98} ;

 



merge(vec1,0,vec1.size()-1);
for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << ",";
    }

  
return 0;
}