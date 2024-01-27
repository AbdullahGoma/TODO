#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int grid[MAX][MAX];

int maxpathsum(int r,int c){
    if(!valid(r,c)){
        return 0;
    }
    if(r == n-1 && c == n-1){
        return grid[r][c];
    }
    int path1 = maxpathsum(r,c+1);
    int path2 = maxpathsum(r+1,c);

    return grid[r][c] + max(path1,path2);
}

int main(){
    int r,c;

    cout << "Enter number of column and raws : " << endl;
    cin >> r,c;
    
    
}