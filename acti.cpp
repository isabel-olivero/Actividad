#include <iostream>


using namespace std;


void modify(){

    int var = 4;

    cout<< "dir: "<< &var <<" val:"<< var << endl;

    int *neew = &var;

    *neew = *neew + 5;

    cout<<"val:"<< var<<" dir: "<< &var<< endl;


}

void referencias(){

    int var2;
    
    int *p = &var2;

    *p = 5;

    int &ref = var2;

    ref += 2;

    cout<< "puntero: "<< p <<" ref:"<< &ref << endl;

}

void arreglo(){
    int array[5]= {1,2,3,4,5};

    int *p = array;

    for(int i  = 0; i < 5; ++i){

        p += i;
        *p +=2;

        cout<< "puntero: "<< p << "arreglo:"<< &array<< endl;

    }


}



void dinamica(){

    int** matriz = new int*[5];

    for (int i = 0; i < 5; ++i) {
        matriz[i] = new int[5];
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = i + j;
        }
    }

    /*for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
           cout<< matriz[i][j]<< endl ;
        }
    }*/

    for (int i = 0; i < 5; ++i) {
        delete[] matriz[i];
    }

    delete[] matriz;
    

}