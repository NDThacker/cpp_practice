#include <iostream>
#include <vector>
using namespace std;

void updateValues(vector<int> &nVec, int **edgeMat, vector<int> &res, int node, int start, int total)
{
	for (int ind = 0; ind < total; ind++)
	{
		cout << "In here";
		if (edgeMat[node-1][ind] != 1)
			continue;
		nVec.push_back(ind+1);
		if(res[ind] == 0)
		{
			res[ind] = edgeMat[node-1][ind] + res[node-1];
		}
		else if(edgeMat[node-1][ind] + res[node-1] < res[ind])
		{
			res[ind] = edgeMat[node-1][ind] + res[node-1];
		}
	}
}


int main()
{
	int nodes, edges, n1, n2;
	cin >> nodes >> edges;
	int edgeMat[nodes][nodes];
	vector<int> res;
	int start, end;
	vector<int> nVec;
	nVec.push_back(5);
	for (int ind = 0; ind < edges; ind++)
	{
		//cout << "scanning";
		cin >> n1 >> n2;
		edgeMat[n1-1][n2-1] = 1;
		edgeMat[n2-1][n1-1] = 1;
	}
	cout << "scanning complete";
	//cin.clear();
	cin >> start >> end;
	cout << start;
	//res.push_back(start);
	cout << "Queue init";
	int node;
	while (!nVec.empty())
	{
		cout << "in here";
		node = nVec[0];
		nVec.erase(nVec.begin());
		updateValues(nVec, (int **)edgeMat, res, node, start, nodes);
	}


}