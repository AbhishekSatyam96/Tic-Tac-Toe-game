#include<iostream>
using namespace std;

char square[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
	if(square[1]==square[2] && square[2]==square[3])	return 1;
	else if(square[4]==square[5] && square[5]==square[6])	return 1;
	else if(square[7]==square[8] && square[8]==square[9])	return 1;
	else if(square[1]==square[4] && square[4]==square[7])	return 1;
	else if(square[2]==square[5] && square[5]==square[8])	return 1;
	else if(square[3]==square[6] && square[6]==square[9])	return 1;
	else if(square[1]==square[5] && square[5]==square[9])	return 1;
	else if(square[3]==square[5] && square[5]==square[6])	return 1;
	
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' 
            && square[4] != '4' && square[5] != '5' && square[6] != '6' 
            && square[7] != '7' && square[8] != '8' && square[9] != '9')
            	return 0;
	
	else return -1;
}
int board(string first,string second)
{
	system("cls");
	system("color 5A");
	cout<<"\n\n\tA Game by Abhishek Satyam\tPlay and Enjoy it";
	cout<<"\n\n\tTic Tic Toe\n\n";
	cout<<first<<"===X and "<<second<<"===0\n\n\n";
	
	cout<<"	|		|	"<<endl;
	cout<<" "<<square[1]<<"	|	"<<square[2]<<" 	|	"<<square[3]<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"	|		|	"<<endl;
	cout<<" "<<square[4]<<"	|	"<<square[5]<<" 	|	"<<square[6]<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"	|		|	"<<endl;
	cout<<" "<<square[7]<<"	|	"<<square[8]<<" 	|	"<<square[9]<<endl;
}
int main()
{
	string first,second,player;
	int choice,i,turn=1;
	cout<<"Enter 1st player name==>>";	cin>>first;
	cout<<"Enter 2st player name==>>";	cin>>second;
	char mark;
	do
	{
		board(first,second);
		
		turn=(turn%2)?1:2;
		if(turn==1)	player=first;
		else	player=second;
		
		mark=(player==first)?'X':'0';
		
		cout<<player<<" enter a number===>>";
		cin>>choice;
	
		if(choice==1 && square[1]=='1')	square[1]=mark;
		else if(choice==2 && square[2]=='2')	square[2]=mark;
		else if(choice==3 && square[3]=='3')	square[3]=mark;
		else if(choice==4 && square[4]=='4')	square[4]=mark;
		else if(choice==5 && square[5]=='5')	square[5]=mark;
		else if(choice==6 && square[6]=='6')	square[6]=mark;
		else if(choice==7 && square[7]=='7')	square[7]=mark;
		else if(choice==8 && square[8]=='8')	square[8]=mark;
		else if(choice==9 && square[9]=='9')	square[9]=mark;
		else
		{
			cout<<"Invalid move\n";
			turn--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();
		turn++;
	}while(i==-1);
	
	board(first,second);
	
	if(i==1)
	{
		system("color 2B");
		cout<<"\n\n\t==>> "<<player<<" win\n";
	}
	else
	{
		system("color 4A");
		cout<<"\n\n\t==>>Game Draw\n";
	}
	cin.ignore();
	cin.get();
	
	return 0;	
}
