#include <bits/stdc++.h> 
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	priority_queue<int, vector<int>, greater<int>> minh;
	priority_queue<int> maxh;
	for(int index=0; index<k; index++){
		minh.push(arr[index]);
		maxh.push(arr[index]);
	}
	vector<int> result;
	for(int index=k; index<n; index++){
		if(minh.top() < arr[index]){
			minh.pop();
			minh.push(arr[index]);
		}
		if(maxh.top() > arr[index]){
			maxh.pop();
			maxh.push(arr[index]);
		}
	}
	result.push_back(maxh.top());
	result.push_back(minh.top());

	return result;
}

