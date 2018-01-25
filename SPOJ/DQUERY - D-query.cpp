#include <bits/stdc++.h>
using namespace std;

/**
   MO's  off line Algorithm ( Query square root decomposition )
   Given N numbers there will be some queries.
   1. Given u and v, find number of distinct elements from u to v.
   Time Complexity O( N*sqrt( N ) )
**/
#define Size 30010
const int blockSize = 180;
int A[Size]; // as big as total number of elements.
int cnt[1000010]; /// As big as an array elements.
int res[200010]; // as big as total number of query.
int ans = 0;

/// If array elements are greater than 1e6, compress them.

struct qry {
	int l, r, id;
};
qry qList[200000+10];

bool cmp(qry A, qry B) {
	if (A.l / blockSize == B.l / blockSize) return A.r < B.r;
	return A.l / blockSize < B.l / blockSize;
}

void add(int position) {
	cnt[A[position]]++;
	if (cnt[A[position]] == 1){
		ans++;
	}
}
void remv(int position) {
	cnt[A[position]]--;
	if (cnt[A[position]] == 0){
		ans--;
	}
}


void MO(int Q)
{
	sort(qList+1, qList+Q+1, cmp); //One Based Index.
    memset(cnt, 0, sizeof cnt);
    ans = 0;
	int curL = 0, curR = 0;

	for (int i = 1; i <= Q; i++)
    {
		int L = qList[i].l, R = qList[i].r;
		while(curL < L){
			if (curL != 0) remv(curL);
			curL++;
		}
		while(curL > L){
			curL--;
			add(curL);
		}
		while(curR < R){
			curR++;
			add(curR);
		}
		while(curR > R){
			remv(curR);
			curR--;
		}
		res[qList[i].id] = ans;
	}
}


int main()
{
    //read("input.txt");
    //write("output.txt");

	int N, Q;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++){
		scanf("%d", &A[i]);
	}
	scanf("%d", &Q);
	for (int i = 1; i <= Q; i++){
		scanf("%d %d", &qList[i].l, &qList[i].r);
		qList[i].id = i;
	}

    MO(Q); //calculating result.

	for (int i = 1; i <= Q; i++) {
		printf("%d\n", res[i]);
	}
	return 0;
}
