// Jadea Parchmemnt this program will take the number of parts in storage, the number of part types and a list of part codes f.It computes the number of computers that can be assembled with the existing parts.
#include <stdio.h>
//function that calculates the minimum frequency
int find_minimum(int *a, int n)
{  
  int smallest =a[0];
    int i;
    for (i=0;i<n; i++)
    {
    if(*(a+i)<smallest) {
        smallest =*(a+i);
     } 
        
    }
    //result when function is carried out
    return smallest;
}
int main()
{
    
    int N;
    printf("Enter number of parts (N):\n ");
    scanf("%d",&N);
    //input validation 
    if (N <1 || N>1000000){
        printf("Invalid number of parts %d\n",N);
        printf("Number of units must be between 1 and 1000000\n");
        return 0;
    }
    int K;
    printf("Enter number of part types (K):\n ");
    scanf("%d",&K);
    //input validation 
    if (K <1||K>10000){
        printf("Invalid number of part types %d\n",K);
        printf("Number of units must be between 1 and 10000\n");
        return 0;
    }
    int a[K];
    
    printf("Enter list of Parts:\n");
   int i;
   for( i=0;i<N;i++){
        int list;
       scanf("%d",&list);
       // a[list-1]+=1;
        //input validation 
        if (list<1||list>K){
        printf("Invalid number of units \n");
        printf("Number of units must be between 1 and %d\n",K);
        return 0;
    }
    }
    //declare a varible to output results and call function
    int smallest;
    smallest = find_minimum(a,K);
    //display final output
    printf("The factory can build %d computer(s)\n",smallest);
    
    return 0;
}

