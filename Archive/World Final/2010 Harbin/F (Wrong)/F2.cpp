#pragma comment(linker, "/STACK:36777216")
//#pragma GCC optimize ("O2")
#define LOCAL
//#include "testlib.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <climits>
#include <cassert>
#include <complex>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include <set>
#include <map>

//#include <tr1/unordered_set>
//#include <tr1/unordered_map>
//#include <array>

using namespace std;

#define REP(i, n) for (int i=0;i<n;++i)
#define FOR(i, a, b) for (int i=a;i<b;++i)
#define DWN(i, b, a) for (int i=b-1;i>=a;--i)
#define REP_1(i, n) for (int i=1;i<=n;++i)
#define FOR_1(i, a, b) for (int i=a;i<=b;++i)
#define DWN_1(i, b, a) for (int i=b;i>=a;--i)
#define REP_C(i, n) for (int n____=n,i=0;i<n____;++i)
#define FOR_C(i, a, b) for (int b____=b,i=a;i<b____;++i)
#define DWN_C(i, b, a) for (int a____=a,i=b-1;i>=a____;--i)
#define REP_N(i, n) for (i=0;i<n;++i)
#define FOR_N(i, a, b) for (i=a;i<b;++i)
#define DWN_N(i, b, a) for (i=b-1;i>=a;--i)
#define REP_1_C(i, n) for (int n____=n,i=1;i<=n____;++i)
#define FOR_1_C(i, a, b) for (int b____=b,i=a;i<=b____;++i)
#define DWN_1_C(i, b, a) for (int a____=a,i=b;i>=a____;--i)
#define REP_1_N(i, n) for (i=1;i<=n;++i)
#define FOR_1_N(i, a, b) for (i=a;i<=b;++i)
#define DWN_1_N(i, b, a) for (i=b;i>=a;--i)
#define REP_C_N(i, n) for (int n____=(i=0,n);i<n____;++i)
#define FOR_C_N(i, a, b) for (int b____=(i=0,b);i<b____;++i)
#define DWN_C_N(i, b, a) for (int a____=(i=b-1,a);i>=a____;--i)
#define REP_1_C_N(i, n) for (int n____=(i=1,n);i<=n____;++i)
#define FOR_1_C_N(i, a, b) for (int b____=(i=a,b);i<=b____;++i)
#define DWN_1_C_N(i, b, a) for (int a____=(i=b,a);i>=a____;--i)

#define ECH(it, A) for (__typeof((A).begin()) it=(A).begin(); it != (A).end(); ++it)
#define rECH(it, A) for (__typeof((A).rbegin()) it=(A).rbegin(); it != (A).rend(); ++it)
#define REP_S(i, str) for (char*i=str;*i;++i)
#define REP_L(i, hd, suc) for (int i=hd;i;i=suc[i])
#define REP_G(i, u) REP_L(i,hd[u],suc)
#define REP_SS(x, s) for (int x=s;x;x=(x-1)&s)
#define DO(n) for ( int ____n = n; ____n-->0; )
#define REP_2(i, j, n, m) REP(i, n) REP(j, m)
#define REP_2_1(i, j, n, m) REP_1(i, n) REP_1(j, m)
#define REP_3(i, j, k, n, m, l) REP(i, n) REP(j, m) REP(k, l)
#define REP_3_1(i, j, k, n, m, l) REP_1(i, n) REP_1(j, m) REP_1(k, l)
#define REP_4(i, j, k, ii, n, m, l, nn) REP(i, n) REP(j, m) REP(k, l) REP(ii, nn)
#define REP_4_1(i, j, k, ii, n, m, l, nn) REP_1(i, n) REP_1(j, m) REP_1(k, l) REP_1(ii, nn)

#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define LBD(A, x) (lower_bound(ALL(A), x) - A.begin())
#define UBD(A, x) (upper_bound(ALL(A), x) - A.begin())
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int((A).size())
#define PB push_back
#define MP(A, B) make_pair(A, B)
#define PTT pair<T, T>
#define Ts *this
#define rTs return Ts
#define fi first
#define se second
#define re real()
#define im imag()

#define Rush for(int ____T=int(RD()); ____T--;)
#define Display(A, n, m) {                      \
REP(i, n){                                    \
REP(j, m-1) cout << A[i][j] << " ";     \
cout << A[i][m-1] << endl;                \
}                                            \
}
#define Display_1(A, n, m) {                    \
REP_1(i, n){                                \
REP_1(j, m-1) cout << A[i][j] << " ";   \
cout << A[i][m] << endl;                \
}                                            \
}

typedef long long LL;
//typedef long double DB;
typedef double DB;
typedef unsigned uint;
typedef unsigned long long uLL;

typedef vector<int> VI;
typedef vector<char> VC;
typedef vector<string> VS;
typedef vector<LL> VL;
typedef vector<DB> VF;
typedef set<int> SI;
typedef set<string> SS;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;

template<class T> inline T& RD(T &);
template<class T> inline void OT(const T &);
//inline int RD(){int x; return RD(x);}
inline LL RD(){LL x; return RD(x);}
inline DB& RF(DB &);
inline DB RF(){DB x; return RF(x);}
inline char* RS(char *s);
inline char& RC(char &c);
inline char RC();
inline char& RC(char &c){scanf(" %c", &c); return c;}
inline char RC(){char c; return RC(c);}
//inline char& RC(char &c){c = getchar(); return c;}
//inline char RC(){return getchar();}

template<class T> inline T& RDD(T &);
inline LL RDD(){LL x; return RDD(x);}

template<class T0, class T1> inline T0& RD(T0 &x0, T1 &x1){RD(x0), RD(x1); return x0;}
template<class T0, class T1, class T2> inline T0& RD(T0 &x0, T1 &x1, T2 &x2){RD(x0), RD(x1), RD(x2); return x0;}
template<class T0, class T1, class T2, class T3> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3){RD(x0), RD(x1), RD(x2), RD(x3); return x0;}
template<class T0, class T1, class T2, class T3, class T4> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4); return x0;}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4), RD(x5); return x0;}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline T0& RD(T0 &x0, T1 &x1, T2 &x2, T3 &x3, T4 &x4, T5 &x5, T6 &x6){RD(x0), RD(x1), RD(x2), RD(x3), RD(x4), RD(x5), RD(x6); return x0;}
template<class T0, class T1> inline void OT(const T0 &x0, const T1 &x1){OT(x0), OT(x1);}
template<class T0, class T1, class T2> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2){OT(x0), OT(x1), OT(x2);}
template<class T0, class T1, class T2, class T3> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3){OT(x0), OT(x1), OT(x2), OT(x3);}
template<class T0, class T1, class T2, class T3, class T4> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4, const T5 &x5){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4), OT(x5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void OT(const T0 &x0, const T1 &x1, const T2 &x2, const T3 &x3, const T4 &x4, const T5 &x5, const T6 &x6){OT(x0), OT(x1), OT(x2), OT(x3), OT(x4), OT(x5), OT(x6);}
inline char& RC(char &a, char &b){RC(a), RC(b); return a;}
inline char& RC(char &a, char &b, char &c){RC(a), RC(b), RC(c); return a;}
inline char& RC(char &a, char &b, char &c, char &d){RC(a), RC(b), RC(c), RC(d); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e){RC(a), RC(b), RC(c), RC(d), RC(e); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e, char &f){RC(a), RC(b), RC(c), RC(d), RC(e), RC(f); return a;}
inline char& RC(char &a, char &b, char &c, char &d, char &e, char &f, char &g){RC(a), RC(b), RC(c), RC(d), RC(e), RC(f), RC(g); return a;}
inline DB& RF(DB &a, DB &b){RF(a), RF(b); return a;}
inline DB& RF(DB &a, DB &b, DB &c){RF(a), RF(b), RF(c); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d){RF(a), RF(b), RF(c), RF(d); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e){RF(a), RF(b), RF(c), RF(d), RF(e); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e, DB &f){RF(a), RF(b), RF(c), RF(d), RF(e), RF(f); return a;}
inline DB& RF(DB &a, DB &b, DB &c, DB &d, DB &e, DB &f, DB &g){RF(a), RF(b), RF(c), RF(d), RF(e), RF(f), RF(g); return a;}
inline void RS(char *s1, char *s2){RS(s1), RS(s2);}
inline void RS(char *s1, char *s2, char *s3){RS(s1), RS(s2), RS(s3);}
template<class T0,class T1>inline T0& RDD(T0&a, T1&b){RDD(a),RDD(b); return a;}
template<class T0,class T1,class T2>inline T1& RDD(T0&a, T1&b, T2&c){RDD(a),RDD(b),RDD(c); return a;}

template<class T> inline void RST(T &A){memset(A, 0, sizeof(A));}
template<class T> inline void FLC(T &A, int x){memset(A, x, sizeof(A));}
template<class T> inline void CLR(T &A){A.clear();}

template<class T0, class T1> inline void RST(T0 &A0, T1 &A1){RST(A0), RST(A1);}
template<class T0, class T1, class T2> inline void RST(T0 &A0, T1 &A1, T2 &A2){RST(A0), RST(A1), RST(A2);}
template<class T0, class T1, class T2, class T3> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3){RST(A0), RST(A1), RST(A2), RST(A3);}
template<class T0, class T1, class T2, class T3, class T4> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4), RST(A5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void RST(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6){RST(A0), RST(A1), RST(A2), RST(A3), RST(A4), RST(A5), RST(A6);}
template<class T0, class T1> inline void FLC(T0 &A0, T1 &A1, int x){FLC(A0, x), FLC(A1, x);}
template<class T0, class T1, class T2> inline void FLC(T0 &A0, T1 &A1, T2 &A2, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x);}
template<class T0, class T1, class T2, class T3> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x);}
template<class T0, class T1, class T2, class T3, class T4> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x), FLC(A5, x);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void FLC(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6, int x){FLC(A0, x), FLC(A1, x), FLC(A2, x), FLC(A3, x), FLC(A4, x), FLC(A5, x), FLC(A6, x);}
template<class T> inline void CLR(priority_queue<T, vector<T>, less<T> > &Q){while (!Q.empty()) Q.pop();}
template<class T> inline void CLR(priority_queue<T, vector<T>, greater<T> > &Q){while (!Q.empty()) Q.pop();}
template<class T> inline void CLR(stack<T> &S){while (!S.empty()) S.pop();}
template<class T> inline void CLR(queue<T> &Q){while (!Q.empty()) Q.pop();}

template<class T0, class T1> inline void CLR(T0 &A0, T1 &A1){CLR(A0), CLR(A1);}
template<class T0, class T1, class T2> inline void CLR(T0 &A0, T1 &A1, T2 &A2){CLR(A0), CLR(A1), CLR(A2);}
template<class T0, class T1, class T2, class T3> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3){CLR(A0), CLR(A1), CLR(A2), CLR(A3);}
template<class T0, class T1, class T2, class T3, class T4> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4);}
template<class T0, class T1, class T2, class T3, class T4, class T5> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4), CLR(A5);}
template<class T0, class T1, class T2, class T3, class T4, class T5, class T6> inline void CLR(T0 &A0, T1 &A1, T2 &A2, T3 &A3, T4 &A4, T5 &A5, T6 &A6){CLR(A0), CLR(A1), CLR(A2), CLR(A3), CLR(A4), CLR(A5), CLR(A6);}
template<class T> inline void CLR(T &A, int n){REP(i, n) CLR(A[i]);}

template<class T> inline bool EPT(T &a){return a.empty();}
template<class T> inline T& SRT(T &A){sort(ALL(A)); return A;}
template<class T, class C> inline T& SRT(T &A, C B){sort(ALL(A), B); return A;}
template<class T> inline T& RVS(T &A){reverse(ALL(A)); return A;}
template<class T> inline T& UNQQ(T &A){A.resize(unique(ALL(A))-A.begin());return A;}
template<class T> inline T& UNQ(T &A){SRT(A);return UNQQ(A);}


//}

/** Constant List .. **/ //{

const int MOD = int(1e9) + 7;
const int INF = 0x3f3f3f3f;
const LL INFF = 0x3f3f3f3f3f3f3f3fLL;
const DB EPS = 1e-9;
const DB OO = 1e20;
const DB PI = acos(-1.0); //M_PI;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

//}

/** Add On .. **/ //{
// <<= '0. Nichi Joo ., //{

template<class T> inline bool checkMin(T &a,const T b){return b < a ? a = b, 1 : 0;}
template<class T> inline bool checkMax(T &a,const T b){return a < b ? a = b, 1 : 0;}
template <class T, class C> inline bool checkUpd(T& a, const T b, C c){return c(b,a) ? a = b, 1 : 0;}
template<class T> inline T min(T a, T b, T c){return min(min(a, b), c);}
template<class T> inline T max(T a, T b, T c){return max(max(a, b), c);}
template<class T> inline T min(T a, T b, T c, T d){return min(min(a, b), min(c, d));}
template<class T> inline T max(T a, T b, T c, T d){return max(max(a, b), max(c, d));}
template<class T> inline T min(T a, T b, T c, T d, T e){return min(min(min(a,b),min(c,d)),e);}
template<class T> inline T max(T a, T b, T c, T d, T e){return max(max(max(a,b),max(c,d)),e);}
template<class T> inline T sqr(T a){return a*a;}
template<class T> inline T cub(T a){return a*a*a;}
template<class T> inline T ceil(T x, T y){return (x - 1) / y + 1;}
template<class T> T abs(T x){return x>0?x:-x;}
inline int sgn(DB x){return x < -EPS ? -1 : x > EPS;}
inline int sgn(DB x, DB y){return sgn(x - y);}

inline DB cos(DB a, DB b, DB c){return (sqr(a)+sqr(b)-sqr(c))/(2*a*b);}
inline DB cot(DB x){return 1./tan(x);};
inline DB sec(DB x){return 1./cos(x);};
inline DB csc(DB x){return 1./sin(x);};

//}
// <<= '1. Bitwise Operation ., //{
namespace BO{

    inline bool _1(int x, int i){return bool(x&1<<i);}
    inline bool _1(LL x, int i){return bool(x&1LL<<i);}
    inline LL _1(int i){return 1LL<<i;}
    inline LL _U(int i){return _1(i) - 1;};

    inline int reverse_bits(int x){
        x = ((x >> 1) & 0x55555555) | ((x << 1) & 0xaaaaaaaa);
        x = ((x >> 2) & 0x33333333) | ((x << 2) & 0xcccccccc);
        x = ((x >> 4) & 0x0f0f0f0f) | ((x << 4) & 0xf0f0f0f0);
        x = ((x >> 8) & 0x00ff00ff) | ((x << 8) & 0xff00ff00);
        x = ((x >>16) & 0x0000ffff) | ((x <<16) & 0xffff0000);
        return x;
    }

    inline LL reverse_bits(LL x){
        x = ((x >> 1) & 0x5555555555555555LL) | ((x << 1) & 0xaaaaaaaaaaaaaaaaLL);
        x = ((x >> 2) & 0x3333333333333333LL) | ((x << 2) & 0xccccccccccccccccLL);
        x = ((x >> 4) & 0x0f0f0f0f0f0f0f0fLL) | ((x << 4) & 0xf0f0f0f0f0f0f0f0LL);
        x = ((x >> 8) & 0x00ff00ff00ff00ffLL) | ((x << 8) & 0xff00ff00ff00ff00LL);
        x = ((x >>16) & 0x0000ffff0000ffffLL) | ((x <<16) & 0xffff0000ffff0000LL);
        x = ((x >>32) & 0x00000000ffffffffLL) | ((x <<32) & 0xffffffff00000000LL);
        return x;
    }

    template<class T> inline bool odd(T x){return x&1;}
    template<class T> inline bool even(T x){return !odd(x);}
    template<class T> inline T low_bit(T x) {return x & -x;}
    template<class T> inline T high_bit(T x) {T p = low_bit(x);while (p != x) x -= p, p = low_bit(x);return p;}
    template<class T> inline T cover_bit(T x){T p = 1; while (p < x) p <<= 1;return p;}
    template<class T> inline int cover_idx(T x){int p = 0; while (_1(p) < x ) ++p; return p;}

    inline int clz(int x){return __builtin_clz(x);}
    inline int clz(LL x){return __builtin_clzll(x);}
    inline int ctz(int x){return __builtin_ctz(x);}
    inline int ctz(LL x){return __builtin_ctzll(x);}
    inline int lg2(int x){return !x ? -1 : 31 - clz(x);}
    inline int lg2(LL x){return !x ? -1 : 63 - clz(x);}
    inline int low_idx(int x){return !x ? -1 : ctz(x);}
    inline int low_idx(LL x){return !x ? -1 : ctz(x);}
    inline int high_idx(int x){return lg2(x);}
    inline int high_idx(LL x){return lg2(x);}
    inline int parity(int x){return __builtin_parity(x);}
    inline int parity(LL x){return __builtin_parityll(x);}
    inline int count_bits(int x){return __builtin_popcount(x);}
    inline int count_bits(LL x){return __builtin_popcountll(x);}

} using namespace BO;//}


// <<= '2. Number Theory .,//{
namespace NT{
#define gcd __gcd
    inline LL lcm(LL a, LL b){return a*b/gcd(a,b);}

    inline void INC(int &a, int b){a += b; if (a >= MOD) a -= MOD;}
    inline int sum(int a, int b){a += b; if (a >= MOD) a -= MOD; return a;}

    /* ģ�������պó� int ʱ��
     inline int sum(uint a, int b){a += b; a %= MOD;if (a < 0) a += MOD; return a;}
     inline void INC(int &a, int b){a = sum(a, b);}
     */

    inline void DEC(int &a, int b){a -= b; if (a < 0) a += MOD;}
    inline int dff(int a, int b){a -= b; if (a < 0) a  += MOD; return a;}
    inline void MUL(int &a, int b){a = (LL)a * b % MOD;}
    //inline int pdt(int a, int b){return (LL)a * b % MOD;}
    inline int pdt(int x,int y) {
        int ret; __asm__ __volatile__ ("\tmull %%ebx\n\tdivl %%ecx\n":"=d"(ret):"a"(x),"b"(y),"c"(MOD));
        return ret;
    }


    inline int gcd(int m, int n, int &x, int &y){

        x = 1, y = 0; int xx = 0, yy = 1, q;

        while (1){
            q = m / n, m %= n;
            if (!m){x = xx, y = yy; return n;}
            DEC(x, pdt(q, xx)), DEC(y, pdt(q, yy));
            q = n / m, n %= m;
            if (!n) return m;
            DEC(xx, pdt(q, x)), DEC(yy, pdt(q, y));
        }
    }

    inline int sum(int a, int b, int c){return sum(a, sum(b, c));}
    inline int sum(int a, int b, int c, int d){return sum(sum(a, b), sum(c, d));}
    inline int pdt(int a, int b, int c){return pdt(a, pdt(b, c));}
    inline int pdt(int a, int b, int c, int d){return pdt(pdt(a, b), pdt(c, d));}

    inline int pow(int a, LL b){
        int c(1); while (b){
            if (b&1) MUL(c, a);
            MUL(a, a), b >>= 1;
        }
        return c;
    }

    template<class T> inline T pow(T a, LL b){
        T c(1); while (b){
            if (b&1) c *= a;
            a *= a, b >>= 1;
        }
        return c;
    }

    template<class T> inline T pow(T a, int b){
        return pow(a, (LL)b);
    }

    inline int _I(int b){
        int a = MOD, x1 = 0, x2 = 1, q; while (1){
            q = a / b, a %= b;
            if (!a) return x2;
            DEC(x1, pdt(q, x2));

            q = b / a, b %= a;
            if (!b) return x1;
            DEC(x2, pdt(q, x1));
        }
    }

    inline void DIV(int &a, int b){MUL(a, _I(b));}
    inline int qtt(int a, int b){return pdt(a, _I(b));}

    struct Int{
        int val;

        operator int() const{return val;}

        Int(int _val = 0):val(_val){
            val %= MOD; if (val < 0) val += MOD;
        }
        Int(LL _val):val(_val){
            _val %= MOD; if (_val < 0) _val += MOD;
            val = _val;
        }

        Int& operator +=(const int& rhs){INC(val, rhs);rTs;}
        Int operator +(const int& rhs) const{return sum(val, rhs);}
        Int& operator -=(const int& rhs){DEC(val, rhs);rTs;}
        Int operator -(const int& rhs) const{return dff(val, rhs);}
        Int& operator *=(const int& rhs){MUL(val, rhs);rTs;}
        Int operator *(const int& rhs) const{return pdt(val, rhs);}
        Int& operator /=(const int& rhs){DIV(val, rhs);rTs;}
        Int operator /(const int& rhs) const{return qtt(val, rhs);}
        Int operator-()const{return MOD-*this;}
    };

} using namespace NT;//}


//}



/** I/O Accelerator Interface .. **/ //{
#define g (c=getchar())
#define d isdigit(g)
#define p x=x*10+c-'0'
#define n x=x*10+'0'-c
#define pp l/=10,p
#define nn l/=10,n
template<class T> inline T& RD(T &x){
    scanf("%d", &x);
    //char c;while(!d);x=c-'0';while(d)p;
    return x;
}
template<class T> inline T& RDD(T &x){
    char c;while(g,c!='-'&&!isdigit(c));
    if (c=='-'){x='0'-g;while(d)n;}
    else{x=c-'0';while(d)p;}
    return x;
}
inline DB& RF(DB &x){
    //scanf("%lf", &x);
    char c;while(g,c!='-'&&c!='.'&&!isdigit(c));
    if(c=='-')if(g=='.'){x=0;DB l=1;while(d)nn;x*=l;}
    else{x='0'-c;while(d)n;if(c=='.'){DB l=1;while(d)nn;x*=l;}}
    else if(c=='.'){x=0;DB l=1;while(d)pp;x*=l;}
    else{x=c-'0';while(d)p;if(c=='.'){DB l=1;while(d)pp;x*=l;}}
    return x;
}
#undef nn
#undef pp
#undef n
#undef p
#undef d
#undef g
inline char* RS(char *s){
    gets(s);
    //scanf("%s", s);
    return s;
}

LL last_ans; int Case; template<class T> inline void OT(const T &x){
    printf("Case %d: ", ++Case);
    //printf("%lld\n", x);
    //printf("%.9f\n", x);
    //printf("%d\n", x);
    cout << x << endl;
    //last_ans = x;
}


//}/* .................................................................................................................................. */

const int N2 = 20+4, N = 9+2, M = 1 << 18, _M = 3, _M2 = 1;

int n, m;
int b[N+1], bb[N+1];
int c[N+1];


LL encode(){
    FLC(bb, -1); int n = 1; bb[0] = 0; LL s = 0;

    DWN(i, m+1, 0){
        s <<= _M2; s |= c[i];
    }
    DWN(i, m+1, 0){
        if (!~bb[b[i]]) bb[b[i]] = n++;
        b[i] = bb[b[i]];
        s <<= _M; s |= b[i];
    }
    return s;
}

void decode(LL s){
    REP(i, m+1){
        b[i] = s & _U(_M);
        s >>= _M;
    }
    REP(i, m+1){
        c[i] = s & _U(_M2);
        s >>= _M2;
    }
}

const int Prime = 9979;

//LL sta[N*N+9][M];
int opt[N2*N+9][M];
int pre[N2*N+9][M];

bool c0, c1, c2;
int i, j; LL u; int d; int op; struct hashTable{
    LL state[M]; int key[M]; int sz;
    int hd[Prime], nxt[M];

    void clear(){
        sz = 0;
        FLC(hd, -1);
    }

    void push(){

        if (n == 4){
            //cout << m << endl;
        }

        c[j] = op; LL s = encode();
        int x = s % Prime;

        //if (n == 4) cout << s << " " << x << endl;

        for (int i=hd[x];~i;i=nxt[i]){
            if (state[i] == s){
                if (d > key[i]){
                    key[i] = d;
                    opt[::i*m+j][i] = op;
                    pre[::i*m+j][i] = u;
                }
                return;
            }
        }
        state[sz] = s; key[sz] = d + op;
        nxt[sz] = hd[x]; hd[x] = sz;
        //sta[i*m+j][sz] = s;
        opt[i*m+j][sz] = op;
        pre[i*m+j][sz] = u;
        ++sz;
        assert(sz < M);
    }

    void roll(){

        LL U = _U(_M*(m+1));
        LL U2 = _U(_M2*(m+1)) << (_M*(m+1));

        REP(ii, sz){
            LL s = state[ii], s1 = s & U, s2 = s & U2;
            s1 <<= _M; s1 &= U;
            s2 <<= _M2; s2 &= U2;
            state[ii] = s1 | s2;
        }
    }
} H[2]; int src, des;

int A[N2+1][N+1];

bool isMust(int i, int j){
    return j < 2 || i >= n-2;
}

void print(){

    assert(H[des].sz == 1);
    printf("Case %d:\n", ++Case);
    //OT(H[des].key[0]-(n+m)-1);

    int u = 0; DWN(i, n*m, 0){

        int ii = i / m, jj = i % m;

        //bool t = 0; decode(sta[i][u]); if (b[jj] || b[jj+1]) t = 1;  //?
        //u = pre[i][u]; decode(sta[i][u]); //if (b[jj] && b[jj+1]) t = 1;


        if (opt[i][u]){
            assert(A[ii][jj] == 1);
            A[ii][jj] = 2;
        }

        u = pre[i][u];
    }

    //cout << n << endl;

    REP(i, n-2){
        FOR(j, 2, m) if (A[i][j] == 1){
            putchar('.');
        }
        else if (A[i][j] == 2){
            putchar('C');
        }
        else{
            putchar('#');
        }
        puts("");
    }
    puts("");
}

void init(){
    RD(n, m);

    //cout << m << endl;

    RST(A); REP_2(i, j, n, m) A[i][j+2] = RC() == '.';
    n += 2; m += 2;
    A[0][1] = 1; REP(i, n-1) A[i][0] = 1;
    REP(i, m) A[n-1][i] = 1; A[n-2][m-1] = 1;

    //cout << "!!!" << endl
    //REP(i, m) A[n][i] = 1; REP(i, n) A[i][m] = 1;
}

void solve(){

    src = 0, des = 1; H[des].clear(); RST(c, b); d = 0; j = 0; op = 0;
    //cout << n << " " << m << endl;

    //cout << "ok?" << endl;
    H[des].push();
    //cout << "ok!" << endl;

    int z = 0; REP_N(i, n){
        REP_N(j, m){

            //if (!A[i][j]) continue;
            swap(src, des); H[des].clear();
            //cout << i << " " << j << " " << H[src].sz << endl;

            if (!A[i][j]){
                REP(ii, H[src].sz){
                    decode(H[src].state[ii]); d = H[src].key[ii]; u = ii; op = 0;
                    H[des].push();
                }
                continue;
            }

            REP(ii, H[src].sz){

                decode(H[src].state[ii]); d = H[src].key[ii]; u = ii; op = 1;



                int lt = b[j], up = b[j+1];
                bool dn = A[i+1][j], rt = A[i][j+1];
                c0 = j && c[j-1], c1 = c[j], c2 = c[j+1];

                /*cout << H[src].state[ii] << ": " << endl;
                REP(jj, m+1) cout << c[jj] << " "; cout << endl;
                REP(jj, m+1) cout << b[jj] << " "; cout << endl;
                puts("");*/

                if (lt && up){

                    if (c1) continue;

                    if (lt == up){
                        if (i == n-1 && j == m-1){
                            int cnt = 0; REP(jj, m+1) if (b[jj]) ++cnt;  // ?
                            if (cnt == 2) H[des].push();
                        }
                    }
                    else{
                        b[j] = b[j+1] = 0;
                        REP(jj, m+1) if (b[jj] == lt) b[jj] = up;
                        H[des].push();
                    }
                }
                else if (lt || up){

                    int t = lt | up;

                    if (c0 && c2) continue;

                    if (dn){



                        b[j] = t; b[j+1] = 0;
                        H[des].push();
                    }
                    if (rt){
                        b[j] = 0; b[j+1] = t;
                        H[des].push();
                    }
                }
                else{



                    if (!isMust(i, j)){
                        if (c0 && !c1 && c2) continue;
                        op = 0; H[des].push(); op = 1;
                    }

                    if (c0 || c1 || c2) continue;

                    if (dn && rt){
                        b[j] = b[j+1] = m;
                        H[des].push();
                    }
                }
            }
        }
        H[des].roll();
    }

    print();
}


int main(){

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif


    while (~scanf("%d%d", &n, &m) && n){
        init();
        solve();
        //break;
    }
}