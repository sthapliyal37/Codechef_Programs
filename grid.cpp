#include <bits/stdc++.h> 
using namespace std; 

int ROW=0,COL=0;
vector<vector<pair<int,int> > >v(300,vector<pair<int,int > >(300));
stack<pair<int,int> > ss;
struct cell 
{ 
    int x, y; 
    int distance; 
    cell(int x, int y, int distance) : 
        x(x), y(y), distance(distance) {} 
}; 
void parent( vector<vector<pair<int,int> > >pp,int first,int second)
{
    if(pp[first][second].first==first && pp[first][second].second==second)
        return ;
    parent(pp,pp[first][second].first,pp[first][second].second);
        ss.push(make_pair(pp[first][second].first,pp[first][second].second));
}
bool operator<(const cell& a, const cell& b) 
{ 
    if (a.distance == b.distance) 
    { 
        if (a.x != b.x) 
            return (a.x < b.x); 
        else
            return (a.y < b.y); 
    } 
    return (a.distance < b.distance); 
} 


bool isInsideGrid(int i, int j) 
{ 
    return (i >= 0 && i < ROW && j >= 0 && j < COL); 
} 

void shortest(int row, int col,int *grid[300]) 
{ 
    int dis[row][col]; 
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            dis[i][j] = 9999; 

    int dx[] = {-1, 0, 1, 0}; 
    int dy[] = {0, 1, 0, -1}; 

    set<cell> st; 
    st.insert(cell(0, 0, 0)); 

    dis[0][0] = 0;//grid[0][0]; 

    while (!st.empty()) 
    { 
        cell k = *st.begin(); 
        st.erase(st.begin()); 
        for (int i = 0; i < 4; i++) 
        { 
            int x = k.x + dx[i]; 
            int y = k.y + dy[i]; 
            if (!isInsideGrid(x, y)) 
                continue; 
            if (dis[x][y] > (abs(dis[k.x][k.y] + grid[x][y]))) 
            { 
                if (dis[x][y] != 9999) 
                    st.erase(st.find(cell(x, y, dis[x][y]))); 
                dis[x][y] = abs(dis[k.x][k.y] - grid[x][y]);
                v[x][y].first=k.x;
                v[x][y].second=k.y;
                st.insert(cell(x, y, dis[x][y]));                 
            } 
        } 
    } 

    
    parent(v,row-1,col-1);
    /*
    for (int i = 0; i < row; i++, cout << endl) 
        for (int j = 0; j < col; j++) 
            cout << dis[i][j] << " ";  
    */    
   // return dis[row - 1][col - 1]; 
} 

int main() 
{
    cin>>ROW>>COL; 
    int *grid[ROW]; 
    for (int i=0; i<ROW; i++) 
         grid[i] = (int *)malloc(COL * sizeof(int));  
    for(int i=0;i<ROW;i++)
        for(int j=0;j<COL;j++)
        {
            cin>>grid[i][j];            
        } 
    shortest(ROW, COL,grid);        
    //cout<<ss.size()<<endl;
    int mini=abs(grid[ROW-1][COL-1]-grid[ss.top().first][ss.top().second]);
        //ss.pop();
    int f=ss.top().first,s=ss.top().second;
    ss.pop();
    while(!ss.empty()){
       // cout<<ss.top().first<<" "<<ss.top().second<<endl;
         //cout<<mini<<endl;
        mini=max(mini,abs(grid[f][s]-grid[ss.top().first][ss.top().second]));
        f=ss.top().first;
        s=ss.top().second;        
        ss.pop();    
    } 
    cout<<mini<<endl;
    return 0; 
} 

