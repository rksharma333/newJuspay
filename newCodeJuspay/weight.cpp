// #include<bits/stdc++.h>
// using namespace std;


// int solution(vector<int>arr){
//     int ans = INT_MIN;
//     int result=-1;
//     vector<int>weight(arr.size(),0);
//     for(int i=0;i<arr.size();i++){
//         int source=i;
//         int dest=arr[i];
//         if(dest!=-1){
//             weight[dest]+=source;
//             if(ans<=weight[dest]){
//                 ans=max(ans,weight[dest]);
//                 result=dest;
//             }
            
//         }
//     }
//     if(ans!=INT_MIN)
//         return result;
//     return -1;
// }


// int main()
// {
//     int n; cin>>n;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++) cin>>arr[i];

//     cout<<solution(arr)<<endl;

//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;


int main()
{


    int n, maxWeight = INT_MIN, ans = -1;

    cin >> n;

    vector<int> nodeWeight(n);

    for(int i=0; i<n; i++) nodeWeight[i] = 0;

    for(int i=0; i<n; i++)
    {
        int node; cin>>node;

        if(node != -1)
        {
            nodeWeight[node] += i;

            if(maxWeight <= nodeWeight[node])
            {
                maxWeight = nodeWeight[node];
                ans = node;

            }
        }
    }

    cout<<ans<<endl;


    return 0;

}