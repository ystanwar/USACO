
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
 int p;

}v[10];

int getid(string s,int n)
{

    for(int i=0;i<n;i++)
    {

              string s1=v[i].name;
              if(s==s1)
              {
                  return v[i].id;
              }

    }
    return -1;

}
int display(int n)
{
 for(int i=0;i<n;i++)
    {
                int ans=v[i].m-v[i].p;
               cout<<v[i].name<<" "<<ans<<" "<<v[i].p<<endl;

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
        // fout<<v[i].id<<"-->"<<v[i].name<<" ";
	}


string s1;
int m,nof;
for(int i=0;i<n;i++)
{
     fin>>s1;
     fin>>m>>nof;
     int don=getid(s1,n)-1;

     v[don].m=v[don].m+m;
     v[don].p=m;
     if(nof==0)
     {

     }
      else{
        int mon=(m-m%nof)/nof;

        v[don].m=v[don].m-(mon*nof);
       cout<<v[don].name<<"-"<<v[don].m<<"<-->"<<v[don].p<<"--------";
        for(int j=0;j<nof;j++)
        {
            string fri;
            fin>>fri;
            int pos=getid(fri,n)-1;
            v[pos].m=v[pos].m+mon;
          //  cout<<v[pos].name<<"-"<<v[pos].m<<"<-->";
        }
cout<<endl;
      }
}
display(n);

    return 0;
}
