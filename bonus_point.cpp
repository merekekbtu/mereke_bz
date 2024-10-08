/*ex_1*/
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if ( a % 4 == 0 || a % 400 == 0 && a % 100 = 0) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

/*ex_2*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = a + 1;
    int d = a - 1;
    cout <<"The next number for the number" <<" "<<  a << " "<<  "is" << " " << p << "." << endl;
    cout <<"The previous number for the number" << " " << a << " " << "is" << " " << d << "." << endl;
    return 0;
}

/*ex_3*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int p = b % a;
    cout << p << endl; 
    return 0;
}

/*ex_4*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int p = (a * b) - 108;
    cout << p << endl; 
    return 0;
}

/*ex_5*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = (a / 10) % 10;
    cout << p << endl; 
    return 0;
}

/*ex_6*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p = n + 1;
    cout << p;
    return 0;
}

/*ex_7*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if ( x > 0){
        cout << 1;
    } else if( x < 0){
        cout << -1;
    } else if(x == 0) {
        cout << 0;
    } 
    }


/*ex_8*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if ( x > 0){
        cout << 1;
    } else if( x < 0){
        cout << -1;
    } else if(x == 0) {
        cout << 0;
    } 
    }

/*ex_9*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b || a > c){
        cout << a;
    } else if(b > a || b > c){
       cout << b;
    } else if ( c > a  || c >> b){
        cout << c;
    }
}

/*ex_10*/

#include <iostream>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    long long max = a;
    if (b > max){
        max = b;
    } if(c > max ){
       max = c;
    } 
        cout << max;
        return 0;
    }
 
 /*ex_11*/

 #include<iostream>
using namespace std;


int main() {
int a, b, c, d;
cin >> a >> b >> c >> d;
if ( a + 1 < c || c + 1 < a || b + 1 < d || d + 1 < b)
{
cout << "NO";
}
else
{
cout << "YES";
}
return 0;
}

/*ex_12*/

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c || a + c > b || b + c > a){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}

/*ex_13*/
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && a == c && b == c){
        cout << 3 << endl;
        else if ( a != b && b != c && a != c){
            cout << 2 << endl;
        } else{
            cout << 0 << endl;
    
            }    }
        return 0;
}

/*ex_14*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = c - a;
    int f = d - b;
    cout << e;
    cout << f;
    return 0;
}

/*ex_15*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool even = a % 2 == 0 || b %  2 == 0 || c % 2 == 0;
    bool odd = a % 2 != 0 || b %  2 != 0 || c % 2 != 0;
    if (even && odd){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

/*ex_16*/
#include <iostream>

using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;
    if ((k % n == 0 || k % m == 0) && k < n * m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

/*ex_17*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a / d == 0 || b / d == 0){
        a++;
        b++;
    }
    
    while (a <= b){
        cout << a << " ";
        a = a + 2;
         } 
    }

/*ex_18*/
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    while (a < b){if (a * a < b ){
    cout << a << " ";}a++;
         } 
      return 0;   
    }

/*ex_19*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = 0;
    
    
    
    while (a <= b){
      c++}       a++;
          
      return 0;   
}

/*ex_20*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;

    while(b>0){
        if(b%10==a){
            sum++;
        }
        b=b/10;
    }
    cout<<sum;
}

/*ex_21*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;

    while(a>0){
        if(a%10==b){
            b++;
        }
        a=a/10;
    }
    cout<<sum;
}

/*ex_22*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = 0;

    while(a>0){
       p=a%10;
    a/=10;    
    cout << p;}
}

/*ex_23*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int i= 1;

    while(i <= a){
    if(a % i == 0){
      cout << i << " ";
    }
   i++;      
} 
}

/*ex_24*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int i= 1;
    int sum = 0;

    while(i <= a){
    if(a % i == 0){
      sum++;
    }
   i++;   
   cout << sum;   
} 
}

/*ex_25*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 100) {
    
            sum += i; 
     i++;          }
    

    cout << sum;

    return 0;
}

/*ex_26*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
while(n > 0){
    n % 10 == 0;
    sum+=n;
}
n / 10 == 0;
    return 0;
}

/*ex_27*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
while(n != 0){
    sum+=n % 10;
n = n / 10;}
cout << sum;

    return 0;
}

/*ex_28*/
#include <algorithm>
#include <set>
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    set<int>setA;
    set<int>setB;
    int p;
    for(int i = 0; i < a; i++){
        cin >> p;
        setA.insert(p);
}
for (int i = 0; i < b; i++){
    cin >> p;
    setB.insert(p);
}
bool isSubset = true;

for(int x : setB){
    if(setA.find(x) ==setA.end()){
        isSubset = false;
        break;
    }}
    if(isSubset){
        cout << "True";
    } else {
        cout << "NO";
    }



}


/*ex_29*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = a % 100;
    cout << p << endl; 
    return 0;
}


/*ex_30*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = a % 10;
    cout << p << endl; 
    return 0;
}

/*ex_31*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = a % 10;
    cout << p << endl; 
    return 0;
}

/*ex_33*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = (a / 10) % 10;
    int q = a % 10;
    int f = a % 100
    int r = p + q + f;
    cout << r << endl; 
    return 0;
}

/*ex_34*/
#include <iostream>
#include <cmath>
using namespace std;

double distanceFromOrigin(int x, int y) {
    return sqrt(x * x + y * y);
}

int main() {
    int n;
    cin >> n; 

    int x, y;
    int farthestX = 0, farthestY = 0;
    double maxDistance = -1.0;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y; 
        double dist = distanceFromOrigin(x, y);

        if (dist > maxDistance) {
            maxDistance = dist;
            farthestX = x;
            farthestY = y;
        }
    }
    cout << farthestX << " " << farthestY << endl;

    return 0;
}

/*ex_35*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;  
    cin >> N;

    set<int> mySet;  

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;  

        if (command == "ADD") {
            int num;
            cin >> num;
            mySet.insert(num);  
        } else if (command == "PRESENT") {
            int num;
            cin >> num;
            if (mySet.count(num)) {  
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (command == "COUNT") {
            cout << mySet.size() << endl;  
        }
    }

    return 0;
}
 /*ex36*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2;
    int num;

    
    while (cin.peek() != '\n') {
        cin >> num;
        set1.insert(num);
    }

    
    cin.ignore();

    
    while (cin >> num) {
        set2.insert(num);
    }

    
    int count = 0;
    for (int x : set1) {
        if (set2.find(x) != set2.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

/*ex_37*/
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    
    std::set<int> set1, set2;
    int number;

   while (std::cin.peek() != '\n') {
        std::cin >> number;
        set1.insert(number);
    }
    std::cin.ignore();  


    while (std::cin.peek() != '\n') {
        std::cin >> number;
        set2.insert(number);
    }

    
    std::vector<int> result;


    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::back_inserter(result));


    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}


/*ex_38*/
#include <iostream>
#include <set>

int main() {
    std::set<int> seen_numbers;  
    int number;

    
    while (std::cin >> number) {
        if (seen_numbers.find(number) != seen_numbers.end()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            seen_numbers.insert(number);  
        }
    }

    return 0;
}

/*ex_39*/
#include <iostream>
#include <cctype>  

bool IsDigit(unsigned char c) {
    return isdigit(c);  
}

int main() {
    char c;
    std::cin >> c;  
    
    if (IsDigit(c)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}

/*ex_40*/
#include <iostream>
#include <cctype>  
char ChangeCase(char c) {
    if (islower(c)) {
        return toupper(c);  
    } else if (isupper(c)) {
        return tolower(c);  
    }
    return c;  
}

int main() {
    char c;
    std::cin >> c; 
    
    std::cout << ChangeCase(c) << std::endl;  

    return 0;
}



    
