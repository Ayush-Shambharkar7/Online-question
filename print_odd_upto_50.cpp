#include<iostream>
using namespace std;

int main(){
    int n , i;
    for (i = 0; i <= 50; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout << i <<endl;
    }
    
    return 0;
}

/*
OUTPUT
1
3
5
7
9
11
13
15
17
19
21
23
25
27
29
31
33
35
37
39
41
43
45
47
49
*/