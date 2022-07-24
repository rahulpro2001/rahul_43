//top and pop O(N)
#include<bits/stdc++.h>
using namespace std;
// #define size 5;
queue<int> q1,q2;

void Push()
{
   if(q1.size()==5){
       cout<<"overflow\n";
       return;
   }
   int x ;cout<<"enter value: ";cin>>x;
   q1.push(x);
}

void popp()
{
    if(q1.size()==0){cout<<"underflow";return;}
    while(q1.size()!=1){q2.push(q1.front());q1.pop();}
    cout<<"deleted:"<<q1.front();
    q1.pop();
    while(!q2.empty())
    {
       q1.push(q2.front());q2.pop();
    }
}

void topp()
{
    if(q1.size()==0){cout<<"empty";return;}
    while(q1.size()!=1){q2.push(q1.front());q1.pop();}
    cout<<"topp:"<<q1.front();
    q2.push(q1.front());q1.pop();
    while(!q2.empty())
    {
       q1.push(q2.front());q2.pop();
    }
}

int main() {
   int ch, val;
 
   do {
    cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display top"<<endl;
//   cout<<"4) back element"<<endl;
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
            topp();
            break;
         }
        //  case 4: {
        //     back();
        //     break;
        //  }
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




//using single queue

// #include<bits/stdc++.h>
// using namespace std;
// #define n 5
// queue<int> q1;

// void Push()
// {
//    if(q1.size()==n){
//        cout<<"overflow\n";
//        return;
//    }
//     int len = q1.size();
//    int x ;cout<<"enter value: ";cin>>x;
//    q1.push(x);
//    for(int i = 0;i<len;i++)
//    {
//        q1.push(q1.front());q1.pop();
//    }
// }

// void popp()
// {
//     if(q1.size()==0){cout<<"underflow";return;}
//     cout<<"deleted:"<<q1.front();
//     q1.pop();
// }

// void topp()
// {
//     if(q1.size()==0){cout<<"empty";return;}
//     cout<<"topp:"<<q1.front();
// }

// int main() {
//    int ch, val;
 
//    do {
//     cout<<"1) Push in stack"<<endl;
//    cout<<"2) Pop from stack"<<endl;
//    cout<<"3) Display top"<<endl;
//    cout<<"5) exit"<<endl;
//       cout<<"Enter choice: "<<endl;
//       cin>>ch;
//       switch(ch) {
//          case 1: {
//             Push();
//             break;
//          }
//          case 2: {
//             popp();
//             break;
//          }
//          case 3: {
//             topp();
//             break;
//          }
    
//          case 5: {
//             cout<<"Exit"<<endl;
//             break;
//          }
//          default: {
//             cout<<"Invalid Choice"<<endl;
//          }
//       }
//    }while(ch!=5);
//    return 0;
// }
