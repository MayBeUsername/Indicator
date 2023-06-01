#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct Clothes{
    int num;
    string type, made;
};

void swap(float* &a, float* &b);
void feelp(Clothes* &p, int n);
void chtype(string &p);
void chmade(string &p);

int main(){

    /* 1 задание

    float num1, num2;
    float* pnum1=nullptr;
    float* pnum2=nullptr;

    cin>>num1>>num2;

    pnum1=&num1;
    pnum2=&num2;

    *pnum1+=*pnum2;
    *pnum2-=*pnum1;

    cout<<"adr of pnum1: "<<pnum1<<endl<<
          "adr of pnum2: "<<pnum2<<endl;*/



    /* 2 задание

    float num1, num2;
    float* pnum1=nullptr;
    float* pnum2=nullptr;

    cin>>num1>>num2;

    pnum1=&num1;
    pnum2=&num2;

    swap(pnum1, pnum2);

    cout<<pnum1<<" - "<<*pnum1<<endl<<
          pnum2<<" - "<<*pnum2<<endl;*/



    /* 3 задание

    float* p=nullptr;
    int n;
    srand(time(0));

    cout<<"size of massive? "<<endl;
    cin>>n;

    p=new float[n];

    for (int i=0; i<n; i++){
        p[i]=rand()%100;
        cout<<&p[i]<<" - "<<p[i]<<endl;
    }

    delete[] p;*/

    Clothes* p=nullptr;
    int n;
    srand(time(0));

    cout<<"size of massive? "<<endl;
    cin>>n;

    p=new Clothes[n];

    feelp(p, n);

    delete[] p;

}

void swap(float* &a, float* &b){
    float buf=0;
    buf=*a;
    *a=*b;
    *b=buf;
}

void feelp(Clothes* &p, int n){
    int count=1;

    for (int i=0; i<n; i++){
        p[i].num=count;
        chtype(p[i].type);
        chmade(p[i].made);

        cout<<"num "<<p[i].num<<"; "<<
              "type: "<<p[i].type<<"; "<<
              "made in: "<<p[i].made<<"; "<<endl;

        count++;

    }
}

void chtype(string &p){
    int r=rand()%4;
    switch(r) {
    case 0:{p="Shirt";break;}
    case 1:{p="Pants";break;}
    case 2:{p="Shoes";break;}
    case 3:{p="Cap";break;}
    default:{p="err rand";}
    }
}

void chmade(string &p){
    int r=rand()%4;
    switch(r) {
    case 0:{p="China";break;}
    case 1:{p="USA";break;}
    case 2:{p="Russia";break;}
    case 3:{p="India";break;}
    default:{p="err rand";}
    }
}
