#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n, maxCycleLen = 0, maxCycleSum = INT_MIN; 
	cin>>n;

	int arr[n];
	vector<int> vis(n,0);




	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}



	for(int i=0; i<n; i++)
	{
		unordered_map<int, pair<int,int>> mp;

		int node = i;
		
		mp[i] = {0,i};


		while(!vis[node] && node != -1)
		{

			int newNode = arr[node];
			cout<<"its me "<<node<<" "<<newNode<<endl;

			if(mp.find(newNode) != mp.end())
			{
				int currSum = mp[node].second-mp[newNode].second+newNode;
				int len = mp[node].first-mp[newNode].first+1;

				if(maxCycleLen <= len)
				{
					maxCycleSum = currSum;
					maxCycleLen = len;
				}

				break;
			}



			mp[newNode].first = mp[node].first + 1;
			mp[newNode].second = mp[node].second + newNode;
			vis[node] = 1;
			cout<<node<<" "<<mp[node].first<<" "<<mp[node].second<<endl;

			node = newNode;

		}
	}

	cout<<maxCycleLen<<" "<<maxCycleSum<<endl;

	return 0;

}