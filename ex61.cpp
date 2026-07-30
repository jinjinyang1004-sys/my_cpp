#include<bits/stdc++.h>
using namespace std;
struct complex1{
    int real ;
    int imag ; //虛數
};
void add_complex(complex1 *a,complex1 *b,complex1 *c){
    c->real = a->real + b->real ;
    c->imag = a->imag + b->imag ;
}
void mul_complex(complex1 *a,complex1 *b,complex1 *c){
    c->real = a->real * b->real - a->imag * b->imag ;
    c->imag = a->real * b->imag + a->imag * b->real ;
}
void print_complex(complex1 *a){
    cout<<a->real<<"+"<<a->imag<<"i"<<endl ;
}
int main(){
    complex1 a,b,c ;
    cin>>a.real>>a.imag>>b.real>>b.imag ;
    add_complex(&a,&b,&c) ;
    print_complex(&c) ;
    mul_complex(&a,&b,&c) ;
    print_complex(&c) ;
}
