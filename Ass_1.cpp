#include <iostream>
using namespace std;

// Linear Search
int LSearch(int arr[] , int k, int key)
{
   for(int i=0; i<k; i++)
   {
     if( key==arr[i])
	 {
	 	return i;
		 }	
   }
   
   return -1;
	
}

// Main
int main() {
	
	int val,num,arr[500];
	
	//Accepting inputs from users.
	cout<<"Enter the number : " <<endl;
	cin>>num;
	
	cout<<"Enter Element in the array: " <<endl;
	 for(int j=0; j<num; j++){
	 	cin>>arr[j];
	 }
	 
	 cout<<"Enter the number your are searching for : " <<endl;
	 cin>>val;
	
	// Printing out result 
	 int loc = LSearch(arr, num , val);
	 
	 if(loc<0)
	 {
		cout<<"Element " << arr[loc] << " was not found" <<endl;
	 }
	
	else
	{
		 cout<<"The number " << arr[loc] <<" was found at position " << loc+1 <<endl;
		
	}
	return 0;
}

