// structures with struct keyword;
#include<iostream>
using namespace std;
void add(int m)
{
    cout<<"This is integer:"<<m<<endl;
}
void add(double p)
{
    cout<<"This is decimal num:"<<p<<endl;
}
void add(string s)
{
    cout<<"This is string:"<<s<<endl;
}
void add(char c)
{
    cout<<"This is char:"<<c<<endl;
}
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    // add(105);
    // add("p");

    add('h');
    cout<<fact(5)<<endl;
    int arr[2][2]={1,2,3,4};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    string names[3]={"prince","charles","amy"};
    for(int i=0;i<3;i++)
    {
        cout<<names[i]<<" ";
    }

    // to reverse a string reverse(s.begin(),s.end());

    int N;
    cin >> N;

    vector<string> words(N);
    unordered_map<string, vector<string>> anagramMap;

    for (int i = 0; i < N; i++) {
        cin >> words[i];
        string sortedWord = words[i];
        sort(sortedWord.begin(), sortedWord.end());
        anagramMap[sortedWord].push_back(words[i]);
    }

    int Q;
    cin >> Q;
    while (Q--) {
        string query;
        cin >> query;
        string sortedQuery = query;
        sort(sortedQuery.begin(), sortedQuery.end());

        if (anagramMap.find(sortedQuery) != anagramMap.end()) {
            vector<string> result = anagramMap[sortedQuery];
            sort(result.begin(), result.end()); // Lexicographical order
            for (string& str : result) {
                cout << str << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}