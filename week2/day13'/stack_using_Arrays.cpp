#include<bits/stdc++.h>
using namespace std;
vector<int> stackk;

int top = -1;

void popp()
{
    if(top==-1) cout<<"stack is empty\n";
    int var = stackk[top--];
    cout<<var<<"\n";
}

void topp()
{
    if(top==-1)cout<<"empty stack\n";
    cout<<stackk[top]<<" ";    
}

void push()
{
    int x;
    cout<<"enter value:\n";
    cin>>x;
    stackk.push_back(x);
    top++;
}

int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display top of stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            push();
            break;
         }
         case 2: {
            popp();
            break;
         }
         case 3: {
            topp();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}























