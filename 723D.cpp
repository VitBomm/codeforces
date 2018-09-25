#include <iostream>
#include <queue>
#include <functional>
#define MAX 51
using namespace std;
const int dr[] = {0, 0, 1, -1};
const int dc[] = {1, -1, 0, 0};
int countland = 0;
int countriver = 0;
int w,h,k;
bool visited[MAX][MAX];
string maze[MAX];
struct Cell {
    int r, c;
    bool operator == (const Cell &other) const {
        return r == other.r && c == other.c;
    }
};

bool isValid(int r, int c) {
    return r >= 0 && r < h && c >= 0 && c < w;
}
bool isRiver(int r, int c)
{
    return r==0 || r == h-1 || c== 0 || c == w-1;
}
struct Land{
    int soluong;
    bool isRiver = false;
    vector<Cell> vLand;
};
struct Comp{
  bool operator ()(const Land &a, const Land &b)
    {
        return a.soluong > b.soluong;
    }
};

Land BFS(Cell s) {
    Land pLand;
    pLand.soluong = 1;
    countland++;
    queue<Cell> q;
    pLand.vLand.push_back(Cell{s.r,s.c});
    if(isRiver(s.r, s.c) && maze[s.r][s.c] == '.')
        {
            pLand.isRiver = true;
        }
    visited[s.r][s.c] = true;
    q.push(s);
    while (!q.empty()) {
        Cell u = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int r = u.r + dr[i];
            int c = u.c + dc[i];
            if(isRiver(r, c) && maze[r][c] == '.' )
            {
                pLand.isRiver = true;
            }
            if (isValid(r, c) && maze[r][c] == '.' && !visited[r][c]) {
                visited[r][c] = true;
                pLand.vLand.push_back(Cell{r,c});
                q.push((Cell) {r, c});
                pLand.soluong++;
            }
        }
    }
    if(pLand.isRiver == true)
    {
        countriver++;
    }
    return pLand;
}

int main() {
        priority_queue <Land,vector<Land>,Comp > pq;
        int countcell = 0;
        cin >> h >> w >> k;
        for (int i = 0; i < h; i++) {
            cin >> maze[i];
        }
        cout<<endl;
        Cell start;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if(maze[i][j]=='.' && visited[i][j] == false)
                {
                    start.r = i;
                    start.c = j;
                    Land b = BFS(start);
                    if(b.isRiver == false)
                    {
                        pq.push(b);
                    }
                }
                
            }
        }
    int temp = k+countriver;
    for(int i = 0;i<countland - temp;i++)
    {
        Land landtemp = pq.top();
        pq.pop();
        countcell += landtemp.soluong;
        for(int i = 0 ; i < landtemp.vLand.size();i++)
        {
            maze[landtemp.vLand[i].r][landtemp.vLand[i].c] = '*';
        }
    }
    cout<<countcell<<endl;
    for(int i = 0 ; i<h;i++)
        {
            cout<<maze[i]<<endl;
        }
        
    
    return 0;
}
