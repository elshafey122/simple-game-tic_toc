#include <iostream>
using namespace std;
int main()
{
   const int n=3;
   char arr[n][n];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           arr[i][j]='.';
       }
   }
   int play1,mov1,play2,mov2;
   int start=true;
   while(start)
   {
      cout<<"player x turn , enter empty location (r,c) :"<<endl;
      cin>>play1>>mov1;
      while( (play1>n ||play1 < 0) || (mov1>n||mov1<0) || (arr[play1-1][mov1-1]=='x') || (arr[play1-1][mov1-1]=='o') )
      {
          cout<<"invalid input try again"<<endl;
          cout<<"player x turn , enter empty location (r,c) :"<<endl;
          cin>>play1>>mov1;
      }
      arr[play1-1][mov1-1]='x';
      for(int i=0;i<n;i++)
       {
       for(int j=0;j<n;j++)
         {
           cout<<arr[i][j];
         }
          cout<<endl;
        }
        if( (arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x') ||
            (arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x') ||
            (arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x') ||
            (arr[2][2]=='x'&&arr[1][2]=='x'&&arr[0][2]=='x') ||
            (arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x') ||
            (arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x') ||
            (arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x') ||
            (arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x')   )
        {
            start=false;
            cout<<"player x win";
            break;
        }
        else
        {
            cout<<"player o turn , enter empty location (r,c) :"<<endl;
            cin>>play2>>mov2;
            while( (play2>n) || (mov2>n) || (arr[play2-1][mov2-1]=='x') || (arr[play2-1][mov2-1]=='o'))
             {
              cout<<"invalid input try again"<<endl;
              cout<<"player o turn , enter empty location (r,c) :"<<endl;
               cin>>play2>>mov2;
             }
            arr[play2-1][mov2-1]='o';
            for(int i=0;i<n;i++)
           {
           for(int j=0;j<n;j++)
             {
               cout<<arr[i][j];
             }
              cout<<endl;
            }
            if( (arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o')||
            (arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o') ||
            (arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o') ||
            (arr[2][2]=='o'&&arr[1][2]=='o'&&arr[0][2]=='o') ||
            (arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o') ||
            (arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o') ||
            (arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o') ||
            (arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o')    )
            {
                start=false;
                cout<<"player o win";
                break;
            }
      }
   }
}
