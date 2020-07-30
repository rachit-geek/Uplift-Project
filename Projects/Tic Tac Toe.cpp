#include<bits/stdc++.h>
using namespace std;
int main()
{
    char computer,player;
    cout<<"Player please choose X or O "<<'\n';
    cin>>player; // enter player choice
    char arr[3][3];
    int flag=0,k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]='Q';    // intializing matrix
        }
    }
    if(player=='X')
    {
        computer='O'; //assigning values to computer and player
        flag=1;
    }
    else
    {
        computer='X';
        flag=2;
    }
    int f=(rand() %2)+1; // randomly selecting chance to play first
    if(f==1)
    {
        int n,m;  // enter 2d matrix address (3X3)
        cout<<"Player will begin the game"<<'\n';
        for(int i=1;i<=9;i++)
        {
            if(i%2!=0)
            {
                cout<<"Player turns...Please enter index"<<'\n'; // player chance to play game
                cin>>n>>m;                   // index will be according to 3x3 matrix starting from zero
                if(arr[n][m]=='Q')
                {
                    arr[n][m]=player;

                }
                else
                {
                    cout<<"Already occupied...enter  new index again"<<'\n';
                    i=i-1;
                }


            }
            else
            {
                cout<<"Computer turns"<<'\n'; //computer chance to play game
                cin>>n>>m;
                if(arr[n][m]=='Q')
                {
                    arr[n][m]=computer;

                }
                else
                {
                    cout<<"already occupied...enter again new index"<<'\n'; // for checking of overlapping
                    i=i-1;
                }
            }

            if(i>=5)
            {
                if(flag==1) // checking condition for tic tac toe win
                {
                     if((arr[0][0]=='X'and arr[0][1]=='X' and arr[0][2]=='X') or (arr[1][0]=='X'and arr[1][1]=='X' and arr[1][2]=='X') or(arr[2][0]=='X'and arr[2][1]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][0]=='X' and arr[2][0]=='X') or (arr[0][1]=='X'and arr[1][1]=='X' and arr[2][1]=='X') or (arr[0][2]=='X'and arr[1][2]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][1]=='X' and arr[2][2]=='X') or (arr[0][2]=='X'and arr[1][1]=='X' and arr[2][0]=='X') )
                    {
                        cout<<"Player wins"<<'\n';
                        k++;
                        break;
                    }
                     else if ((arr[0][0]=='O'and arr[0][1]=='O' and arr[0][2]=='O') or (arr[1][0]=='O'and arr[1][1]=='O' and arr[1][2]=='O') or(arr[2][0]=='O'and arr[2][1]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][0]=='O' and arr[2][0]=='O') or (arr[0][1]=='O'and arr[1][1]=='O' and arr[2][1]=='O') or (arr[0][2]=='O'and arr[1][2]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][1]=='O' and arr[2][2]=='O') or (arr[0][2]=='O'and arr[1][1]=='O' and arr[2][0]=='O') )
                    {
                     cout<<"computer wins"<<'\n';
                     k++;
                     break;
                    }

                }
                else
                {
                    if((arr[0][0]=='X'and arr[0][1]=='X' and arr[0][2]=='X') or (arr[1][0]=='X'and arr[1][1]=='X' and arr[1][2]=='X') or(arr[2][0]=='X'and arr[2][1]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][0]=='X' and arr[2][0]=='X') or (arr[0][1]=='X'and arr[1][1]=='X' and arr[2][1]=='X') or (arr[0][2]=='X'and arr[1][2]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][1]=='X' and arr[2][2]=='X') or (arr[0][2]=='X'and arr[1][1]=='X' and arr[2][0]=='X') )
                    {
                            cout<<"computer wins"<<'\n';
                            k++;
                            break;
                    }
                    else if ((arr[0][0]=='O'and arr[0][1]=='O' and arr[0][2]=='O') or (arr[1][0]=='O'and arr[1][1]=='O' and arr[1][2]=='O') or(arr[2][0]=='O'and arr[2][1]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][0]=='O' and arr[2][0]=='O') or (arr[0][1]=='O'and arr[1][1]=='O' and arr[2][1]=='O') or (arr[0][2]=='O'and arr[1][2]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][1]=='O' and arr[2][2]=='O') or (arr[0][2]=='O'and arr[1][1]=='O' and arr[2][0]=='O') )
                    {
                         cout<<"player wins"<<'\n';
                         k++;
                         break;
                    }

                }

            }
        }

    }
    else
    {
        cout<<"comuter will begin the game"<<'\n'; //computer will begin he game

        int n,m;
        for(int i=1;i<=9;i++)
        {
            if(i%2!=0)
            {
                cout<<"computer turns...Plz enter index"<<'\n';
                cin>>n>>m;
                if(arr[n][m]=='Q')
                {
                    arr[n][m]=computer;

                }
                else
                {
                    cout<<"already occupied...enter again new index"<<'\n';
                    i=i-1;
                }


            }
            else
            {
                cout<<"player turns..plz enter index"<<'\n';
                cin>>n>>m;
                if(arr[n][m]=='Q')
                {
                    arr[n][m]=player;

                }
                else
                {
                    cout<<"already occupied...enter again new index"<<'\n';
                    i=i-1;
                }
            }

            if(i>=5)
            {
                if(flag==1)
                {
                     if((arr[0][0]=='X'and arr[0][1]=='X' and arr[0][2]=='X') or (arr[1][0]=='X'and arr[1][1]=='X' and arr[1][2]=='X') or(arr[2][0]=='X'and arr[2][1]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][0]=='X' and arr[2][0]=='X') or (arr[0][1]=='X'and arr[1][1]=='X' and arr[2][1]=='X') or (arr[0][2]=='X'and arr[1][2]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][1]=='X' and arr[2][2]=='X') or (arr[0][2]=='X'and arr[1][1]=='X' and arr[2][0]=='X') )
                    {
                        cout<<"Player wins"<<'\n';
                        k++;
                        break;
                    }
                     else if ((arr[0][0]=='O'and arr[0][1]=='O' and arr[0][2]=='O') or (arr[1][0]=='O'and arr[1][1]=='O' and arr[1][2]=='O') or(arr[2][0]=='O'and arr[2][1]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][0]=='O' and arr[2][0]=='O') or (arr[0][1]=='O'and arr[1][1]=='O' and arr[2][1]=='O') or (arr[0][2]=='O'and arr[1][2]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][1]=='O' and arr[2][2]=='O') or (arr[0][2]=='O'and arr[1][1]=='O' and arr[2][0]=='O') )
                    {
                     cout<<"computer wins"<<'\n';
                     k++;
                     break;
                    }

                }
                else
                {
                    if((arr[0][0]=='X'and arr[0][1]=='X' and arr[0][2]=='X') or (arr[1][0]=='X'and arr[1][1]=='X' and arr[1][2]=='X') or(arr[2][0]=='X'and arr[2][1]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][0]=='X' and arr[2][0]=='X') or (arr[0][1]=='X'and arr[1][1]=='X' and arr[2][1]=='X') or (arr[0][2]=='X'and arr[1][2]=='X' and arr[2][2]=='X') or (arr[0][0]=='X'and arr[1][1]=='X' and arr[2][2]=='X') or (arr[0][2]=='X'and arr[1][1]=='X' and arr[2][0]=='X') )
                    {
                            cout<<"computer wins"<<'\n';
                            k++;
                            break;
                    }
                    else if ((arr[0][0]=='O'and arr[0][1]=='O' and arr[0][2]=='O') or (arr[1][0]=='O'and arr[1][1]=='O' and arr[1][2]=='O') or(arr[2][0]=='O'and arr[2][1]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][0]=='O' and arr[2][0]=='O') or (arr[0][1]=='O'and arr[1][1]=='O' and arr[2][1]=='O') or (arr[0][2]=='O'and arr[1][2]=='O' and arr[2][2]=='O') or (arr[0][0]=='O'and arr[1][1]=='O' and arr[2][2]=='O') or (arr[0][2]=='O'and arr[1][1]=='O' and arr[2][0]=='O') )
                    {
                         cout<<"player wins"<<'\n';
                         k++;
                         break;
                    }

                }

            }


        }
    }

    if(k==0) //condtion for draw
    {
        cout<<"Draw"<<'\n';
    }
cout<<'\n';
 for(int i=0;i<3;i++)  // printing the tic tac toe board
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!='Q')
            {
                cout<<arr[i][j]<<" | ";
            }
            else
            {
                cout<<" "<<" | ";
            }
        }
        cout<<'\n';
        cout<<"------------"<<'\n';
    }

}
 output:: 
 example 1:
 
 
 Player please choose X or O
O
comuter will begin the game
computer turns...Plz enter index
1 1
player turns..plz enter index
1 2
computer turns...Plz enter index
0 0
player turns..plz enter index
0 2
computer turns...Plz enter index
2 2
computer wins

X |   | O |
------------
  | X | O |
------------
  |   | X |
------------

Process returned 0 (0x0)   execution time : 54.393 s
Press any key to continue.


example 2:


Player please choose X or O
X
comuter will begin the game
computer turns...Plz enter index
1 1
player turns..plz enter index
0 2
computer turns...Plz enter index
0 2
already occupied...enter again new index
computer turns...Plz enter index
2 2
player turns..plz enter index
0 0
computer turns...Plz enter index
0 1
player turns..plz enter index
2 1
computer turns...Plz enter index
1 2
player turns..plz enter index
1 0
computer turns...Plz enter index
2 0
Draw

X | O | X |
------------
X | O | O |
------------
O | X | O |
------------

Process returned 0 (0x0)   execution time : 37.747 s
Press any key to continue.




