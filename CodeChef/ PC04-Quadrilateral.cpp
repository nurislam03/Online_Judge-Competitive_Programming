/*
    Problem Name : Quadrilateral
    Online Judge : Code Chef
    Category : Geometry

    Problem : You are provided with coordinates of four points
    your task is to determine whether they form a
    Quadrilateral, Parallelogram, Square, Rhombus, Rectangle
    or None of These.
    NOTE: The four points entered are in the order of A, B, C, D and
    you have to determine which quadrilateral (or none) is formed by ABCD.


    Use : or Key Word.
    orientation,
    Intersection(doIntersect)
    onSegment
    dist
*/


#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
#define LL long long
#define SQ(x) ((x)*(x))
#define esp 1e-8
const int Size = 200005;


struct Point
{
    LL x; LL y;
    Point(){
    }
};
Point A,B,C,D;
Point AA[5];


LL dist(Point a, Point b){
    return SQ(a.x - b.x) + SQ(a.y - b.y);
}

int orientation(Point P, Point Q, Point R) {
    LL ret = (Q.y - P.y) * (R.x - Q.x) - (Q.x - P.x) * (R.y - Q.y);
    if (ret > 0) return 1; /// Polar angle of (P-R) is smaller than (P-Q) with respect to x axis.
    if (ret < 0) return 2; /// Polar angle of (P-R) is greater than (P-Q) with respect to x axis.
    return 0; /// Co linear
}

bool onSegment(Point P, Point Q, Point R){
    if(R.x >= min(P.x, Q.x) && R.x <= max(P.x, Q.x) &&
        R.y >= min(P.y, Q.y) && R.y <= max(P.y, Q.y)){
        return true;
    }else{
        return false;
    }
}

bool doIntersect(Point P1, Point P2, Point P3, Point P4){
    int o1 = orientation(P1,P2,P3);
    int o2 = orientation(P1,P2,P4);
    int o3 = orientation(P3,P4,P1);
    int o4 = orientation(P3,P4,P2);

    if(o1 != o2 && o3 != o4 && o1 != 0 && o2 != 0 && o3 != 0 && o4 != 0){
        return true;
    }
    if(o1 == 0 && onSegment(P1, P2, P3)) return true;
    if(o2 == 0 && onSegment(P1, P2, P4)) return true;
    if(o3 == 0 && onSegment(P3, P4, P1)) return true;
    if(o4 == 0 && onSegment(P3, P4, P2)) return true;
    return false;
}

void solve()
{
    LL AB = dist(A,B);
    LL BC = dist(B,C);
    LL CD = dist(C,D);
    LL AD = dist(A,D);

    LL AC = dist(A,C);
    LL BD = dist(B,D);

/*
    // checking co-linear or not.
    for(int i = 0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(AA[i].x == AA[j].x && AA[i].y == AA[j].y)
            {
                printf("NONE\n");
                return;
            }
        }
    }
*/


    // checking Co-linear or not.
    if(orientation(A,B,C) == 0){
        printf("NONE\n");
        return;
    }
    if(orientation(B,C,D) == 0){
        printf("NONE\n");
        return;
    }
    if(orientation(C,D,A) == 0){
        printf("NONE\n");
        return;
    }
    if(orientation(D,A,B) == 0){
        printf("NONE\n");
        return;
    }


    if(doIntersect(A,B,C,D) == true){
        printf("NONE\n");
        return;
    }

    if(doIntersect(A,D,B,C) == true){
        printf("NONE\n");
        return;
    }

    // Shape checking
    if(AB == BC && BC == CD && CD == AD)
    {
        if(AC == BD){
            printf("SQUARE\n");
            return;
        }
        else{
            printf("RHOMBUS\n");
            return;
        }
    }

    if(AB == CD && BC == AD){
        if(AC == BD){
            printf("RECTANGLE\n");
            return;
        }
        else{
            printf("PARALLELOGRAM\n");
            return;
        }
    }
    printf("QUADRILATERAL\n");
    return;
}


int main ()
{

    #ifdef forthright48
    //freopen ( "input.txt", "r", stdin );
    /// freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    /// ========= WARNING CHECK ========= ///
    ///   1. Check Sample Test,Read Notes ///
    ///   2. Check Corner Case When N<3   ///
    ///   3. Check Array Size, Mod, LL    ///
    ///   4. Check DP Memo Array Part     ///
    ///===================================///

    int nCase;
    scanf("%d",&nCase);

    for(int cs = 1; cs <= nCase; cs++)
    {
        scanf("%lld %lld",&A.x,&A.y);
        scanf("%lld %lld",&B.x,&B.y);
        scanf("%lld %lld",&C.x,&C.y);
        scanf("%lld %lld",&D.x,&D.y);

        AA[0] = A;
        AA[1] = B;
        AA[2] = C;
        AA[3] = D;

        solve();
    }
    return 0;
}
/*

3
1 1
7000 -100000
100000 1
7500 1000

*/
