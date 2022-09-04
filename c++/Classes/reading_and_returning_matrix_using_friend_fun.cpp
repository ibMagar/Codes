#include<iostream>
using namespace std;

class matrixClass{
    int mat[3][3];
    int trans[3][3];
    
    public:
    matrixClass()
    {

    }

    friend matrixClass read(matrixClass&);
    friend void showTranspose(matrixClass&);
    friend void showVal(matrixClass& m);
    friend void transpose(matrixClass& m);

};

void showTranspose(matrixClass& m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m.trans[i][j]<<"  ";



        }
        cout<<endl;
    }
}

void showVal(matrixClass& m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m.mat[i][j]<<"  ";



        }
        cout<<endl;
    }
}


matrixClass read(matrixClass& m)
{
    // int row;
    // int col;
    // cout<<"enter row and col";
    // cin>>row;
    // cin>>col;

    int mat[3][3];
    cout<<"enter the matrix value: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m.mat[i][j];
            m.trans[j][i]=m.mat[i][j];
            
        }
    }


    return m;
    

}

int main()
{

     matrixClass m;
      m=  read(m);
      cout<<"Values: "<<endl;
      showVal(m);
      cout<<endl<<"Transpose: "<<endl;
      //transpose(m);
      showTranspose(m);
        //showTranspose(m);

    return 0;
}