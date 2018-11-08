#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
//ex1
int f(float n, bool isRoundedTo100=false)
{
    if(isRoundedTo100 == false)
        if( (int)(n+0.5) > int(n) )
            n = (int)n+1;
        else
            n = (int)n;
    else
    {
        if((int)n%100<50)
            n = (int)n-(int)n%100;
        else
            n = (int)n+(100-(int)n%100);
    }
    return n;
}
//ex2
struct student{
    string name;
    int degree;
}student1,student2;
template <typename student>
student Max(student a, student b) {
	return a < b ? b : a;
}
//ex3
int f1(int x){
    return sizeof(x);
}

int f1(double x){
    return sizeof(x);
}

int f1(char* x){

    return strlen(x);
}
//ex4
char f2(int a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(long a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(char *s){
    return s[0];
}
//ex5
struct nrComplex
{
    int a,b;
};
int modul(float x)
{
    return fabs(x);
}
int modul(nrComplex x)
{
    return sqrt((x.a*x.a)+(x.b*x.b));
}
//ex6
template<typename T>
T max(T a,T b ,T c){
    T aux ;
    if(a > b)
        aux = a;
    else
        aux = b ;
    if(aux < c)
        aux = c;
    return aux;
}
//ex7
template<typename A>
void interchange(A a , A b){
    A aux;
    aux = a ;
    a = b ;
    b = aux ;
}
//ex8
struct pisica{
    char nume[20],stapan[20];
    int age;

};

struct persoana{
    char nume[20],prenume[20];
    int age;
};

struct masina{
    char marca[20] , nrInmatrculare[20];
    int age;
};
int main()
{
    float n;
    cin >> n;
    cout<<f(n,1)<<endl;
    cin>>student1.degree;
    cin>>student2.degree;
    cout<<Max(student1.degree,student2.degree)<<endl;
}
