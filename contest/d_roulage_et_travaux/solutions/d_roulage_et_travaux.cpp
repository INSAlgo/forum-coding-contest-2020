#include <iostream>
#include <set>
#include <vector>
#include <deque>

using namespace std;


int BFS(int start, int end, vector<set<int>>graph, set<int>hangars, set<int>slopes){
	deque<int> d;
	vector<bool> seen(graph.size(), 0);

	d.push_back(start);
	seen[start] = 1;

	while(d.size() != 0){
		int current = d.front();
		d.pop_front();

		for(auto neigh = graph[current].begin(); neigh != graph[current].end(); ++neigh){
			if(*neigh == end){
				return 0;
			} else {
				if(!seen[*neigh] && (hangars.count(*neigh) == 0) && (slopes.count(*neigh) == 0)){
					d.push_front(*neigh);
					seen[*neigh] = true;
				}
			}
		}
	}


	return 1;
}

int main(){
	int n, h, p, a, b, number_missed;
	number_missed = 0;

	cin >> n;
	cin >> h;
	cin >> p;

	set<int> hangars;
	set<int> slopes;
	vector<set<int>> graph;

	int newV; 
	for(int i = 0; i < h; i ++){
		cin >> newV;
		hangars.insert(newV - 1);
	}

	for(int i = 0; i < p; i ++){
		cin >> newV;
		slopes.insert(newV - 1);
	}	

	for(int i = 0; i < n+1; i ++){
		set<int> newSet;
		graph.push_back(newSet);
	}

	cin >> newV;
	for(int i = 0; i < newV; ++i){
		cin >> a;
		cin >> b;

		graph[a - 1].insert(b-1);
		graph[b - 1].insert(a-1);
	}	

	cin >> newV;
	for(int i = 0; i < newV; ++i){
		cin >> a;
		cin >> b;		
		number_missed += BFS(a-1, b-1, graph, hangars, slopes);
	}	

	cout << number_missed;
}
