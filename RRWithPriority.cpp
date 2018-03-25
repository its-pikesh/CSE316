#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
 {
   int x,n,p[10],pp[10],bt[10],w[10],t[10],awt,atat,i,at[10],tq;
 
   //n is number of process
   //p is process
   //pp is process priority
   //bt is process burst time
   //w is wait time
   // t is turnaround time
   //awt is average waiting time
   //atat is average turnaround time
   //at is arrival time
   //tq is time qnatum
 
 
   cout<<"Enter the number of process : ";
   cin>>n;
   cout<<"Enter time quantum";
   cin>>tq;
   cout<<"\n\t Enter burst time : time priorities : Arrival time  \n";
 
   for(i=0;i<n;i++)
    {
      cout<<"\nProcess["<<i+1<<"]:";
      cin>>bt[i]>>pp[i]>>at[i];
      p[i]=i+1;
    }
 
//sorting on the basis of priority
  for(i=0;i<n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
       if(pp[i]<pp[j])
       {
     x=pp[i];
     pp[i]=pp[j];
     pp[j]=x;
     x=bt[i];
     bt[i]=bt[j];
     bt[j]=x;
     x=p[i];
     p[i]=p[j];
     p[j]=x;
      }
      //gc[i]=p[j];
   }
}
w[0]=0;
awt=0;
t[0]=bt[0];
atat=t[0];
for(i=1;i<n;i++)
 {
 	if(tq<n || tq>n) {
	 
   w[i]=t[i-1];
   awt+=w[i];
   t[i]=w[i]+bt[i];
   atat+=t[i];
	 }
 }
 
 //Gantt chrat
 cout<<"\n";
 cout<<"Gantt chart\n";
 for(i=0;i<n;i++)
 {
 	cout<<"P"<<p[i]<<" ";
 }
//Displaying the process
 
cout<<"\n\nProcess \t Burst Time \t Wait Time \t Turn Around Time   Priority \tArrival time \n";
for(i=0;i<n;i++)
cout<<"\n   "<<p[i]<<"\t\t   "<<bt[i]<<"\t\t     "<<w[i]<<"\t\t     "<<t[i]<<"\t\t     "<<pp[i]<<"\t\t"     <<at[i]<<"\n";
awt/=n;
atat/=n;
cout<<"\n Average Wait Time : "<<awt;
cout<<"\n Average Turn Around Time : "<<atat;
getch();
}
