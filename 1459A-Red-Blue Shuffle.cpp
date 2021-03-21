using namespace std;
#include <stdio.h>	 
#include <bits/stdc++.h>

void run_case(){
    int N;
    string red, blue;
    cin>>N>>red>>blue;
    
    int count =0;

    
    for (int i = 0; i < N ; i++) 
    {
        if (red[i]>blue[i])
        {
            count++;
        }else if(red[i]<blue[i]){
            count--;
        }
    }
    cout<< (count == 0 ? "EQUAL" : (count > 0 ? "RED" : "BLUE")) <<endl;  
}

// Driven program	 
int main() 
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tests;
  cin>>tests;
  
  while(tests--)
  run_case();
	return 0; 
} 