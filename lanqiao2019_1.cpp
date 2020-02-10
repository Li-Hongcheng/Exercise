#include<bits/stdc++.h>
using namespace std;
bool check(int num){
	while(num){
		if(num%10==2||num%10==0||num%10==1||num%10==9) return true;
		num/=10;
	}
	return false;
}
long long ans=0;
int main()
{
	for(int i=1;i<=2019;i++){
		if(check(i)) ans+=i*i;
	}
	cout<<ans<<endl;
	return 0;
 } 