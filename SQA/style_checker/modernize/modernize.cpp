//Zamienić kode na C++11 za pomocą clang-modernize
#include <vector>
#include <iostream>

using namespace std;

void func(int val)
{
   cout <<  val;
}

void func(int * val)
{
    if (val == NULL)
    {
        val = new int(5);
    }
    cout << *val;
}


int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int * pointer = NULL;
    pointer = new int(10);

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it;
    }

    for (auto & elem : v)
    {
        cout << elem;
    }

    cout << "Calling function with NULL" << endl;
    func(NULL);
    cout << "Calling function with pointer" << endl;
    func(pointer);
    cout << "Calling function with value" << endl;
    func(23);
}
