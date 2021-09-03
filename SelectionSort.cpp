// Subscribe Efficient Learning World 
//You can watch the explanation of this Sorting algorithm on youtube channel name Efficient Learning World.
//Link of the explanation of this code is : https://youtu.be/LcjMYntPKA0
#include<iostream>					// Header file 
using namespace std;
void Selection_Sort(int array[], int size) 
{
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
     {
        // Select the minimum element in each loop.
       if (array[i] < array[min_idx]) 
        {
            min_idx = i;
         }
    // put min at the correct position
    swap(array[min_idx], array[step]);
  }
}
}
void print_Array(int arr[],int size)
{
	cout<<"Array Elements :  " ;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()						 // Main Function
{	
int array[5]={5,4,3,2,1};	                     // Declare and initialize array elements
int ArraySize=sizeof(array)/sizeof(array[0]);	//find Size of Array
cout<<"Before Sorting\n";
print_Array(array,ArraySize);			       // Print Array elements before applying Selection sort
Selection_Sort(array,ArraySize);	          // Call Function in which we apply selection Sort on array 
cout<<"After Sorting\n";
print_Array(array,ArraySize);		         // Print Array elements after applying Selection sort
}
