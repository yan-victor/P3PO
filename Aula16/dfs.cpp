dfs(int x) :
	x foi visitado
	for vizinho y de x:
		se vizinho y não foi visitado:
			dfs(y)



vector<int> viz[i] // vector pra cada vertice i que vai representar os vizinhos de i

int mark[N] //vertice foi visistado

void dfs(int x) {
	mark[x] = 1;
	for(int y : viz[x]) {
		if(mark[y]==0) dfs(y);
	}
}