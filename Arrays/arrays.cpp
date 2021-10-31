Declaration : datatype arrayname[size];
                        int arr[10];
 
Input array : for(int i=0; i<10; i++)  cin>>arr[i];

We can use store integer type of data to the array arr using above segment.
 
----------
 
Traverse : Traversing can easy in linera array. Algorithm:
 

C++ implement :
void traverse(int arr[])
{
       for(int i=0; i<10; i++)   cout<<arr[i];
}
 
----------
 
Insertion : Inserting an element at the end of a linear array can be easily done provided the memory space space allocated for the array is large enough to accommodate the additional element. Inserting an element in the middle . . Algorithm : Insertion(arr[], n, k, item) here arr is a linear array with n elements and k is index we item insert. This algorithm inserts an item to kth in index in arr.
 
Step 1:Start
Step 2: Repeat for i=n-1 down to k(index)
   Shift the element dawn by one position] arr[i+1]=arr[i];
  [End of the loop]
Step 3: set arr[k] = item
Step 4: n++; Step 5 : Exit.
 

C++ implement :
void insert(int arr[], int n, int k, int item)
{
   for(int i=n-1; i>=k; i--) 
      {
         arr[i]=arr[i+1];
      }
      arr[k] = item;
      n++;
}
 
----------
 
Deletion : Deletion is very easy on linear array.
 
Algorithm : Deletion(arr, n, k) Here arr is a linear array with n number of items. K is position of elememt which can be deleted.
Step 1:Start
Step 2: Repeat for i=k upto n
       [Move the element upword]  arr[i]=arr[i+1];
      [End of the loop]
Step 3: n--;
Step 4 : Exit.


C++ implementation :
 void deletion(int arr[], int n, int k)
 { 
      for(int i=k; i<n; i++) 
       { 
            arr[i] = arr[i+1]; 
       } 
      n--; 
  }
 
----------
