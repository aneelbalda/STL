#include <bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define tr(c, it) for(typeof(c.begin()) it = c.begin(); it != c.end(); it++)


int main(int argc, char const *argv[])
{
	vector<int> v;
	int temp;

	for (int i = 0; i < 10 ; ++i)
	{	
		cin>>temp;
		v.push_back(temp);
	}
	sort(all(v));
	tr(v, it){
		cout<<*it<<" ";	
	}
	cout<<"\n"<<binary_search(v.begin(),v.end(),5)<<"\n"; // 1 if present, 0 if not present
	return 0;
}