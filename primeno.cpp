#include <iostream>
using namespace std;

int main(){
        int n, i, j;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        j=2;
        bool divided = false;
        while(j<i)
        {
            if(i%j==0)
            {
                divided = true;
                break;
            }
            j++;
        }
        if(divided == false)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
