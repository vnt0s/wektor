#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    srand(time(NULL));
    vector<vector<int>> tab(n);         //czyli cos co przypomina tablice dwuwymiarowa

    for (int i=0;i<n;i++)
    {
        tab[i].resize(i+1);    //kazdy kolejne wiersz bedzie mial i+1 elementow pierwszy bedzie mial 1 drugi 2 itd itd
        for (int j=0;j<=i;j++)
        {
            tab[i][j]=rand()%100;
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
