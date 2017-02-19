/*
ID: ystanwar
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string c1,g1;
	getline(fin,c1);
	getline(fin,g1);
	int l1=c1.length();
	int l2=g1.length();
	//cout<<l1<<" "<<l2<<endl;
	int sum1=1;
	int sum2=1;
	//cout<<c1[0]<<" "<<g1[0]<<endl;
	for(int i=0;i<l1;i++)
    {
    for(int j=65;j<91;j++)
     {
        if(c1[i]==j)
        sum1=sum1*(j-64);
     }
    }
    for(int i=0;i<l2;i++)
    {
    for(int j=65;j<91;j++)
     {
        if(g1[i]==j)
        sum2=sum2*(j-64);
     }
    }
    //cout<<sum1<<" "<<sum2<<endl;
    if((sum1%47)==(sum2%47)){
        fout<<"GO"<<endl;
    }
    else{
        fout<<"STAY"<<endl;
    }
    return 0;
}
