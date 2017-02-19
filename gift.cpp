
/*
ID: ystanwar
PROG: gift
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;

struct friends{
 string name;
 int id=0;
 int m=0;

}v[10];

int getid(string s,int n)
{

    for(int i=0;i<n;i++)
    {
        if(s==v[i].name);
           {
               cout<<v[i].name<<endl;
                return i;
           }
    }
    return 0;

}
int display(int n)
{
 for(int i=0;i<n;i++)
    {

               cout<<v[i].name<<" "<<v[i].m<<endl;

    }
}
int main() {
    ofstream fout ("gift.out");
    ifstream fin ("gift.in");

	int n;
	fin>>n;
	string str;

	for(int i=0;i<n;i++)
	{

         fin>>v[i].name;
         v[i].id=i+1;
         fout<<v[i].id<<"-->"<<v[i].name<<" ";
	}


display(n);
string s1;
int m,nof;
for(int i=0;i<n;i++)
{
     fin>>s1;
     cin>>m>>nof;
     int don=getid(s1,n)-1;
     v[don].m=m;
     int mon=(m-m%nof)/nof;
     if(nof==0||m==0)
     {

     }
      else{
        v[don].m=v[don].m-(mon*nof);
        for(int j=0;j<nof;j++)
        {
            string fri;
            fin>>fri;
            int pos=getid(fri,n)-1;
            v[pos].m=v[pos].m+mon;

        }

      }
}


    return 0;
}
