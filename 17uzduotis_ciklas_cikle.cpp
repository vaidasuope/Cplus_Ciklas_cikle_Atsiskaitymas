#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("duom.txt");
    ofstream out("rez.txt");

int suma;
in>>suma;

for (int i=1;i<suma;i++){
    for (int j=1;j<suma;j++){
        for (int k=1;k<suma;k++){
                for (int l=1;l<suma;l++){
                        /*if(i!=j && j!=k && k!=l && i!=k && j!=l && i!=l)*/
                        if(i+j+k+l==15 && i!=j && j!=k && k!=l && i!=k && j!=l && i!=l && i<j && j<k && k<l){
                                out<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                        }
                }
        }
    }
}

    in.close();
    out.close();

return 0;
}
