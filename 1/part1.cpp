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

    for(int i = 0 ; i < size(left) ; i++)
    {
        cout << left[i] << "left" << right[i] << endl;
        somma += abs(left[i] - right[i]);

    }

    cout << somma << endl;



    return 0;
}