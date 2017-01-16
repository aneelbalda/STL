FUNCTORS:-	

Functors are objects that can be treated as though they are a function or function pointer.

int increment(int x) {  return (x+1); }

// Apply increment to all elements of
// arr[] and store the modified elements
// back in arr[]
transform(arr, arr+n, arr, increment);	// unary operation

// vect is a vector of integers.
transform(vect.begin(), vect.end(), vect.begin(), increment);  // unary operation

// Single line code to add arr1[] and arr2[] and
// store result in res[]
transform(arr1, arr1+n, arr2, res, plus<int>());	// binary operation

===========================================================================================
transform() in C++ is used in two forms:


1.	Unary Operation : Applies a unary operator on input to convert into output

transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation) 

2.	Binary Operation : Applies a binary operator on input to convert into output

transform(Iterator inputBegin1, Iterator inputEnd1, Iterator inputBegin2, Iterator OutputBegin, binary_operation) 

=============================================================================================

A functor (or function object) is a C++ class that acts like a function.
Functors are called using the same old function call syntax.
To create a functor, we create a object that overloads the operator().

// A Functor
class increment
{
private:
    int num;
public:
    increment(int n) : num(n) {  }
 
    // This operator overloading enables calling
    // operator function () on objects of increment
    int operator () (int arr_num) const {
        return num + arr_num;
    }
};


// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int to_add = 5;
 
    transform(arr, arr+n, arr, increment(to_add));
 
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}


The line,
transform(arr, arr+n, arr, increment(to_add));

is the same as writing below two lines,
// Creating object of increment
increment obj(to_add); 

// Calling () on object
transform(arr, arr+n, arr, obj); 

Thus, an object a is created that overloads the operator().
Hence, functors can be used effectively in conjunction with C++ STLs.

