#include <bits/stdc++.h>
using namespace std;

bool check(int x){
	return x>-1;
}

void myfunction(int x){
	cout<<x<<" ";
}

int main(){

	system("clear");

	vector<int> v;
	int arr[10];
	int temp;

	//vector<int> vect(arr, arr+n); // create vector from an array

	for (int i = 0; i < 10 ; ++i)
	{	
		cin>>temp;
		v.push_back(temp);
		arr[i]=temp;
	}
	
	cout<<"Original vector\n";

	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout<<*i<<" ";
	}

	//or
	//for_each (v.begin(), v.end(), myfunction);

	//or
	// for (int &x : v) 
	// 	cout << x << " ";

	cout<<"\n=======================================\n";

	//Declaring iterator to a vector
	// vector<int>::iterator ptr = v.begin();
	// vector<int> ar1 = {10, 20, 30};
 //    // Using advance() to increment iterator position
 //    // points to 3rd Position
	// advance(ptr, 3);
	// //cout << *ptr << " ";
	// copy(ar1.begin(), ar1.end(), inserter(v,ptr));
	// for (int &x : v) 
	// 	cout << x << " ";
	// cout<<"\n";
	// Using next() to return new iterator
    // points to 3rd postion
	// auto it = next(v.begin(), 3);

    // Using prev() to return new iterator
    // points to 3rd position from backwards
	// auto it1 = prev(v.end(), 3);

	//=======================================================================================================

	// sort(v.begin(),v.end());   // sorts in increasing order
	// sort(v.rbegin(),v.rend()); // sorts in decreasing order
	// sort(arr,arr+10);
	// reverse(v.begin(),v.end()); //reverses the vector

	// for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	// {
	// 	cout<<*i<<" ";
	// }
	// cout<<"\n";

	//=======================================================================================================

	 // v.erase(v.begin()+1);  // erases element at 1st index
 	 // v.erase(unique(v.begin(),v.end()),v.end()); // deletes multiple occurences, requires sorted order.

	 // for (int i = 0; i < 10 ; ++i)
	 // {
	 // 	cout<<arr[i]<<" ";
	 // }
	 // cout<<"\n";

	//=======================================================================================================

	// cout<<binary_search(v.begin(),v.end(),11)<<"\n";
	// cout<<binary_search(arr,arr+10,2)<<"\n";

	//=======================================================================================================

	// cout<<*max_element(v.begin(),v.end())<<"\n";

	// int k= max_element(v.begin(),v.end())-v.begin(); // returns index of max element
	// cout << k<<"\n";

	//same for min_element

	//=======================================================================================================

	// cout <<accumulate(v.begin(), v.end(),0); // sums the elements of vector

	//=======================================================================================================


	// if( find(v.begin(),v.end(),8) != v.end() )
	// 	cout<<"element present\n";
	// cout<<find(v.begin(),v.end(),8)-v.begin()<<"\n"; // returns index of element found (first occcurence)

	// if( find(arr,arr+10,8) != arr+10 )
	// 	cout<<"element present\n";
	// cout<<find(arr,arr+10,8)-arr<<"\n"; // returns index of element found (first occcurence)

	//=======================================================================================================
	
	// cout<<count(v.begin(),v.end(),8)<<"\n";
	// cout<<count_if (v.begin(), v.end(), [](int x) {return x%2==0;})<<"\n"; //counts based on the specified condition 
																			  //here it counts even no's
	//=======================================================================================================

	//lower_bound returns the index of first occurence of the desired element
	//upper_bound returns the index of the first element greator than the last occurence of the desired element

	// cout<<lower_bound(v.begin(),v.end(),7) - v.begin() <<"\n"; // requires sorted order
	// cout<<lower_bound(arr,arr+10,8) - arr <<"\n";				// requires sorted order
	// cout<<upper_bound(v.begin(),v.end(),8) - v.begin() <<"\n";	// requires sorted order

	//=======================================================================================================

	 // sorted order to be maintained before using permutations

	 // next_permutation(v.begin(), v.end());
	 // prev_permutation(v.begin(), v.end());

	//=======================================================================================================

	// distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 
	// Return distance of first to maximum element
	// cout<< distance(v.begin(), max_element(v.begin(), v.end()))<<"\n";

	//=======================================================================================================
	// if( all_of(arr, arr+10, [](int x) {return x<8;} ))
	// 	cout<<"every element satisfies predicate\n";
	// else
	// 	cout<<"some element doesnot satisfies predicate\n";

	// if( all_of(v.begin(), v.end(), check) )
	// 	cout<<"every element satisfies predicate\n";
	// else
	// 	cout<<"some element doesnot satisfies predicate\n";

	// if( any_of(arr, arr+10, [](int x) {return x<0;} ))
	// 	cout<<"atleast one element satisfies predicate\n";
	// else
	// 	cout<<"no element satisfies predicate\n";

	// if( none_of(arr, arr+10, [](int x) {return x<0;} ))
	// 	cout<<"no element satisfies predicate\n";
	
	//=======================================================================================================

	// Using copy_n() to copy contents, creates a deep copy of array.

	// int arr1[10];
	
	// copy_n(arr, 10, arr1);

	
	// iota(arr1, arr1+10, 20);  // to assign continuous values to array.
								 // This function accepts 3 arguments, the array name, size, 
	                             // and the starting number.

	// for (int i = 0; i < 10 ; ++i)
	// {
	// 	cout<<arr1[i]<<" ";
	// }
	// cout<<"\n";

	//=======================================================================================================
	// partition(v.begin(), v.end(), [](int x) {return x%2==0;}); // partitioning a vector based on a condition

	
	// if(is_partitioned(v.begin(), v.end(), [](int x) {return x%2==0;})) // returns true if container is partitioned
	// cout<<"Partitioned\n";											   // based on the condition.				

	// stable_partition(v.begin(), v.end(), [](int x) {return x%2==0;}); // partitioning vector using stable_partition() 
																      // in order of original vector
																	  //  recall concept of stable sort.
	// for (int x : v) 
	// 	cout << x << " ";
	// cout<<"\n";

	//=======================================================================================================

    // Declaring iterator
	// vector<int>::iterator it1;

	/* partition_point(beg, end, condition) :- This function returns an iterator pointing to 
	   the partition point of container i.e. 
	   the position where last element returns true for condition.
	   The container should already be partitioned for this function to work.*/


    // using partition_point() to get ending position of partition
	// auto it = partition_point(v.begin(), v.end(), [](int x) {return x%2==0;});

    // Displaying partitioned Vector
	// cout << "The vector elements returning true for condition are : ";
	// for ( it1= v.begin(); it1!=it; it1++ )
	// 	cout << *it1 << " ";
	// cout << endl;

	//=======================================================================================================

	/* partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements in the different 
	containers mentioned in its arguments. It takes 5 arguments. Beginning and ending position of container, 
	beginning position of new container where elements have to be copied (elements returning true for condition), 
	beginning position of new container where other elements have to be copied (elements returning false for condition)
	and the condition. Resizing new containers is necessary for this function. */

	// Initializing vector
    // vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    // Declaring vector1
    // vector<int> vect1;

    // Declaring vector1
    // vector<int> vect2;

    // Resizing vectors to suitable size using count_if() and resize()
    // int n = count_if (vect.begin(), vect.end(), [](int x){return x%2==0;});
    // vect1.resize(n); 
    // vect2.resize(vect.size()-n);

    // Using partition_copy() to copy partitions
    // partition_copy(vect.begin(), vect.end(), vect1.begin(),vect2.begin(), [](int x){return x%2==0;});


    // Displaying partitioned Vector
    // cout << "The elements that return true for condition are : ";
    // for (int &x : vect1) 
    //         cout << x << " ";
    // cout << endl;

    // Displaying partitioned Vector
    // cout << "The elements that return false for condition are : ";
    // for (int &x : vect2) 
    //         cout << x << " ";
    // cout << endl;	

	//=======================================================================================================
	//=======================================================================================================



	return 0;

}