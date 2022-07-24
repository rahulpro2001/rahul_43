#include<bits/stdc++.h>
using namespace std;
#define size 5
vector<int> stackk(size);
int front = -1,rear = -1;
void Push()
{
    if((front ==0 and rear +1 == size) || (rear+1==front)){cout<<"overflow\n";return;}
    int val;cout<<"enter val: "<<endl;cin>>val;
    int val;cout<<"enter val: "<<endl;cin>>val;
    if(rear==-1 and front == -1)front = 0;
    rear = (rear+1)%size;
    stackk[rear] = val;
}

void popp()
{
    if(front==-1) {cout<<"underflow\n";return ;}
    cout<<"deleted: "<<stackk[front]<<endl;
    if(front == rear)front = rear = -1;
    else front = (front+1)%size;
}

void fronty()
{
    cout<<stackk[front]<<endl;
}
void back()
{
    cout<<stackk[rear]<<endl;
}

int main() {
   int ch, val;
 
   do {
    cout<<"1) Push in queue"<<endl;
   cout<<"2) Pop from queue"<<endl;
   cout<<"3) Display front"<<endl;
   cout<<"4) back element"<<endl;
   cout<<"5) exit"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            Push();
            break;
         }
         case 2: {
            popp();
            break;
         }
         case 3: {
            fronty();
            break;
         }
         case 4: {
            back();
            break;
         }
         case 5: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}



