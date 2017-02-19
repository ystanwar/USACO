/*
ID: ystanwar
PROG: gift
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ofstream fout ("gift.out");
    ifstream fin ("gift.in");

	int n;
	fin>>n;
	vector<string> v;
	string str;
	for(int i=0;i<n+1;i++)
	{
		getline(fin,str);
		v.push_back(str);
        //fout<<i<<"-->"<<v[i]<<" ";
	}
int net[n][1];
vector<string> o;
for(int i=0;i<=n;i++)
{
    if(i==0)
    {
        o.push_back("ok");
    }
    else{
        getline(fin,str);
        o.push_back(str);

    }
}


    return 0;
}
