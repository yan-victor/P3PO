

update()

query()

get_kth(int x,int l,int r,int k) {
	if(k>tree[x]) return -1;
	if(l==r) return l;
	if(tree[fe]>=k) return get_kth(fe,l,mid,k);
	return get_kth(fd,mid+1,r,k-tree[fe]);
} 