#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,somma = 0;
    vector<int> left,right;
    ifstream cin("file.txt");

    while (cin >> a >> b) 
    { 
        left.push_back(a);
        right.push_back(b);
    }

    sort(left.begin(),left.end());
    sort(right.begin(),right.end());

    int r = 0;
    for(int i = 0 ; i < size(left) ; i++)
    {
        cout << left[i] << "left" << right[i] << endl;
        for ( int j = 0; j < size(right) ; j++)
        {
            if(left[i] == right[j])r++;
            if(r > 0 && left[i] != right[j])break;
        }

        somma += left[i] * r;
        r = 0;
    }

    cout << somma << endl;



    return 0;
}