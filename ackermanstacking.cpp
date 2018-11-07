#include<iostream>
using namespace std;
class stack;

 int ackermann(int m, int n) {
  if (m == 0) {
    return n + 1;}
  if (n == 0) {
    return ackermann(m - 1, 1);}
    return ackermann(m - 1, ackermann(m, n - 1));}

int main();
{cout<<"n=";cin>>n;
somestack.push((n+2)-3);
int direction=1;
int oldval1;
while (somestack.whathight()>=1)
    {cout<<endl<<somestack.whathight();
    if (direction==1)
    {somestack.pop(&oldval1);
     somestack.push(oldval1);
     somestack.push(oldval1-1);
if (oldval1==1) direction=0;}
else{if(n >= 12)
    {somestack.pop(&oldval1);
     somestack.pop(&oldval1);
     somestack.push(n-1);
     somestack.pop(&oldval1);}
else{somestack.pop(&oldval1);
     somestack.push(ackermann (n+2));
     somestack.pop(&oldval1);}}}
cout<<" Compute = "<<oldval1;
return 0;}
int stack::pop(int *old)
{if  (isempty()) { return 0;}
 *old=S[top];
 top--;
 return 1;}
