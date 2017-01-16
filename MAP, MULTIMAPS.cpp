MAPS:-

Maps are associative containers that store elements in a mapped fashion.
Each element has a key value and a mapped value. No two mapped values can have same key values.

Sorted according to the keys (by default increasing order)

Internally map and set are almost always stored as red-black trees.

Functions associated with Map:

begin() – Returns an iterator to the first element in the map

end() – Returns an iterator to the theoretical element that follows last element in the map

size() – Returns the number of elements in the map

max_size() – Returns the maximum number of elements that the map can hold

empty() – Returns whether the map is empty

pair insert(keyvalue,mapvalue) – Adds a new element to the map

erase(iterator position) – Removes the element at the position pointed by the iterator

erase(const g)- Removes the key value ‘g’ from the map

clear() – Removes all the elements from the map

key_comp() / value_comp() – Returns the object that determines
							how the elements in the map are ordered ( "<" by default )
find(const g) – Returns an iterator to the element with key value ‘g’ in the map if found,
				else returns the iterator to end

count(const g) – Returns the number of matches to element with key value ‘g’ in the map

lower_bound(const g) – Returns an iterator to the first element that is equivalent to mapped
					   value with key value ‘g’ or definitely will not go before the element 
					   with key value ‘g’ in the map

upper_bound(const g) – Returns an iterator to the first element that is equivalent to mapped
                       value with key value ‘g’ or definitely will go after the element
                       with key value ‘g’ in the map

// empty map container
map <int, int> gquiz1;

gquiz1.insert(pair <int, int> (1, 40));
gquiz1.insert(make_pair(1, 40));

map <int, int> :: iterator itr;
itr = gquiz1.begin();

itr->first;  	//key
itr->second; 	//value

// assigning the elements from gquiz1 to gquiz2
map <int, int> gquiz2(gquiz1.begin(), gquiz1.end());

// remove all elements up to element with key=3 in gquiz2
gquiz2.erase(gquiz2.begin(), gquiz2.find(3));

// remove all elements with key = 4
int num;
num = gquiz2.erase (4);

//use of[] operator
map<string, int> M; 
M["Top"] = 1; 
M["Coder"] = 2; 
M["SRM"] = 10;

//to Remember
void f(const map<string, int>& M) { 
      if(M["the meaning"] == 42) { // Error! Cannot use [] on const map objects!. 
      	                           //operator [] will create an element if it does not exist 
      } 
      if(M.find("the meaning") != M.end() && M.find("the meaning")->second == 42) { // Correct 
           cout << "Don't Panic!" << endl; 
      } 
 }

===============================================================================================================


MULTIMAP:-

Multimap is similar to mapwith an addition that multiple elements can have same keys.
Rather than each element being unique, the key value and mapped value pair has to be
unique in this case.

Functions are same as that of map.

multimap <int, int> gquiz1;
multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end());



