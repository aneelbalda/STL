
Array class in C++

The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :-

Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
Array classes are generally more efficient, light-weight and reliable than C-style arrays.



Operations on array :-

1. at() :- This function is used to access the elements of array.

2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple.

3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.

array<int,6> ar = {1, 2, 3, 4, 5, 6};
cout << ar.at(i) << " ";
cout << get<0>(ar)<< " ";
cout << ar[i] << " ";

4. front() :- This returns the first element of array.

5. back() :- This returns the last element of array.

cout << ar.front() << endl;
cout << ar.back() << endl;

6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack.

7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.

cout << ar.size() << endl;
cout << ar.max_size() << endl;

8. swap() :- The swap() swaps all elements of one array with other.

// Initializing 1st array
array<int,6> ar = {1, 2, 3, 4, 5, 6};

// Initializing 2nd array
array<int,6> ar1 = {7, 8, 9, 10, 11, 12}

ar.swap(ar1);

9. empty() :- This function returns true when the array size is zero else returns false.

10. fill() :- This function is used to fill the entire array with a particular value.

ar1.empty()? cout << "Array empty": cout << "Array not empty";

// Filling array with 0
ar.fill(0);