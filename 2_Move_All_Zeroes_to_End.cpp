#include <bits/stdc++.h>
using namespace std;

// with extra space approch.
vector<int> move_zeroes_right(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    while (j < n)
    {
        temp[j++] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    return arr;
}

// without extra space

vector<int> move_zeroes_right1(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n)
    {
        arr[count] = 0;
        count++;
    }

    return arr;
}


// same but with one treverse
vector<int> move_zeroes_right2(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};

    cout << "with extra space " << endl;
    vector<int> result = move_zeroes_right(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    vector<int> result1 = move_zeroes_right1(arr);

    cout << "without extra space " << endl;
    for (int i = 0; i < result1.size(); i++)
    {
        cout << result1[i] << " ";
    }
     cout << endl;
    vector<int> result2 = move_zeroes_right1(arr);

    cout << "without extra space and one treverse only " << endl;
    for (int i = 0; i < result1.size(); i++)
    {
        cout << result2[i] << " ";
    }
    return 0;
}
