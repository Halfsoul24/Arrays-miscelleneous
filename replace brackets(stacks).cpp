#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<int>temp;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='[' || s[i]=='{' || s[i]=='(' || s[i]=='<')
			temp.push(i);
			else
			{
				if(temp.empty())
				{
					flag=1;
					
					break;
				}
				else
				temp.pop();
			}
		}
		if(flag || !temp.empty()){
			cout<<"Impossible"<<endl;
			continue;
		}
		int ans=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='[' || s[i]=='{' || s[i]=='(' || s[i]=='<')
			temp.push(i);
			else
			{
				int pos=temp.top();
				int x=s[pos]=='(' && s[i]!=')';
				x=x||(s[pos]=='[' && s[i]!=']');
				x=x||(s[pos]=='{' && s[i]!='}');
				x=x||(s[pos]=='<' && s[i]!='>');
				if(x)ans++;
				temp.pop();
			}
		}
		cout<<ans<<endl;
	}
}
