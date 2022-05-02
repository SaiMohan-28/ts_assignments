#include <stdio.h>  
int frequency(int n,int arr[n])
{
    int freq[n];
    int visited=-1;
    for(int i = 0; i < n; i++)
    {  
        int count = 1;  
        for(int j = i+1; j < n; j++)
        {  
            if(arr[i] == arr[j])
            {  
                count++;  //2 2
                freq[j] = visited;  //freq[7]=-1 freq[5]=-1 f[8]=-1
            }  
        }  
        if(freq[i] != visited)  //freq[0]!=-1 f[1] != -1 
            freq[i] = count;  //freq[0]=2 f[1]=2 f[2]=1 f[3]=2 f[4]=1
    }  
      
    //Displays the frequency of each element present in array  
    for(int i = 0; i < n; i++)
    {  
        if(freq[i] != visited)
        {  
            printf("%d - ", arr[i]);  
        
            printf("%d\n", freq[i]);  
        }  
    } 
}  
int main()  
{    
    int arr[] = {5, 2, 8, 1, 7, 2, 3, 5, 1};   
      
    int n = sizeof(arr)/sizeof(arr[0]);  
         
    frequency(n,arr);
    
    return 0;  
}  
