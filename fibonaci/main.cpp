#include <iostream>
#include <iomanip>
using namespace std;
int n; //n-ty wyraz ciagu
long double fib[100000]; //tablica 10 000 wyrazowa wyrazy sa numerowane od 0
long double proporcja=0;

int main()
{
    cout << "Ile wyrazów ciągu Fibonaciego chcesz zobaczyć?" << endl;
    cin>>n;

    fib[0]=1;
    fib[1]=1;
    


    for (int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
cout<<setprecision(70);
    for (int i=0;i<n;i++)
    {
        cout<<endl<<"wyraz nr:"<<i+1<<": "<<fib[i];
        proporcja=fib[i-1]/fib[i-2];

    }
  cout<<endl<<endl<<"Przybliżenie złotej proporcji wynosi: "<<proporcja<<endl;

    return 0;
}
