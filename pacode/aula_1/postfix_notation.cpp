#include <bits/stdc++.h>
#include <cmath>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) << #x << " = " << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

int main(){

    stack<double> vals;
    
    string input;
    while(cin >> input){
        if(input != "+" && input != "*" && input != "-" && input != "/" && input != "%" && input != "^"){
            ll val = atol(input.c_str());
            vals.push((double)val);
        }
        
        if(input == "+"){
            double sum = 0;
            while(!vals.empty()){
                sum+= vals.top();
                vals.pop();
            }
            vals.push(sum);
        }

        if(input == "-"){
            double sum = 0;
            double last_value;
            while(!vals.empty()){
                sum+= vals.top();
                last_value = vals.top();
                vals.pop();
            }

            double final_value =  (2*last_value) - sum;
            vals.push(final_value);
        }

        if(input == "*"){
            double multi = 1;
            while(!vals.empty()){
                multi*= vals.top();
                vals.pop();
            }
            vals.push(multi);
        }


        //100 5 /
        // q = 5 100
        // last value = 100
        // div = q.top() -> 100; q.pop(); div /= q.top() - > 20;
        if(input == "/"){
            double last_value;

            stack<double> q;
            while(!vals.empty()){
                q.push(vals.top());
                last_value = vals.top();
                vals.pop();
            }

            double div = last_value;
            q.pop();
            while(!q.empty()){
                div /= q.top();
                q.pop();
            }

            vals.push(div);
        }

        if(input == "%"){
            double last_value;

            stack<ll> q;
            while(!vals.empty()){
                q.push(vals.top());
                last_value = vals.top();
                vals.pop();
            }

            ll mod = (ll)last_value;
            q.pop();

            while(!q.empty()){
                mod %= q.top();
                q.pop();
            }

            vals.push((double)mod);
        }


        if(input == "^"){
            double last_value;

            stack<double> q;
            while(!vals.empty()){
                q.push(vals.top());
                last_value = vals.top();
                vals.pop();
            }
/*
            double expo; 
            double next = last_value;
            q.pop();

            while(!q.empty()){
                expo = exp(next);
                next = expo;
                q.pop();
            }

            vals.push(next);
*/          
            
            // 2 5 ^ 
            // q = 5 2
            // next = 2; q.pop();
            // q = 5; expo = pow(2, 5)
            // next = pow(2, 5); q.pop();
            // q.empty() = true


            double expo;
            double next = last_value;
            q.pop();

            while(!q.empty()){
                expo = pow(next, q.top());
                next = expo;
                q.pop();   
            }
            
            vals.push(next);
        }
        
    }

    printf("%.5lf\n", vals.top());


    return 0;
}   
