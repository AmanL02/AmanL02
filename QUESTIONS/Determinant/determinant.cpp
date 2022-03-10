#include <iostream>

int det(int n, int m[5][5]){
    if (n==2){return (m[0][0]*m[1][1]-m[1][0]*m[0][1]);}
    int c=1,D=0;
    for (int j=0; j<n; j++){
        int cf[5][5]; int ci=0, cj=0;
        for (int x=0; x<n; x++){
            for (int y=0; y<n; y++){
                if (!(x==0 or y==j)){
                    cf[ci][cj]=m[x][y];
                    cj++;
                }
                if (cj==n-1){
                    cj=0;
                    ci++;
                }
            }
        }
        D+=c*m[0][j]*det(n-1,cf);
        c*=-1;
    }
    return D;
}

int main()
{
    int n;
    std::cin>>n;
    int matrix[5][5];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cin>>matrix[i][j];
        }
    }
    std::cout<<det(n,matrix);
}
