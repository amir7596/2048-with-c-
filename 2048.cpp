#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int map[4][4]={0};
#define m1 map[0][0]
#define m2 map[0][1]
#define m3 map[0][2]
#define m4 map[0][3]
#define m5 map[1][0]
#define m6 map[1][1]
#define m7 map[1][2]
#define m8 map[1][3]
#define m9 map[2][0]
#define m10 map[2][1]
#define m11 map[2][2]
#define m12 map[2][3]
#define m13 map[3][0]
#define m14 map[3][1]
#define m15 map[3][2]
#define m16 map[3][3]
void print();
void play();
void add();
int random(int min,int max)
{
  return   rand()%(max-min + 1) + min; 
}
void setTextColor(int textColor, int backColor = 0)           
{
  HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);  int colorAttribute = backColor << 4 | textColor;  SetConsoleTextAttribute(consoleHandle, colorAttribute); 
}
int tf()
{
	 int tt=random(2,4);
	 while(tt==3)
	 {
	 	tt=random(2,4);
	 }
	return tt;
}
void  add()
{
	bool flag =1;
	int k=0;
	while(flag && k<20)
	{
		int ra=random(1,16);
		switch(ra)
		{
			case 1:
				if (m1==0)
				{
					m1=tf();
					flag=~flag;
					return;
				}
			break;
			case 2:
				if (m2==0)
				{
					m2=tf();
					flag=~flag;
					return;
				}
			break;
			case 3:
				if (m3==0)
				{
					m3=tf();
					flag=~flag;
					return;
				}
			break;	
			case 4:
				if (m4==0)
				{
					m4=tf();
					flag=~flag;
					return;
				}
			break;
			case 5:
				if (m5==0)
				{
					m5=tf();
					flag=~flag;
					return;
				}
			break;
			case 6:
				if (m6==0)
				{
					m6=tf();
					flag=~flag;
					return;
				}
			break;
			case 7:
				if (m7==0)
				{
					m7=tf();
					flag=~flag;
					return;
				}
			break;
			case 8:
				if (m8==0)
				{
					m8=tf();
					flag=~flag;
					return;
				}
			break;
			case 9:
				if (m9==0)
				{
					m9=tf();
					flag=~flag;
					return;
				}
			break;
			case 10:
				if (m10==0)
				{
					m10=tf();
					flag=~flag;
					return;
				}
			break;
			case 11:
				if (m11==0)
				{
					m11=tf();
					flag=~flag;
					return;
				}
			break;
			case 12:
				if (m12==0)
				{
					m12=tf();
					flag=~flag;
					return;
				}
			break;
			case 13:
				if (m13==0)
				{
					m13=tf();
					flag=~flag;
					return;
				}
			break;
			case 14:
				if (m14==0)
				{
					m14=tf();
					flag=~flag;
					return;
				}
			break;
			case 15:
				if (m15==0)
				{
					m15=tf();
					flag=~flag;
					return;
				}
			break;
			case 16:
				if (m16==0)
				{
					m16=tf();
					flag=~flag;
					return;
				}
			break;		
		}
		k++;
	}
}
void up()
{
		for(int i=1;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(map[i][j]==map[i-1][j])
				{
					map[i-1][j]+=map[i][j];
					map[i][j]=0;
					continue;
				}
				if((map[i][j]==map[i-2][j])&&(map[i-1][j]==0))
				{
					map[i-2][j]+=map[i][j];
					map[i][j]=0;
					continue;
				}
				if((map[i][j]==map[i-3][j])&&(map[i-2][j]==0)&&(map[i-1][j]==0))
				{
					map[i-3][j]+=map[i][j];
					map[i][j]=0;
					continue;
				}
			}
		}
		for(int i=1;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(map[i-1][j]==0)
				{
					map[i-1][j]+=map[i][j];
					map[i][j]=0;
				}
			}
		}
		for(int i=1;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(map[i-1][j]==0)
				{
					map[i-1][j]+=map[i][j];
					map[i][j]=0;
				}
			}
		}
		for(int i=1;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(map[i-1][j]==0)
				{
					map[i-1][j]+=map[i][j];
					map[i][j]=0;
				}
			}
		}
}
void down()
{
	for(int i=2;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(map[i][j]==map[i+1][j])
			{
				map[i+1][j]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i+2][j])&&(map[i+1][j]==0))
			{
				map[i+2][j]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i+3][j])&&(map[i+1][j]==0)&&(map[i+2][j]==0))
			{
				map[i+3][j]+=map[i][j];
				map[i][j]=0;
				continue;
			}
		}
	}
	for(int i=2;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(map[i+1][j]==0)
			{
				map[i+1][j]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=2;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(map[i+1][j]==0)
			{
				map[i+1][j]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=2;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			if(map[i+1][j]==0)
			{
				map[i+1][j]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
}
void left()
{
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(map[i][j]==map[i][j-1])
			{
				map[i][j-1]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i][j-2])&&(map[i][j-1]==0))
			{
				map[i][j-2]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i][j-3])&&(map[i][j-1]==0)&&(map[i][j-2]==0))
			{
				map[i][j-3]+=map[i][j];
				map[i][j]=0;
				continue;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(map[i][j-1]==0)
			{
				map[i][j-1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(map[i][j-1]==0)
			{
				map[i][j-1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(map[i][j-1]==0)
			{
				map[i][j-1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}	
}
void right()
{
	for(int i=0;i<4;i++)
	{
		for(int j=2;j>=0;j--)
		{
			if(map[i][j]==map[i][j+1])
			{
				map[i][j+1]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i][j+2])&&(map[i][j+1]==0))
			{
				map[i][j+2]+=map[i][j];
				map[i][j]=0;
				continue;
			}
			if((map[i][j]==map[i][j+3])&&(map[i][j+1]==0)&&(map[i][j+2]==0))
			{
				map[i][j+3]+=map[i][j];
				map[i][j]=0;
				continue;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=2;j>=0;j--)
		{
			if(map[i][j+1]==0)
			{
				map[i][j+1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=2;j>=0;j--)
		{
			if(map[i][j+1]==0)
			{
				map[i][j+1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=2;j>=0;j--)
		{
			if(map[i][j+1]==0)
			{
				map[i][j+1]+=map[i][j];
				map[i][j]=0;
			}
		}
	}
}
int how()
{
	bool f=true;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(map[i][j]==2048)
			 return 2048;
			if(map[i][j]==0)
			return 1; 
		}
	}
	return -1;
}
void play()
{
	int max=0;
	bool empty = 0;
		
	while((max<2048)&&!(empty))
	{
		int g=getch();
		if ( g == 224 )
		    g=getch();
		  switch (g)
		  {
		  case 72:
		  	up();
		  	print();
		    break;
		  case 80:
		    down();
		    print();
		    break;
		  case 75:
		     left();
		    print();
		    break;
		  case 77:
		    right();
		    print();
		    break;
		  }
		add();
		system("cls");
		print();
		if(how()==2048)
		{
			max=2048;
		}
		else if(how()==-1)
		{
			empty=~empty;
		}
	}
	if(max==2048)
	{
		system("cls");
		cout<<"YOU WON!!!";
		return;
	}
	if(empty)
	{
		system("cls");
		cout<<"YOU LOSE!!!";
		return;
	}
}
void print()
{
	system("cls");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{	
			if(map[i][j]==0)
			setTextColor(15,0);
			else if(map[i][j]==2)
			setTextColor(2,0);
			else if(map[i][j]==4)
			setTextColor(3,0);
			else if(map[i][j]==8)
			setTextColor(4,0);	
			else if(map[i][j]==16)
			setTextColor(5,0);	
			else if(map[i][j]==32)
			setTextColor(6,0);
			else if(map[i][j]==64)
			setTextColor(7,0);
			else if(map[i][j]==128)
			setTextColor(8,0);
			else if(map[i][j]==256)
			setTextColor(9,0);
			else if(map[i][j]==512)
			setTextColor(10,0);
			else if(map[i][j]==1024)
			setTextColor(11,0);
			else if(map[i][j]==2048)
			setTextColor(12,0);
			cout<<map[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
}
int main()
{
	m1=2;
	m5=2;
	print();
	play();
}
