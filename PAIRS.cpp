Pair:-

The pair container is a simple container defined in <utility> header
consisting of two data elements or objects.
The first element is referenced as ‘first’ and the second element as ‘second’ 
and the order is fixed (first, second).
Pair is used to combine together two values which may be different in type.
Pair provides a way to store two heterogeneous objects as a single unit.
Pair can be assigned, copied and compared.
The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which
all the ‘first’ elements are unique keys associated with their ‘second’ value objects.

pair <string, int> g1;         //default
pair <int, char> g2(1, 'a');  //initialized,  different type
pair <int, int> g3(1, 10);   //initialized,  same type
pair <int, char> g4(g3);    //copy of g3

To access the elements, we use variable name followed by dot operator followed by 
the keyword first or second.
cout << g2.first << g2.second;

Another way to initialize a pair is by using the make_pair() function.
g1 = make_pair(string("Geeks"), 1);
g2 = make_pair(1, 'a');

//assigning different values
pair <string, int> g5("Quiz",  3);
g5.first = ".com";
g5.second = 2;

//We can also swap pairs but type of pairs should be same.
pair <string, int> g1;
g1 = make_pair(string("Geeks"), 1);
pair <string, int> g2("Quiz",  3);
swap(g1, g2);

