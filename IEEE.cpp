#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

void IEEE(int sb, double n)
{
    int N,frc[1000],i,j,c,d,t,x,bias,mv,exp,len, l=0,cn=0,dc=0,p=0;
    double fraction;
    char tem,Temp[10000];
    int bin0[1000],bin1[100],tm[1000];

    stringstream bin,BIN;
    N=n;

    fraction=n-N;

    for( i=0; N>0 ;i++)
    {
        bin0[i]=N%2;
        N=N/2;


    }
    j=i;

     for (c = i - 1, d = 0; c >= 0; c--, d++)
            bin1[d] = bin0[c];


    for( i=0;i<j;i++)
    {
        bin<<bin1[i];
        cn++;
      // cout<<bin1[i]<<endl;

    }
    string str(bin.str());

      //  cout<<str;

   // cout<<fraction<<endl;

    for(i=0; 1 ;i++)
    {   //cout<<" A "<<endl;
        frc[i]= fraction*2;
        t=fraction*2;
        fraction=(fraction*2)-t;
        if(fraction==0)
            break;
   // cout<<i<<endl;
    }

    for( j=0; j<=i; j++)
    {
        BIN<<frc[j];

    }
    //cout<<j<<endl;

    string str2(BIN.str());
    str.append(".");
    str.append(str2);
    cout<<str<<endl;
    x=0;

    if(cn==0)
        {
    for(i=0; 1 ;i++)
    {   x++;
        if(str[i]=='1')
            break;

    }
    mv=-(x-1);
        }
    else
    {

    for(i=0; 1 ;i++)
    {   x++;
        if(str[i]=='.')
            break;

    }
    mv=x-2;
    }

    exp=mv+127;
    cout<<"exp "<<exp<<endl;
    for(i=x-1; 1 ;i--)
    {   tem=str[i-1];
        str[i-1]=str[i];
        str[i]=tem;
       // cout<<"flag\n";
        if(i==2)
            break;
    }
    cout<<str<<endl;

    len=str.size();
   //cout<<x;
    for(i=2; i<len ;i++)
    {
        Temp[i-2]=str[i];

       // if(str[i]=='/0')
         //   break;

    }



    cout<<endl<<endl<<sb<<" ";

     for(i=0;exp>0;i++)
    {
        dc++;
    tm[i]=exp%2;
    exp=exp/2;
    l++;
    }

    for(int k=dc; k<8 ;k++)
        cout<<"0";

    for(i=i-1;i>=0;i--)
    {
        cout<<tm[i];
    }
    cout<<" ";

    if(cn==0){
    for(i=x; i<len ;i++)
    cout<<str[i];
    }
    else
        for(i=0; i<32-l+1 ;i++)
            cout<<Temp[i];
            p++;





}

int main()
{
    double n;
    int sb;

    cout<<"input Decimal Number: ";
    cin>>n;
    if(n<0)
    {
        n=-(n);
        sb=1;
       // cout<<"1 ";
    }
    else if(n>0)
    {

        sb=0;
       // cout<<"0 ";
    }
    else
        return 0;

        IEEE(sb,n);

}
