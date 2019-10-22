#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int cnt[3]={0,0,0};
void count_file(char filename[],int *cnt)
{
	ifstream infile(filename);
	char ch;
	while(infile.get(ch))
	{
		cnt[0]++;
		if(ch==' '||ch=='.'||ch=='?'||ch=='!') cnt[1]++;
		else if(ch=='\n') cnt[2]++;
		
	}
	if(cnt[0]) cnt[2]++;
}
int main()
{
	char string[256];
	char filename[256];
	cout<<"please input the filename"<<endl;
	cin.getline(filename,256,'\n');
	count_file(filename,cnt);
	cout<<"characters="<<cnt[0]<<endl;
	cout<<"words="<<cnt[1]<<endl;
	cout<<"lines="<<cnt[2]<<endl;
	return 0;
}