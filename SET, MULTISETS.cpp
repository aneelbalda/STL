SETS:-

-> Sets are a type of associative containers in which each element has to be unique,
   because the value of the element identifies it.

-> The value of the element cannot be modified once it is added to the set,
   though it is possible to remove 
   and add the modified value of that element.

-> The push_back() member may not be used with set.
   It make sense: since the order of elements in set does not matter, 
   push_back() is not applicable here.
   
-> Since set is not a linear container, it’s impossible to take the element in set by index.
   Therefore, the only way to traverse the elements of set is to use iterators.

Functions associated with Set:

begin() – Returns an iterator to the first element in the set
end() – Returns an iterator to the theoretical element that follows last element in the set
size() – Returns the number of elements in the set
max_size() – Returns the maximum number of elements that the set can hold
empty() – Returns whether the set is empty
pair <iterator, bool> insert(const g) – Adds a new element ‘g’ to the set
iterator insert (iterator position, const g) – Adds a new element ‘g’ at the position pointed by iterator
erase(iterator position) – Removes the element at the position pointed by the iterator
erase(const g)- Removes the value ‘g’ from the set
clear() – Removes all the elements from the set
key_comp() / value_comp() – Returns the object that determines how the elements in the set are ordered (‘<‘ by default)
find(const g) – Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end
count(const g) – Returns the number of matches to element ‘g’ in the set
lower_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set
upper_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will go after the element ‘g’ in the set

set <int> gquiz1; 				  // declaring a set which contains elements in increasing order.
set <int, greater <int> > gquiz1; // declaring a set which contains elements in decreasing order.

// assigning the elements from gquiz1 to gquiz2
set <int> gquiz2(gquiz1.begin(), gquiz1.end());

cout << "\n gquiz2 after removal of elements less than 30 : ";
gquiz2.erase(gquiz2.begin(), gquiz2.find(30));

int num;
num = gquiz2.erase (50); // num contains the count of erased elements


========================================================================================================

MULTISETS:-

Multisets are a type of associative containers similar to set, 
with an exception that multiple elements can have same values.(duplicate elements allowed)

functions used are same as above used for sets.

multiset <int, greater <int> > gquiz1;
