#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vec;
	cout<<"enter number of elements:";
	int n;
	cin>>n;
	cout<<"enter number:";
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		vec.push_back(x);
	}
	
	 for(int x:vec)
	 {
	 	cout<<x<<endl;
	 }
	 
	 cout<<"size of vector:"<<vec.size();
	 cout<<"\ncapacity of vector:"<<vec.capacity();
	 vec.erase(vec.);
	 for(int x:vec)
	 {
	 	cout<<x<<endl;
	 }
	 
	/* v.size()        // number of elements
v.capacity()    // allocated memory size
v.empty()       // true if vector is empty
v.reserve(n)    // reserve capacity
v.shrink_to_fit() // free unused memoryv.push_back(x)      // add at end
v.emplace_back(x)   // faster push_back
v.insert(pos, x)    // insert at positionv.insert(v.begin() + 1, 100);v.pop_back()        // remove last
v.erase(pos)        // remove at position
v.erase(start, end) // remove range
v.clear()           // remove all elementsv.erase(v.begin() + 2);v[i]        // index access
v.at(i)     // safe access (throws error)
v.front()   // first element
v.back()    // last elementv.begin()   // first iterator
v.end()     // last iterator
v.rbegin()  // reverse begin
v.rend()    // reverse endv.resize(n)
v.resize(n, value)
v.assign(n, value)v.assign(5, 10); // {10,10,10,10,10}v1.swap(v2)sort(v.begin(), v.end())
reverse(v.begin(), v.end())
max_element(v.begin(), v.end())
min_element(v.begin(), v.end())
accumulate(v.begin(), v.end(), 0)
count(v.begin(), v.end(), x)
find(v.begin(), v.end*/
	 
	 
	   return 0; 
	
}	