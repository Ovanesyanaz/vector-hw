#include <iostream>
#include "vector.h"
#include <string>
#include <vector>

using namespace std;

vector<int> func() {
       vector<int> vec(1000000000); // должен весить 3,7 гб 
       return vec;
}

int main()
{
    // if (true){                                    //вектор а отчиститься после выполнения блока
    //     int a{};
    //     vector<int> vec(1000000000);
    //     cin >> a;
    //     cout << "ok";
    // }
    // int a{};
    



    // vector<int> b = func();                        // исходный вектор, созданный в func удалится
    

    if(true){                                          // после выхода из блока утечек из-за вложенности не происходит
        vector<vector<int>> v(5);
        for(int i = 0;i < v.size(); i ++){
            for(int j = 0;j < 10000000; j++){
                v[i].push_back(0);
            }
        } 
        int a;
        cin >> a;
    }
    int a;
    vector<vector<int>> v(5);
    
    
    cin >> a;
    

    return 0;
}