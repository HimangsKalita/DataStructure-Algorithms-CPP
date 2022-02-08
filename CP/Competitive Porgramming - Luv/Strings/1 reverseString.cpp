//https://practice.geeksforgeeks.org/problems/reverse-a-string/1

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1;

    for (int i = s1.length() - 1; i >= 0; --i)
    {
        s2.push_back(s1[i]);
    }

    cout << s2 << endl;

    return 0;
}