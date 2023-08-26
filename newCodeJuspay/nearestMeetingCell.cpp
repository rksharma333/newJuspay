#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n; cin>>n;

	int arr[n];


	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int n1, n2;
	cin>>n1>>n2;


	unordered_map<int, int> mp1, mp2;

	int node = n1;
	mp1[node] = 1;
	while(node != -1)
	{
		int newNode = arr[node];

		if(mp1.find(newNode) != mp1.end()) break;

		mp1[newNode] = mp1[node] + 1;

		node = newNode;
	}

    node = n2;
	mp2[node] = 1;
	while(node != -1)
	{
		int newNode = arr[node];

		if(mp2.find(newNode) != mp2.end()) break;

		mp2[newNode] = mp2[node] + 1;
		node = newNode;
	}

	vector<pair<int,int>> ans;

	for(auto it : mp1)
	{
		// cout<<it.first<<" "<<it.second<<endl;
		if(mp2.find(it.first) != mp2.end())
		{
			ans.push_back({it.second + mp2[it.first], it.first});
		}
	}

	sort(ans.begin(), ans.end());

	if(ans.size() == 0) cout<<-1<<endl;
	else cout<<ans[0].second<<endl;



	return 0;
}