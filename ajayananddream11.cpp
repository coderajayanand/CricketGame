#include<iostream>
using namespace std;

void newgame()
{
	void initiate();
	string tostart;
	cout<<"------------------------------------------"<<endl;
	cout<<"                                          "<<endl;
	cout<<"------------WELCOME TO AJAY 11------------"<<endl;
	cout<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter Yes for new game"<<endl;
	cin>>tostart;
	if(tostart=="yes")
	{
		initiate();
	}
	else
	{
		newgame();
	}
}

void initiate()
{
	void playerinfo(string p1[3], string p2[3], int p1s[3], int p2s[3]);
	void player1(string p1[3], int p1s[3], int i1, int i2, int t, string p2[3], int p2s[3]);
	void player3(string p2[3], int p2s[3], int i1, int i2, int t);
	system("cls");
	cout<<"INITIATE SUCCESS"<<endl;
	
	string p1[3],p2[3];
	int p1s[3],p2s[3];
	cout<<endl<<"ENTER PLAYER 1 TEAM-MATES : "<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>p1[i];
	}
	cout<<endl<<"ENTER PLAYER 2 TEAM-MATES : "<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>p2[i];
	}
	for(int i=0;i<3;i++)
	{
		p1s[i]=4;
		p2s[i]=4;
	}
	//playerinfo(p1, p2, p1s,p2s);
	int i1=0, i2=1, t=12;
	player1(p1,p1s,i1,i2,t,p2,p2s);
//	player3(p2,p2s,i,t);
	
}

void player1(string p1[], int p1s[], int i1, int i2, int t, string p2[], int p2s[])
{
	void data(string p1[3], int p1s[3]);
	void player3(string p2[3], int p2s[3], int i1, int i2, int t);
	void player2(string p1[3], int p1s[3], int i1, int i2, int t, string p2[3], int p2s[3]);
	while(t>0)
	{
		cout<<"balls left -> "<<t<<endl;
		t--;
		if(t==0)
		{
			data(p1, p1s);
			i1=0,i2=1,t=12;
			player3(p2,p2s,i1,i2,t);
		}
		cout<<"ENTER RUN SCORED BY "<<p1[i1]<<endl;
		int run;
		cin>>run;
		if(run==-1)
		{
			p1s[i1]+=run;
			if(i1<i2)
			{
				i1=i2+1;
			}
			else
			{
				i1=i1+1;
			}
		}
		else if(run%2==0)
		{
			p1s[i1]+=run;
		}
		else
		{
			p1s[i1]+=run;
			player2(p1, p1s, i1, i2, t, p2, p2s);	
		}	
	}
	
//	t=12;
//	i=0;
	
}

void player2(string p1[], int p1s[], int i1, int i2, int t, string p2[], int p2s[])
{
	void data(string p1[3], int p1s[3]);
	void player1(string p1[3], int p1s[3], int i1, int i2, int t, string p2[3], int p2s[3]);
	while(t>0)
	{
		cout<<"balls left -> "<<t<<endl;
		t--;
		if(t==0)
		{
			data(p1, p1s);
		}
		cout<<"ENTER RUN SCORED BY "<<p1[i2]<<endl;
		int run;
		cin>>run;
		if(run==-1)
		{
			p1s[i2]+=run;
			if(i1>i2)
			{
				i2=i1+1;
			}
			else
			{
				i2+=1;
			}
		}
		else if(run%2==0)
		{
			p1s[i2]+=run;
		}
		else
		{
			p1s[i2]+=run;
			player1(p1, p1s, i1, i2, t,p2,p2s);
		}
	}
	//data(p1, p1s);
}

void player3(string p2[], int p2s[], int i1, int i2, int t)
{
	void data(string p2[3], int p2s[3]);
	//void player4(string p2[3], int p2s[3], int i, int t);
	while(t>0)
	{
		cout<<"balls left -> "<<t<<endl;
		t--;
		cout<<"ENTER RUN SCORED BY "<<p2[i1]<<endl;
		int run;
		cin>>run;
		if(run==-1)
		{
			p2s[i1]+=i1;
			i1+=1;
		}
		else if(run%2==0)
		{
			p2s[i1]+=run;
		}
		else
		{
			p2s[i1]+=run;
			//player4(p2, p2s, i1, t);
		}	
	}
//	data(p2, p2s);
}
//
//void player4(string p2[], int p2s[], int i, int t)
//{
//	void data(string p2[3], int p2s[3]);
//	void player3(string p2[3], int p2s[3], int i, int t);
//	while(t--)
//	{
//		cout<<"balls left -> "<<t<<endl;
//		t--;
//		cout<<"ENTER RUN SCORED BY "<<p2[i+1]<<endl;
//		int run;
//		cin>>run;
//		if(run==-1)
//		{
//			p2s[i+1]+=i;
//			i+=1;
//		}
//		else if(run%2==0)
//		{
//			p2s[i+1]+=run;
//		}
//		else
//		{
//			p2s[i+1]+=run;
//			player3(p2, p2s, i, t);
//		}	
//	}
////	data(p2, p2s);
//}

void data(string p1[], int p1s[])
{
	system("cls");
	cout<<"SCORES BY TEAM1 PLAYERS :- "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<p1[i]<<" -> "<<p1s[i]<<endl;
	}
	
}

//void playerinfo(string p1[], string p2[], int p1s[], int p2s[])
//{
//	system("cls");
//	cout<<"PLAYER 1 CHOSE THESE PLAYERS"<<endl;
//	for(int i=0;i<3;i++)
//	{
//		cout<<p1[i]<<" -> "<<p1s[i]<<endl;
//	}
//	cout<<endl;
//	cout<<endl;cout<<endl;
//	cout<<"PLAYER 2 CHOSE THESE PLAYERS"<<endl;
//	for(int i=0;i<3;i++)
//	{
//		cout<<p2[i]<<" -> "<<p2s[i]<<endl;
//	}
//}

int main()
{
	newgame();
}
