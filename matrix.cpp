#include<iostream>
using namespace std;
class Matrix{
    int data[2][2];
    public:
    Matrix(int a=0,int b=0,int c=0,int d=0){
        data[0][0]=a;
        data[0][1]=b;
        data[1][0]=c;
        data[1][1]=d;
    }
    Matrix operator+(Matrix m){
        Matrix r;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                r.data[i][j]=data[i][j]+m.data[i][j];
    }
}
                return r;
}
    Matrix operator*(Matrix m){
        Matrix r;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                r.data[i][j]=0;
                for(int k=0;k<2;k++){
                    r.data[i][j]+=data[i][k]*m.data[k][j];
                }
            }
        }
        
    
    return r;
}
Matrix transpose(){
    Matrix r;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            r.data[i][j]=data[j][i];
        }
    }
        
     return r;
}
int* operator[](int i){
    return data[i];
}
friend ostream& operator<<(ostream& out,Matrix m){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            out<<m.data[i][j]<<" ";
        }
        out<<endl;
    }
        return out;
}
};
int main(){
    int a,b,c,d;
    cout<<"Enter elements of a Matrix A:";
    cin>>a>>b>>c>>d;
    Matrix A(a,b,c,d);
    cout<<"Enter 4elements of Matrix B:";
    cin>>a>>b>>c>>d;
    Matrix B(a,b,c,d);
    cout<<"\nMatrix A:\n"<<A;
    cout<<"Matrix B:\n"<<B;
    cout<<"Addition:\n"<<A+B;
    cout<<"Multiplication:\n"<<A*B;
    cout<<"Transpose of A:\n"<<A.transpose();
    return 0;
}