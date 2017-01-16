//multidimensional vectors

vector< vector<int> > Matrix;
int N, M;
vector< vector<int> > Matrix(N, vector<int>(M, -1)); // intialize marix to -1


//pass vectors to function by reference
void some_function(const vector<int>& v) { 
	// OK 
    // ... 
} 


// if we want to modify the vector than remove const
int modify_vector(vector<int>& v) {
	// Correct 
	V[0]++; 
}


//using pairs
pair<string, pair<int,int> > P; 
string s = P.first; // extract string 
int x = P.second.first; // extract first int 
int y = P.second.second; // extract second int 

//some functions of <algorithm>
swap(a,b),min(a,b),max(a,b) is the standard STL function, can be used anywhere.


( c.begin() == c.end() ) // if and only if c is empty
( c.end() – c.begin() ) // will always be equal to c.size()

/*The error here is that you are trying to create the non-const
iterator from a const object with the begin() member function */
void f(const vector<int>& v) { 
      for(vector<int>::iterator it = v.begin(); ;) // wrong way 
      for(vector<int>::const_iterator it = v.begin(); ;) // correct way 
  } 

======================================================================================================

STRINGS:

string s = "hello";  
string s1 = s.substr(0, 3), // "hel" 
s2 = s.substr(1, 3), // "ell" 
s3 = s.substr(0, s.length()-1), //"hell" 
s4 = s.substr(1); // "ello" 

======================================================================================================

USEFUL MACROS:

1. #define all(c) c.begin(), c.end()

ex1:	sort(X.begin(), X.end()); // Sort array in ascending order 
		sort(all(X)); // Sort array in ascending order, use our #define

ex2:	// Shift all elements from second to last to the appropriate number of elements. 
 		// Then copy the contents of v2 into v. 
		v.insert(1, all(v2)); 




2.	//typeof(a+b) x = (a+b);	
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

	void f(const vector<int>& v) { 
		int r = 0; 
		tr(v, it) { 
			r += (*it)*(*it); 
		} 
		return r; 
	}

	-> set< pair<string, pair< int, vector<int> > > SS; 
	   int total = 0; 
	   tr(SS, it) { 
	      total += it->second.first;
	      //OR
	      total += (*it).second.first;
	   }

3.
#define present(container, element) (container.find(element) != container.end()) // used for set and maps

4.
#define cpresent(container, element) (find(all(container),element) != container.end()) // general purpose defined
																					   // in <algorithm>
5.
#define sz(a) int((a).size()) 

6.
#define pb push_back

7. typedef vector<int> vi; 
8. typedef vector<vi> vvi; 
9. typedef pair<int,int> ii; 


// creating vector rom a map
map<string, int> M; 
vector< pair<string, int> > V(all(M)); // remember all(c) stands for (c).begin(),(c).end() 

========================================================================================================
Merging lists:

Another common task is to operate with sorted lists of elements

STL provides four algorithms for these tasks: 
set_union(…) 
set_intersection(…) 
set_difference(…)
set_symmetric_difference(…)
(sorted order is a must to use above algorithms)


set intersection:

//The 'begin_result' is the iterator from where the result will be written
end_result = set_intersection(begin1, end1, begin2, end2, begin_result); //end_result is an iterator
																		// returned by the function
//example for set_intersection
int data1[] = { 1, 2, 5, 6, 8, 9, 10 }; 
int data2[] = { 0, 2, 3, 4, 7, 8, 10 }; 
vector<int> v1(data1, data1+sizeof(data1)/sizeof(data1[0]));
vector<int> v2(data2, data2+sizeof(data2)/sizeof(data2[0])); 
vector<int> tmp(max(v1.size(), v2.size());
vector<int> res = vector<int> (tmp.begin(), set_intersection(all(v1), all(v2), tmp.begin());

//to get count of set intersection
int cnt = set_intersection(all(v1), all(v2), tmp.begin()) – tmp.begin();


//set symmetric difference
set<int> s1, s2; 
for(int i = 0; i < 500; i++) { 
        s1.insert(i*(i+1) % 1000); 
        s2.insert(i*i*i % 1000); 
}
static int temp[5000]; // greater than we need 
vector<int> res = vi(temp, set_symmetric_difference(all(s1), all(s2), temp)); 
int cnt = set_symmetric_difference(all(s1), all(s2), temp) – temp;

==============================================================================================
Calculating Algorithms:

/*Yet another interesting algorithm is accumulate(...).
If called for a vector of int-s and third parameter zero,
accumulate(...) will return the sum of elements in vector.
*/
vector<int> v; 
int sum = accumulate(all(v), 0); 

/*The result of accumulate() call always has the type of its third argument.
So, if you are not sure that the sum fits in integer, specify the third parameter type directly
*/

vector<int> v;
long long sum = accumulate(all(v), (long long)0); 

//calculates product as well
double product = accumulate(all(v), double(1), multiplies<double>()); 
// don’t forget to start with 1 !

/*Another interesting algorithm is inner_product(...)
It calculates the scalar product of two intervals. 
*/
For example:

vector<int> v1; 
vector<int> v2; 
for(int i = 0; i < 3; i++) { 
      v1.push_back(10-i); 
      v2.push_back(i+1); 
} 
int r = inner_product(all(v1), v2.begin(), 0); 
//'r' will hold (v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2]), or (10*1+9*2+8*3), which is 52.

===================================================================================================
Comparators:

Using your own objects in Maps and Sets
Elements in set and map are ordered. It is the general rule.
So, if you want to enable using of your objects in set or map you should make them comparable. 
You already know the rule of comparisons in STL:

all comparison is based on 'operator <'

====================================================================================================
Consider we have a weighted directed graph that is stored as:

vector< vector< pair<int,int> > > G;

where:

G.size() is the number of vertices in our graph
G[i].size() is the number of vertices directly reachable from vertex with index i
G[i][j].first is the index of j-th vertex reachable from vertex i
G[i][j].second is the length of the edge heading from vertex i to vertex G[i][j].first
