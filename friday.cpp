
/*
ID: ystanwar
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;
int day[7];

void calc(int d,int j)
{
    int mod=(d+j)%7;

switch(mod){
    case 0:
      day[0]++;
    break;
    case 1:
    day[1]++;
    break;
    case 2:
    day[2]++;
    break;
    case 3:
    day[3]++;
    break;
    case 4:
    day[4]++;
    break;
    case 5:
    day[5]++;
    break;
    case 6:
    day[6]++;
    break;
    default:
        break;

    }


}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

int n;
cin>>n;

int y=1990+n;

for (int i=0;i<7;i++)
{
    day[i]=0;
}
int i=0;
int j1=-1;
int leap=0;
int days;
for(int j=1990;j<y;j++)
{
    j1++;
    leap=0;
    if(j%4==0&&j%100!=0)
    {
        days=366;
        leap=1;

    }
    else if(j%400==0)
    {
         days=366;
         leap=1;
    }
    else
        days=365;

	for(int i=1;i<=days;i++)
    {
        if((i>=1)&&(i<=(31)))
        {
            if(i==13)
            {
                calc(i,j1);
            }
        }
        else if((i>31)&&i<=(leap+(31+28)))
        {
            if((i-31)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>59+leap)&&i<=(leap+90))
        {
             if((i-59-leap)==13)
            {
                calc(i,j1 );
            }
        }
         else if((i>90+leap)&&i<=(leap+120))
        {
             if((i-90-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>120+leap)&&i<=(leap+151))
        {
             if((i-120-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>151+leap)&&i<=(leap+181))
        {
           if((i-151-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>181+leap)&&i<=(leap+212))
        {
             if((i-181-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>212+leap)&&i<=(leap+243))
        {
             if((i-212-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>243+leap)&&i<=(leap+273))
        {
             if((i-243-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>273+leap)&&i<=(leap+304))
        {
             if((i-273-leap)==13)
            {
                calc(i,j1);
            }
        }
         else if((i>304+leap)&&i<=(leap+334))
        {
             if((i-304-leap)==13)
            {
                calc(i,j1);
            }
        }
        else{
             if((i-334-leap)==13)
            {
                calc(i,j1);
            }
        }



    }
    if(leap==1)
        {
             j1++;
        }
}
for(int i=0;i<7;i++)
{
cout<<day[i]<<" ";

}




    return 0;
}

