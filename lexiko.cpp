#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

   
   vector<string> lexiko;
   
   vector<string> del(vector<string> temp);
   vector<string> del(vector<string> temp)
   {
   	lexiko.push_back(temp[0]);

   	for(int i=1;i<temp.size();++i)
	{
	   	if(temp[i]!=temp[i-1])
		{
			lexiko.push_back(temp[i]);
		}

	}
   
   	return lexiko;
   }
// main() is where program execution begins.
int main() {
	vector<string> temp;
	vector<string> lex;
	string x;
	cout << "Give the entries. To end up insert q \n";
   while(cin >> x)
   {
    if(x=="q")
    	break;
    temp.push_back(x);
   }
   
   sort(temp.begin(),temp.end());   
   cout << "The sorted list is: \n";
   
   for (int i = 0; i < temp.size(); i++)
	 cout << "v[" << i << "] == " << temp[i] << '\n';
	 
	cout << "The distinct values of the entries are: \n";
	lex=del(temp); 
	for (int i = 0; i < lex.size(); i++)
	 cout << "new[" << i << "] == " << lex[i] << '\n';
	
	
   return 0;
}
