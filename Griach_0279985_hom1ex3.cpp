
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout <<"  --------------------------------------";
    cout <<"\n  | The Certain Anemic Frog Challenge |\n";
    cout <<"  --------------------------------------\n\n";

    char cont;
    do
    {
        double JS=1;
        //JS : Jumps Shorten
        int D,S,K,crntjmps=0;
        char dcsn='Y';
        cout<<" Enter the number of meters          : ";
        cin>>D;
        cout<<" Enter the number the min length     : ";
        cin>>K;
        cout<<" Enter the length of the jumps in CM : ";
        cin>>S;
        if (D<0 || K<0 || S<0)
            {
                cout<<" The number must be positive! ";
                break;
            }
        int t=D%2;
        D=D*100;
        while(dcsn!='N' && D>0 )
        {
            crntjmps++;
            D=D-S;
            if(crntjmps%5==0)
            {
                if(t==0)S=floor(S*JS/(JS+1));
                else S=round(S*JS/(JS+1));
                JS++;
                if(S<K)
                    dcsn='N';
                // if the distance is even number we use floor else we use round
            }
        }
        if(dcsn=='N')
            cout<<" NO "<<endl;
        else
            cout<<"\n Yes in "<<crntjmps<<" jumps "<<endl;
        cout <<"\n--------------------END--------------------\n"<<endl;
        cout<<" Do you want to continue? "<<endl;
        cin>>cont;
        cin.ignore(100, '\n');
    }
    while (cont=='y' || cont=='y');
    return 0;
}
