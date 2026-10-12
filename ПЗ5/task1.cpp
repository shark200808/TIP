#include <iostream>
using namespace std;

int main() {
    int x,y,s,x1,x2,x3;
    s=0;
    cin >> x >> y;
    x1=x;
    x2=x;
    x3=x;
    
    
    while (x1<y) {
        x1+=x1*0.1;
        s+=1;
    }
    
    
    cout << s << endl;
    s=0;
    x1=x;
    
    
    while (true) {
        if (x1<y) {
            x1+=x1*0.1;
            s+=1;
        }
        else {
            break;
        }
    }
    
    
    cout << s << endl;
    s=0;
    
    
    for (int i=0;x2<y;i++) {
        x2+=x2*0.1;
        s=i+1;
    }
    
    
    cout << s << endl;
    s=0;
    
    
    do {
        if (x3<y) {
            x3+=x3*0.1;
            s++;
        }
        else {
            break;
        }
    }
    while (true);
    
    
    cout << s << endl;
    s=0;
    x3=x;
    
    
    do {
        x3+=x3*0.1;
        s++;
    }
    while (x3<y);
    
    
    cout << s;
    return 0;
}
}
