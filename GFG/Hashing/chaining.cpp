#include<iostream>
#include<list>

using namespace std;

struct MyHash
{
    int Bucket;
    list<int> *table;

    MyHash(int b){
        Bucket = b;
        table = new list<int> [b];
    }
};


int main(){
    
}