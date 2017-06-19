#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void crack1()
{ 
	std::string st;
	char c;
	long y=0;
	string pwd;
	cout<< "Enter the Password to test: \n";
	cin >> pwd;
	int match[]= {0,0,0,0,0,0,0,0};
	int m=8;
	for(int i=0;i<=9;i++)
	{
		match[m-1]= i;
		for(int j=0;j<=9;j++)
		{
			match[m-2]=j;
			for(int k=0;k<=9;k++)
			{
				match[m-3]=k;
				for(int l=0;l<=9;l++)
				{
					match[m-4]=l;
					for(int o=0;o<=9;o++)
					{
						match[m-5]=o;
						for(int p=0;p<=9;p++)
						{
							match[m-6]=p;
							for(int q=0;q<=9;q++)
							{
								match[m-7]=q;
								for(int r=0;r<=9;r++)
								{
									match[m-8]=r;
									for(int z=m-1;z>=0;z--)
									{
										c = match[z]+'0';
										std::string s(1,c);
										st.append(s);
										if(z==0)
										{
											if(st == pwd)
											{
												cout << "Password is: " << st << endl;
												cout << "It takes: " << y <<" trials to catch."<<endl;
											}
											st.clear();
										}
									}
									y++;
								}
							}
						}
					}
				}
			}
		}
	}
}
void crack2()
{
	int y=0;
	std::string tot;
	int m;
	std::string st;
	string pwd;
	char c;
	cout<< "Enter the Password to test: \n";
	cin >> pwd;
	//cout<< "Enter Number of digits: \n";
	m = 8;
	char comp[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','b','q','r','s','t','u','v','w',
		           'x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char match[]= {'0','0','0','0','0','0'};
	for(int i=0;i<=62;i++)
	{
		match[m-1]= comp[i];
		for(int j=0;j<=62;j++)
		{
			match[m-2]= comp[j];
			for(int k=0;k<=62;k++)
			{
				match[m-3]=comp[k];
				for(int l=0;l<=62;l++)
				{
					match[m-4]=comp[l];
					for(int o=0;o<=62;o++)
					{
						match[m-5]=comp[o];
						for(int p=0;p<=62;p++)
						{
							match[m-6]=comp[p];
							for(int q=0;q<=62;q++)
							{
								match[m-7]= comp[q];
								for(int r=0;r<=62;r++)
								{
									match[m-8]= comp[r];
									for(int z=m-1;z>=0;z--)
									{
										std::string s(1,match[z]);
										st.append(s);
										if(z==0)
										{   
											if(st == pwd)
											{
												cout << "Password is: " << st << endl;
												cout << "It takes: " << y <<" trials to catch."<<endl;
											}
											st.clear();
										}
									}
									st.clear();
								}
								y++;
							}
						}
					}
				}
			}
		}
	}
 }
void crack3()
{
	int y=0;
	std::string tot;
	int m;
	std::string st;
	string pwd;
	char c;
	cout<< "Enter the Password to test: \n";
	cin >> pwd;
	m = 8;
	char comp[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','b','q','r','s','t','u','v','w',
		'x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','!','@','#','$','%','^','&','*','(',')','_','?'};
	char match[]= {'0','0','0','0','0','0'};
	for(int i=0;i<=74;i++)
	{
		match[m-1]= comp[i];
		for(int j=0;j<=74;j++)
		{
			match[m-2]= comp[j];
			for(int k=0;k<=74;k++)
			{
				match[m-3]=comp[k];
				for(int l=0;l<=74;l++)
				{
					match[m-4]=comp[l];
					for(int o=0;o<=74;o++)
					{
						match[m-5]=comp[o];
						for(int p=0;p<=74;p++)
						{
							match[m-6]=comp[p];
							for(int q=0;q<=74;q++)
							{
								match[m-7]= comp[q];
								for(int r=0;r<=74;r++)
								{
									match[m-8]= comp[r];
									for(int z=m-1;z>=0;z--)
									{
										//c = match[z]+'0';
										std::string s(1,match[z]);
										st.append(s);
										if(z==0)
										{
											cout<< st <<endl;
											if(st == pwd)
											{
												cout << "Password is: " << st << endl;
												cout << "It takes: " << y <<" trials to catch."<<endl;
											}
											st.clear();	
										}
									}
									st.clear();
								}
								y++;
							}
						}
					}
				}
			}
		}
	}
}
void choose()
{
	int choice;
	cout<< endl;
	cout << "Password Contains Numbers only:press 1 \n";
    cout << "Password Contains characters & Numbers only:press 2 \n";
	cout << "Password Contains characters & Numbers & Symbols:press 3 \n";
	cin >> choice;
	if (choice == 1)
	{
		crack1();
	}
	else if (choice == 2)
	{
		crack2();
	}
	else
	{
		crack3();
	}
}
int main()
{
	char out[1];
	choose();
	cout << "Do you want to Exit Y or N.... \n";
	cin >> out[0];
	if(out[0]== 'N')
	{
		choose();
	}
    //system("pause>nul");
	return 0;
}