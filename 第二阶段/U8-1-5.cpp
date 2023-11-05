/*
最基本的原理老师在上个视频已经详细说明了 无非就是把 “>=k” 换成了 “%k==0” 原理还是大致相同的
*/
#include <iostream>
using namespace std;
int a[1001], n, k, ans;
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	ans = 0;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((a[i]+a[j])%k==0)
            {
                ans++;
            }
        }
    }

	cout << ans;
	return 0;
}
