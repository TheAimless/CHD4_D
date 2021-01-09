#include<iostream>
using namespace std;
int num[150][150][150];
int type=1;
void solve(int x1, int y1,int z1,int size,int x2,int y2,int z2){
    if (size==2){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                for (int z=0;z<2;z++){
                    if (x2+i != x1 && y2+j != y1 && z2+z != z1)num[x2+i][y2+j][z2+z]=type;
                }
            }
        }
        type++;
        return;
    }
    int tamx=x2+size/2-1;
    int tamy=y2+size/2-1;
    int tamz=z2+size/2-1;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){continue;}
                num[tamx+i][tamy+j][tamz+z]=type;
            }
        }
    }
    type++;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                int x3=x2+(size/2)*i;
                int y3=y2+(size/2)*j;
                int z3=z2+(size/2)*z;
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){solve(x1,y1,z1,size/2,x3,y3,z3);continue;}
                solve(tamx+i,tamy+j,tamz+z,size/2,x3,y3,z3);
            })
        }
    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int k,x,y,z;
        cin>>k>>x>>y>>z;
        int haik=1;
        for (int i=0;i<k;i++){haik *= 2;}
        solve(x,y,z,haik,1,1,1);
        for (int i=0;i<haik;i++){
            for (int j=0;j<haik;j++){
                for (int k=0;k<haik;k++){
                    cout<<num[i][j][k]<<' ';
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }

    return 0;
}

Phạm đã gửi Hôm nay lúc 14:41
#include<iostream>
using namespace std;
int num[150][150][150];
int type=1;
void solve(int x1, int y1,int z1,int size,int x2,int y2,int z2){
    if (size==2){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                for (int z=0;z<2;z++){
                    if (x2+i != x1 || y2+j != y1 || z2+z != z1)num[x2+i][y2+j][z2+z]=type;
                }
            }
        }
        type++;
        return;
    }
    int tamx=x2+size/2-1;
    int tamy=y2+size/2-1;
    int tamz=z2+size/2-1;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){continue;}
                num[tamx+i][tamy+j][tamz+z]=type;
            }
        }
    }
    type++;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                int x3=x2+(size/2)*i;
                int y3=y2+(size/2)*j;
                int z3=z2+(size/2)*z;
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){solve(x1,y1,z1,size/2,x3,y3,z3);continue;}
                solve(tamx+i,tamy+j,tamz+z,size/2,x3,y3,z3);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        int k,x,y,z;
        cin>>k>>x>>y>>z;
        int haik=1;
        for (int i=0;i<k;i++){haik *= 2;}
        solve(x,y,z,haik,1,1,1);
        for (int i=1;i<=haik;i++){
            for (int j=1;j<=haik;j++){
                for (int k=1;k<=haik;k++){
                    cout<<num[i][j][k]<<' ';
                }
                cout<<'\n';
            }
            cout<<'\n';
        }
    }

    return 0;
}
#include<iostream>
using namespace std;
int num[150][150][150];
int type=1;
void solve(int x1, int y1,int z1,int size,int x2,int y2,int z2){
    if (size==2){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                for (int z=0;z<2;z++){
                    if (x2+i != x1 || y2+j != y1 || z2+z != z1)num[x2+i][y2+j][z2+z]=type;
                }
            }
        }
        type++;
        return;
    }
    int tamx=x2+size/2-1;
    int tamy=y2+size/2-1;
    int tamz=z2+size/2-1;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){continue;}
                num[tamx+i][tamy+j][tamz+z]=type;
            }
        }
    }
    type++;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int z=0;z<2;z++){
                int x3=x2+(size/2)*i;
                int y3=y2+(size/2)*j;
                int z3=z2+(size/2)*z;
                if ((i == x1-x2>=size/2) && (j==y1-y2>=size/2) && (z == z1-z2>=size/2)){solve(x1,y1,z1,size/2,x3,y3,z3);continue;}
                solve(tamx+i,tamy+j,tamz+z,size/2,x3,y3,z3);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        int k,x,y,z;
        cin>>k>>x>>y>>z;
        int haik=1;
        for (int i=0;i<k;i++){haik *= 2;}
        solve(x,y,z,haik,1,1,1);
        for (int i=1;i<=haik;i++){
            for (int j=1;j<=haik;j++){
                for (int k=1;k<=haik;k++){
                    cout<<num[i][j][k]<<' ';
                }
                cout<<'\n';
            }
            cout<<'\n';
        }
    }

    return 0;
}