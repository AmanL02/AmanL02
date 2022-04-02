#include <iostream>
using namespace std;
int main()
{
    double L=0,R=3,M,Epsilon = 0.00001;
    while (L-R >=Epsilon)
    {
        M=(L-R)/2;
        if ((L*L*L-3>=0 && M*M*M-3>=0) || (L*L*L-3<=0 && M*M*M-3<=0))
        {
            L=M;
        }
        else
        {
            R=M;
        }
        
    }
    cout << "Our Final Answer: " << L << endl;
}