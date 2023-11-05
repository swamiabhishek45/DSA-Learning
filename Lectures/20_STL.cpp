#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    // ****** STL Array*******
    // int arr[3] = {1,2,3};

    // array<int,4> a = {1,2,3,4};

    // int size = a.size();
    // for(int i =0 ;i<size;i++){
    //     cout<<arr[i]<<endl;
    // }

    // cout<<"Index value : "<<a.at(2)<<endl;
    // cout<<"Empty or not : "<<a.empty()<<endl;
    // cout<<"First Element : "<<a.front()<<endl;
    // cout<<"Last Element : "<<a.back()<<endl;

    // ******Vector************
    // vector<int> v;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // cout<<"Size : "<<v.size()<<endl;

    // v.push_back(1);
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // cout<<"Size : "<<v.size()<<endl;

    // v.push_back(2);
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // cout<<"Size : "<<v.size()<<endl;

    // v.push_back(3);
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // cout<<"Size : "<<v.size()<<endl;

    // **********Deque************
    // deque<int> d;

    // d.push_back(1);
    // d.push_front(2);

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // ********Priority Queue**********
    // max heap
    // priority_queue<int> maxi;

    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(4);

    // cout<<"Size: "<<maxi.size()<<endl;
    // int n = maxi.size();
    // for(int i = 0; i< n; i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;

    // // min heap
    // priority_queue<int, vector<int>, greater<int>> mini;

    // mini.push(1);
    // mini.push(2);
    // mini.push(3);
    // mini.push(4);

    // cout<<"Size: "<<mini.size()<<endl;
    // int m = mini.size();
    // for(int i = 0; i< m; i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }

    // ******set********

    // set<int> s;

    // s.insert(1);
    // s.insert(3);
    // s.insert(2);
    // s.insert(2);
    // s.insert(5);
    // s.insert(4);
    // s.insert(4);
    // s.insert(8);
    // s.insert(7);
    // s.insert(9);

    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }   cout << endl;

    // cout<<"Element is yes or no: "<<s.count(5)<<endl;

    // set<int>::iterator itr = s.find(5);

    // for(auto it = itr; it!=s.end(); it++){
    //     cout<<*it<< " ";
    // }

    // *******Map********

    // map<int, string> m;

    // m[1] = "Iron Man";
    // m[12] = "HULK";
    // m[4] = "THOR";

    // m.insert( {5,"Super Man"});

    // for( auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //********Algorithm**********

    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);

    cout<<binary_search(v.begin(), v.end(),5);  // 5 prestnt or not
    return 0;
}