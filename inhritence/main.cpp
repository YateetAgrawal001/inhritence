#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int row=dimensions.size();
        int x=0;
        int y=1;
        double dia_len;
        int temp;
        vector<double> v;
        vector<int> area;
        int result;
            for(int j=0;j<row;j++){
                
                    temp=(dimensions[j][x]*dimensions[j][x]+dimensions[j][y]*dimensions[j][y]);
                
                area.push_back(temp);
                dia_len = sqrt(temp);
                v.push_back(dia_len);
                temp=0;
            }
        for(int i=0;i<v.size();i++){
            if(v[i]<v[i+1])  result=area[i+1];
            
            else if(v[i]==v[i+1]) result=v[i];
            
            else result=v[i];
        }
        return result;
    }

int main(){
    vector<vector<int>> dimensions;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>dimensions[i][j];
        }
    }
    areaOfMaxDiagonal(dimensions);
}
